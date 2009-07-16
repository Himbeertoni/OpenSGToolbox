// OpenSG Tutorial Example: Hello World
//
// Minimalistic OpenSG program
// 
// This is the shortest useful OpenSG program 
// (if you remove all the comments ;)
//
// It shows how to use OpenSG together with GLUT to create a little
// interactive scene viewer.
//

// General OpenSG configuration, needed everywhere
#include <OpenSG/OSGConfig.h>

// Methods to create simple geometry: boxes, spheres, tori etc.
#include <OpenSG/OSGSimpleGeometry.h>

// A little helper to simplify scene management and interaction
#include <OpenSG/OSGSimpleSceneManager.h>

#include <OpenSG/OSGSimpleMaterial.h>

#include <OpenSG/OSGComponentTransform.h>
#include <OpenSG/OSGTransform.h>
#include <OpenSG/OSGTypeFactory.h>
#include <OpenSG/OSGFieldFactory.h>

#include <OpenSG/OSGFieldContainerFactory.h>
#include <OpenSG/OSGSimpleAttachments.h>

#include <OpenSG/Toolbox/OSGFieldContainerUtils.h>

// Input
#include <OpenSG/Input/OSGKeyListener.h>
#include <OpenSG/Input/OSGWindowAdapter.h>
#include <OpenSG/Input/OSGWindowUtils.h>

//Animation
#include <OpenSG/Animation/OSGKeyframeSequences.h>
#include <OpenSG/Animation/OSGKeyframeAnimator.h>
#include <OpenSG/Animation/OSGFieldAnimation.h>
#include <OpenSG/Animation/OSGElapsedTimeAnimationAdvancer.h>

// Activate the OpenSG namespace
// This is not strictly necessary, you can also prefix all OpenSG symbols
// with OSG::, but that would be a bit tedious for this example
OSG_USING_NAMESPACE


// forward declaration so we can have the interesting stuff upfront
void setupAnimation(void);
void display(void);
void reshape(Vec2f Size);

class TutorialAnimationListener : public AnimationListener
{
public:
   virtual void animationStarted(const AnimationEvent& e)
   {
   }

   virtual void animationStopped(const AnimationEvent& e)
   {
   }

   virtual void animationPaused(const AnimationEvent& e)
   {
   }

   virtual void animationUnpaused(const AnimationEvent& e)
   {
   }

   virtual void animationEnded(const AnimationEvent& e)
   {
   }

   virtual void animationCycled(const AnimationEvent& e)
   {
       std::cout << "Animation Cycled.  Cycle Count: " << e.getAnimation()->getCycles() << std::endl;
   }

};

// The SimpleSceneManager to manage simple applications
SimpleSceneManager *mgr;

Time TimeLastIdle;
FieldAnimationPtr TheAnimation;
TutorialAnimationListener TheAnimationListener;
AnimationAdvancerPtr TheAnimationAdvancer;
MaterialPtr TheTorusMaterial;

KeyframeAnimatorPtr TheAnimator;
KeyframeTransformationsSequencePtr TransformationKeyframes;
KeyframeColorsSequencePtr ColorKeyframes;
KeyframeVectorsSequencePtr VectorKeyframes;
KeyframeRotationsSequencePtr RotationKeyframes;

bool ExitApp = false;

// Create a class to allow for the use of the Ctrl+q
class TutorialKeyListener : public KeyListener
{
public:

   virtual void keyPressed(const KeyEvent& e)
   {
       if(e.getKey() == KeyEvent::KEY_Q && e.getModifiers() & KeyEvent::KEY_MODIFIER_CONTROL)
       {
           ExitApp = true;
       }

       switch(e.getKey())
       {
       case KeyEvent::KEY_SPACE:
           TheAnimationAdvancer->pauseToggle();
           break;
       case KeyEvent::KEY_ENTER:
           if(!TheAnimationAdvancer->isRunning())
           {
                TheAnimationAdvancer->start();
           }
           else
           {
                TheAnimationAdvancer->stop();
           }
           break;
       }
   }

   virtual void keyReleased(const KeyEvent& e)
   {
   }

   virtual void keyTyped(const KeyEvent& e)
   {
   }
};

class TutorialWindowListener : public WindowAdapter
{
public:
    virtual void windowClosing(const WindowEvent& e)
    {
        ExitApp = true;
    }

    virtual void windowClosed(const WindowEvent& e)
    {
        ExitApp = true;
    }
};

class TutorialMouseListener : public MouseListener
{
  public:
    virtual void mouseClicked(const MouseEvent& e)
    {
    }
    virtual void mouseEntered(const MouseEvent& e)
    {
    }
    virtual void mouseExited(const MouseEvent& e)
    {
    }
    virtual void mousePressed(const MouseEvent& e)
    {
            mgr->mouseButtonPress(e.getButton(), e.getLocation().x(), e.getLocation().y());
    }
    virtual void mouseReleased(const MouseEvent& e)
    {
           mgr->mouseButtonRelease(e.getButton(), e.getLocation().x(), e.getLocation().y());
    }
};

class TutorialMouseMotionListener : public MouseMotionListener
{
  public:
    virtual void mouseMoved(const MouseEvent& e)
    {
            mgr->mouseMove(e.getLocation().x(), e.getLocation().y());
    }

    virtual void mouseDragged(const MouseEvent& e)
    {
            mgr->mouseMove(e.getLocation().x(), e.getLocation().y());
    }
};

class TutorialUpdateListener : public UpdateListener
{
  public:
    virtual void update(const UpdateEvent& e)
    {
		ElapsedTimeAnimationAdvancer::Ptr::dcast(TheAnimationAdvancer)->update(e.getElapsedTime());

		TheAnimation->update(TheAnimationAdvancer);
    }
};

// Initialize GLUT & OpenSG and set up the scene
int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);

    // Set up Window
    WindowEventProducerPtr TutorialWindowEventProducer = createDefaultWindowEventProducer();
    WindowPtr MainWindow = TutorialWindowEventProducer->initWindow();

	beginEditCP(TutorialWindowEventProducer, WindowEventProducer::UseCallbackForDrawFieldMask | WindowEventProducer::UseCallbackForReshapeFieldMask);
		TutorialWindowEventProducer->setUseCallbackForDraw(true);
		TutorialWindowEventProducer->setUseCallbackForReshape(true);
	endEditCP(TutorialWindowEventProducer, WindowEventProducer::UseCallbackForDrawFieldMask | WindowEventProducer::UseCallbackForReshapeFieldMask);

    TutorialWindowEventProducer->setDisplayCallback(display);
    TutorialWindowEventProducer->setReshapeCallback(reshape);

    //Add Window Listener
    TutorialWindowListener TheTutorialWindowListener;
    TutorialWindowEventProducer->addWindowListener(&TheTutorialWindowListener);
    TutorialKeyListener TheKeyListener;
    TutorialWindowEventProducer->addKeyListener(&TheKeyListener);
    TutorialMouseListener TheTutorialMouseListener;
    TutorialMouseMotionListener TheTutorialMouseMotionListener;
    TutorialWindowEventProducer->addMouseListener(&TheTutorialMouseListener);
    TutorialWindowEventProducer->addMouseMotionListener(&TheTutorialMouseMotionListener);
	TutorialUpdateListener TheTutorialUpdateListener;
    TutorialWindowEventProducer->addUpdateListener(&TheTutorialUpdateListener);

    // Create the SimpleSceneManager helper
    mgr = new SimpleSceneManager;

	
    TutorialWindowEventProducer->openWindow(Pnt2f(0,0),
                                        Vec2f(1280,1024),
                                        "OpenSG 01Animation Window");

    // Tell the Manager what to manage
    mgr->setWindow(TutorialWindowEventProducer->getWindow());

    //Torus Material
    TheTorusMaterial = SimpleMaterial::create();
    beginEditCP(TheTorusMaterial);
        SimpleMaterialPtr::dcast(TheTorusMaterial)->setAmbient(Color3f(0.3,0.3,0.3));
        SimpleMaterialPtr::dcast(TheTorusMaterial)->setDiffuse(Color3f(0.7,0.7,0.7));
        SimpleMaterialPtr::dcast(TheTorusMaterial)->setSpecular(Color3f(1.0,1.0,1.0));
    endEditCP(TheTorusMaterial);

    //Torus Geometry
    GeometryPtr TorusGeometry = makeTorusGeo(.5, 2, 32, 32);
    beginEditCP(TorusGeometry);
        TorusGeometry->setMaterial(TheTorusMaterial);
    endEditCP  (TorusGeometry);
    
    NodePtr TorusGeometryNode = Node::create();
    beginEditCP(TorusGeometryNode, Node::CoreFieldMask);
        TorusGeometryNode->setCore(TorusGeometry);
    endEditCP  (TorusGeometryNode, Node::CoreFieldMask);

    //Make Torus Node
    NodePtr TorusNode = Node::create();
    TransformPtr TorusNodeTrans;
    TorusNodeTrans = Transform::create();
    setName(TorusNodeTrans, std::string("TorusNodeTransformationCore"));

    beginEditCP(TorusNode, Node::CoreFieldMask | Node::ChildrenFieldMask);
        TorusNode->setCore(TorusNodeTrans);
        TorusNode->addChild(TorusGeometryNode);
    endEditCP  (TorusNode, Node::CoreFieldMask | Node::ChildrenFieldMask);

    //Make Main Scene Node
    NodePtr scene = Node::create();
    ComponentTransformPtr Trans;
    Trans = ComponentTransform::create();
    setName(Trans, std::string("MainTransformationCore"));
    beginEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);
    {
        scene->setCore(Trans);
 
        // add the torus as a child
        scene->addChild(TorusNode);
    }
    endEditCP  (scene, Node::CoreFieldMask | Node::ChildrenFieldMask);

    setupAnimation();

    // tell the manager what to manage
    mgr->setRoot  (scene);

    // show the whole scene
    mgr->showAll();

    TheAnimationAdvancer->start();
    
    while(!ExitApp)
    {
        TutorialWindowEventProducer->update();
        TutorialWindowEventProducer->draw();
    }

    osgExit();

    return 0;
}

// Redraw the window
void display(void)
{
    mgr->redraw();
}

// React to size changes
void reshape(Vec2f Size)
{
    mgr->resize(Size.x(), Size.y());
}

// react to keys
void keyboard(unsigned char k, int x, int y)
{
    /*switch(k)
    {
        case 27:        
        {
            OSG::osgExit();
            exit(0);
        }
        break;
        case 's':
            beginEditCP(TheAnimation, FieldAnimation::InterpolationTypeFieldMask);
                FieldAnimationPtr::dcast(TheAnimation)->setInterpolationType(STEP_INTERPOLATION);
            endEditCP(TheAnimation, FieldAnimation::InterpolationTypeFieldMask);
            break;
        case 'l':
            beginEditCP(TheAnimation, FieldAnimation::InterpolationTypeFieldMask);
                FieldAnimationPtr::dcast(TheAnimation)->setInterpolationType(LINEAR_INTERPOLATION);
            endEditCP(TheAnimation, FieldAnimation::InterpolationTypeFieldMask);
            break;
        case 'c':
            beginEditCP(TheAnimation, FieldAnimation::InterpolationTypeFieldMask);
                FieldAnimationPtr::dcast(TheAnimation)->setInterpolationType(CUBIC_INTERPOLATION);
            endEditCP(TheAnimation, FieldAnimation::InterpolationTypeFieldMask);
            break;
        case 'n':
            beginEditCP(TheAnimation, FieldAnimation::InterpolationTypeFieldMask);
                FieldAnimationPtr::dcast(TheAnimation)->setInterpolationType(LINEAR_NORMAL_INTERPOLATION);
            endEditCP(TheAnimation, FieldAnimation::InterpolationTypeFieldMask);
            break;
		case '1':
			beginEditCP(TheAnimator, KeyframeAnimator::KeyframeSequenceFieldMask);
				TheAnimator->setKeyframeSequence(ColorKeyframes);
			endEditCP(TheAnimator, KeyframeAnimator::KeyframeSequenceFieldMask);
			
			TheAnimation->setAnimatedField(TheTorusMaterial, std::string("diffuse"));
			
			break;
		case '2':
			beginEditCP(TheAnimator, KeyframeAnimator::KeyframeSequenceFieldMask);
				TheAnimator->setKeyframeSequence(TransformationKeyframes);
			endEditCP(TheAnimator, KeyframeAnimator::KeyframeSequenceFieldMask);

			TheAnimation->setAnimatedField(getFieldContainer("Transform",std::string("TorusNodeTransformationCore")), std::string("matrix"));
            break;
    }*/
}

void setupAnimation(void)
{
    //Color Keyframe Sequence
    ColorKeyframes = KeyframeColorsSequence3f::create();
    ColorKeyframes->addKeyframe(Color4f(1.0f,0.0f,0.0f,1.0f),0.0f);
    ColorKeyframes->addKeyframe(Color4f(0.0f,1.0f,0.0f,1.0f),2.0f);
    ColorKeyframes->addKeyframe(Color4f(0.0f,0.0f,1.0f,1.0f),4.0f);
    ColorKeyframes->addKeyframe(Color4f(1.0f,0.0f,0.0f,1.0f),6.0f);

	//Vector Keyframe Sequence
    VectorKeyframes = KeyframeVectorsSequence3f::create();
    VectorKeyframes->addKeyframe(Vec3f(0.0f,0.0f,0.0f),0.0f);
    VectorKeyframes->addKeyframe(Vec3f(0.0f,1.0f,0.0f),1.0f);
    VectorKeyframes->addKeyframe(Vec3f(1.0f,1.0f,0.0f),2.0f);
    VectorKeyframes->addKeyframe(Vec3f(1.0f,0.0f,0.0f),3.0f);
    VectorKeyframes->addKeyframe(Vec3f(0.0f,0.0f,0.0f),4.0f);
    
	//Rotation Keyframe Sequence
    RotationKeyframes = KeyframeRotationsSequenceQuat::create();
    RotationKeyframes->addKeyframe(Quaternion(Vec3f(0.0f,1.0f,0.0f), 3.14159f*0.0),0.0f);
    RotationKeyframes->addKeyframe(Quaternion(Vec3f(0.0f,1.0f,0.0f), 3.14159f*0.5),1.0f);
    RotationKeyframes->addKeyframe(Quaternion(Vec3f(0.0f,1.0f,0.0f), 3.14159f*1.0),2.0f);
    RotationKeyframes->addKeyframe(Quaternion(Vec3f(0.0f,1.0f,0.0f), 3.14159f*1.5),3.0f);
    RotationKeyframes->addKeyframe(Quaternion(Vec3f(0.0f,1.0f,0.0f), 3.14159f*0.0),4.0f);

	//Transformation Keyframe Sequence
    TransformationKeyframes = KeyframeTransformationsSequence44f::create();
	Matrix TempMat;
	TempMat.setTransform(Vec3f(0.0f,0.0f,0.0f), Quaternion(Vec3f(0.0f,1.0f,0.0f), 3.14159f*0.0));
    TransformationKeyframes->addKeyframe(TempMat,1.0f);
	TempMat.setTransform(Vec3f(0.0f,1.0f,0.0f), Quaternion(Vec3f(0.0f,1.0f,0.0f), 3.14159f*0.5));
    TransformationKeyframes->addKeyframe(TempMat,2.0f);
	TempMat.setTransform(Vec3f(1.0f,1.0f,0.0f), Quaternion(Vec3f(0.0f,1.0f,0.0f), 3.14159f*1.0));
    TransformationKeyframes->addKeyframe(TempMat,3.0f);
	TempMat.setTransform(Vec3f(1.0f,0.0f,0.0f), Quaternion(Vec3f(0.0f,1.0f,0.0f), 3.14159f*1.5));
    TransformationKeyframes->addKeyframe(TempMat,4.0f);
	TempMat.setTransform(Vec3f(0.0f,0.0f,0.0f), Quaternion(Vec3f(0.0f,1.0f,0.0f), 3.14159f*0.0));
    TransformationKeyframes->addKeyframe(TempMat,5.0f);
    
    //Animator
    TheAnimator = KeyframeAnimator::create();
    beginEditCP(TheAnimator, KeyframeAnimator::KeyframeSequenceFieldMask);
        TheAnimator->setKeyframeSequence(TransformationKeyframes);
    endEditCP(TheAnimator, KeyframeAnimator::KeyframeSequenceFieldMask);
    
    //Animation
    TheAnimation = FieldAnimation::create();
    beginEditCP(TheAnimation);
        TheAnimation->setAnimator(TheAnimator);
        TheAnimation->setInterpolationType(LINEAR_INTERPOLATION);
        TheAnimation->setCycling(-1);
    endEditCP(TheAnimation);
	TheAnimation->setAnimatedField(getFieldContainer("Transform",std::string("TorusNodeTransformationCore")), std::string("matrix"));

    //Animation Listener
    TheAnimation->addAnimationListener(&TheAnimationListener);

    //Animation Advancer
    TheAnimationAdvancer = ElapsedTimeAnimationAdvancer::create();
    beginEditCP(TheAnimationAdvancer);
    ElapsedTimeAnimationAdvancer::Ptr::dcast(TheAnimationAdvancer)->setStartTime( 0.0 );
    beginEditCP(TheAnimationAdvancer);
}
