// OpenSG Tutorial Example: Creating a Button Component
//
// This tutorial explains how to edit the basic features of
// a Button and a ToggleButtoncreated in the OSG User 
// Interface library.
// 
// Includes: Button PreferredSize, MaximumSize, MinimumSize, Font,
// Text,and adding a Button to a Scene.  Also note that clicking
// the Button causes it to appear pressed

// General OpenSG configuration, needed everywhere
#include "OSGConfig.h"

// Methods to create simple geometry: boxes, spheres, tori etc.
#include "OSGSimpleGeometry.h"

// A little helper to simplify scene management and interaction
#include "OSGSimpleSceneManager.h"
#include "OSGNode.h"
#include "OSGGroup.h"
#include "OSGViewport.h"

// the general scene file loading handler
#include "OSGSceneFileHandler.h"

//Input
#include "OSGWindowUtils.h"

//Text Foreground
#include "OSGSimpleTextForeground.h"

//Animation
#include "OSGKeyframeSequences.h"
#include "OSGKeyframeAnimator.h"
#include "OSGFieldAnimation.h"


//UserInterface Headers
#include "OSGUIForeground.h"
#include "OSGInternalWindow.h"
#include "OSGUIDrawingSurface.h"
#include "OSGGraphics2D.h"
#include "OSGFlowLayout.h"
#include "OSGLookAndFeelManager.h"
#include "OSGLayers.h"

#include "OSGComboBox.h"
#include "OSGDefaultMutableComboBoxModel.h"

// Activate the OpenSG namespace
// This is not strictly necessary, you can also prefix all OpenSG symbols
// with , but that would be a bit tedious for this example
OSG_USING_NAMESPACE

// forward declaration so we can have the interesting stuff upfront
void display(SimpleSceneManager *mgr);
void reshape(Vec2f Size, SimpleSceneManager *mgr);

void keyPressed(KeyEventDetails* const details)
{
    if(details->getKey() == KeyEventDetails::KEY_Q &&
       details->getModifiers() & KeyEventDetails::KEY_MODIFIER_COMMAND)
    {
        dynamic_cast<WindowEventProducer*>(details->getSource())->closeWindow();
    }
}

class SimpleScreenDoc
{
  public:
    SimpleScreenDoc(SimpleSceneManager*  SceneManager,
                    WindowEventProducer* MainWindow);

  private:
    SimpleTextForegroundRecPtr _DocForeground;
    SimpleTextForegroundRecPtr _DocShowForeground;
    FieldAnimationRecPtr _ShowDocFadeOutAnimation;

    SimpleScreenDoc(void);
    SimpleScreenDoc(const SimpleScreenDoc& );

    SimpleTextForegroundTransitPtr makeDocForeground(void);
    SimpleTextForegroundTransitPtr makeDocShowForeground(void);

    void keyTyped(KeyEventDetails* const details);
};

/******************************************************

  Documentation Foreground

 ******************************************************/
SimpleTextForegroundTransitPtr SimpleScreenDoc::makeDocForeground(void)
{
    SimpleTextForegroundRecPtr DocForeground =  SimpleTextForeground::create(); 

    DocForeground->addLine("This tutorial is a simple demonstration of the use");
    DocForeground->addLine("of \\{\\color=AAAA00FF ComboBox} and \\{\\color=AAAA00FF DefaultMutableComboBoxModel}.");
    DocForeground->addLine("");
    
    DocForeground->addLine("\\{\\color=AAAAAAFF Key Commands}:");
    DocForeground->addLine("   \\{\\color=AAAAFFFF Cmd+q}: Close the application");
    DocForeground->addLine("       \\{\\color=AAAAFFFF ?}: Show/hide this documentation");

    return SimpleTextForegroundTransitPtr(DocForeground);
}

// Initialize WIN32 & OpenSG and set up the scene
int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);

    {
        // Set up Window
        WindowEventProducerRecPtr TutorialWindow = createNativeWindow();
        TutorialWindow->initWindow();

        // Create the SimpleSceneManager helper
        SimpleSceneManagerRefPtr sceneManager = SimpleSceneManager::create();
        TutorialWindow->setDisplayCallback(boost::bind(display, sceneManager));
        TutorialWindow->setReshapeCallback(boost::bind(reshape, _1, sceneManager));

        // Tell the Manager what to manage
        sceneManager->setWindow(TutorialWindow);

        TutorialWindow->connectKeyTyped(boost::bind(keyPressed, _1));

        // Make Torus Node (creates Torus in background of scene)
        NodeRecPtr TorusGeometryNode = makeTorus(.5, 2, 16, 16);

        // Make Main Scene Node and add the Torus
        NodeRecPtr scene = Node::create();
        scene->setCore(Group::create());
        scene->addChild(TorusGeometryNode);

        // Create the Graphics
        GraphicsRecPtr graphics = Graphics2D::create();

        // Initialize the LookAndFeelManager to enable default settings
        LookAndFeelManager::the()->getLookAndFeel()->init();

        /******************************************************

          Create the DefaultMutableComboBoxModel and
          add Elements to it (several Colors
          in this case).  These will be the data
          values shown in the ComboBox.

         ******************************************************/   

        DefaultMutableComboBoxModelRecPtr ExampleComboBoxModel = DefaultMutableComboBoxModel::create();
        ExampleComboBoxModel->addElement(boost::any(std::string("Red")));
        ExampleComboBoxModel->addElement(boost::any(std::string("Green")));
        ExampleComboBoxModel->addElement(boost::any(std::string("Blue")));
        ExampleComboBoxModel->addElement(boost::any(std::string("Brown")));
        ExampleComboBoxModel->addElement(boost::any(std::string("Yellow")));
        ExampleComboBoxModel->addElement(boost::any(std::string("Orange")));
        ExampleComboBoxModel->addElement(boost::any(std::string("Violet")));
        ExampleComboBoxModel->addElement(boost::any(std::string("Black")));

        /******************************************************

          Create an editable ComboBox.  A ComboBox 
          has a Model just like various other 
          Components.  

         ******************************************************/   

        //Create the ComboBox
        ComboBoxRecPtr ExampleComboBox = ComboBox::create();

        // Set the Model created above to the ComboBox
        ExampleComboBox->setModel(ExampleComboBoxModel);

        // Determine where the ComboBox starts
        ExampleComboBox->setSelectedIndex(0);

        /******************************************************

          Create a non-editable ComboBox.  

          -setEditable(bool): Determine whether
          the user can type in the ComboBox
          or if it is uneditable.  In this
          case, it is set to false.

          When creating a non-editable ComboBox,
          a Renderer must also be assigned.  For
          editable ComboBoxes, the ComboBox
          automatically shows its text due to the
          nature of the ComboBox.  However, when
          uneditable, this aspect of the ComboBox
          is disabled, and so to display the 
          selection, a renderer must be created and
          assigned to the ComboBox.

Note: as with Sliders and ScrollBars,
having the same Model assigned causes
the ComboBoxes to be tied together.

         ******************************************************/   
        // Create another ComboBox
        ComboBoxRecPtr ExampleUneditableComboBox = ComboBox::create();

        // Set it to be uneditable
        ExampleUneditableComboBox->setEditable(false);
        ExampleUneditableComboBox->setModel(ExampleComboBoxModel);

        // Create The Main InternalWindow
        // Create Background to be used with the Main InternalWindow
        ColorLayerRecPtr MainInternalWindowBackground = ColorLayer::create();
        MainInternalWindowBackground->setColor(Color4f(1.0,1.0,1.0,0.5));

        LayoutRecPtr MainInternalWindowLayout = FlowLayout::create();

        InternalWindowRecPtr MainInternalWindow = InternalWindow::create();
        MainInternalWindow->pushToChildren(ExampleComboBox);
        MainInternalWindow->pushToChildren(ExampleUneditableComboBox);
        MainInternalWindow->setLayout(MainInternalWindowLayout);
        MainInternalWindow->setBackgrounds(MainInternalWindowBackground);
        MainInternalWindow->setAlignmentInDrawingSurface(Vec2f(0.5f,0.5f));
        MainInternalWindow->setScalingInDrawingSurface(Vec2f(0.5f,0.5f));
        MainInternalWindow->setDrawTitlebar(false);
        MainInternalWindow->setResizable(false);

        //Create the Drawing Surface
        UIDrawingSurfaceRecPtr TutorialDrawingSurface = UIDrawingSurface::create();
        TutorialDrawingSurface->setGraphics(graphics);
        TutorialDrawingSurface->setEventProducer(TutorialWindow);

        TutorialDrawingSurface->openWindow(MainInternalWindow);

        // Create the UI Foreground Object
        UIForegroundRecPtr foreground = UIForeground::create();

        foreground->setDrawingSurface(TutorialDrawingSurface);



        // Tell the manager what to manage
        sceneManager->setRoot(scene);

        // Add the UI Foreground Object to the Scene
        ViewportRecPtr viewport = sceneManager->getWindow()->getPort(0);
        viewport->addForeground(foreground);

        //Create the Documentation Foreground and add it to the viewport
        SimpleScreenDoc TheSimpleScreenDoc(sceneManager, TutorialWindow);

        // Show the whole scene
        sceneManager->showAll();

        //Open Window
        Vec2f WinSize(TutorialWindow->getDesktopSize() * 0.85f);
        Pnt2f WinPos((TutorialWindow->getDesktopSize() - WinSize) *0.5);
        TutorialWindow->openWindow(WinPos,
                                   WinSize,
                                   "33ComboBox");

        //Enter main Loop
        TutorialWindow->mainLoop();
    }

    osgExit();

    return 0;
}
// Callback functions


// Redraw the window
void display(SimpleSceneManager *mgr)
{
    mgr->redraw();
}

// React to size changes
void reshape(Vec2f Size, SimpleSceneManager *mgr)
{
    mgr->resize(Size.x(), Size.y());
}

SimpleTextForegroundTransitPtr SimpleScreenDoc::makeDocShowForeground(void)
{
    SimpleTextForegroundRecPtr DocShowForeground =  SimpleTextForeground::create(); 

    DocShowForeground->setSize(20.0f);
    DocShowForeground->setBgColor(Color4f(0.0f,0.0f,0.0f,0.0f));
    DocShowForeground->setShadowColor(Color4f(0.0f,0.0f,0.0f,0.0f));
    DocShowForeground->setBorderColor(Color4f(1.0f,1.0f,1.0f,0.0f));
    DocShowForeground->setHorizontalAlign(SimpleTextForeground::Middle);
    DocShowForeground->setVerticalAlign(SimpleTextForeground::Top);

    DocShowForeground->addLine("Press ? for help.");

    return SimpleTextForegroundTransitPtr(DocShowForeground);
}

SimpleScreenDoc::SimpleScreenDoc(SimpleSceneManager*  SceneManager,
                                 WindowEventProducer* MainWindow)
{
    _DocForeground = makeDocForeground();
    _DocForeground->setBgColor(Color4f(0.0f,0.0f,0.0f,0.8f));
    _DocForeground->setBorderColor(Color4f(1.0f,1.0f,1.0f,1.0f));
    _DocForeground->setTextMargin(Vec2f(5.0f,5.0f));
    _DocForeground->setHorizontalAlign(SimpleTextForeground::Left);
    _DocForeground->setVerticalAlign(SimpleTextForeground::Top);
    _DocForeground->setActive(false);

    _DocShowForeground = makeDocShowForeground();

    ViewportRefPtr TutorialViewport = SceneManager->getWindow()->getPort(0);
    TutorialViewport->addForeground(_DocForeground);
    TutorialViewport->addForeground(_DocShowForeground);

    MainWindow->connectKeyTyped(boost::bind(&SimpleScreenDoc::keyTyped,
                                            this,
                                            _1));
    
    //Color Keyframe Sequence
    KeyframeColorSequenceRecPtr ColorKeyframes = KeyframeColorSequenceColor4f::create();
    ColorKeyframes->addKeyframe(Color4f(1.0f,1.0f,1.0f,1.0f),0.0f);
    ColorKeyframes->addKeyframe(Color4f(1.0f,1.0f,1.0f,1.0f),5.0f);
    ColorKeyframes->addKeyframe(Color4f(1.0f,1.0f,1.0f,0.0f),7.0f);
    
    //Animator
    KeyframeAnimatorRecPtr TheAnimator = KeyframeAnimator::create();
    TheAnimator->setKeyframeSequence(ColorKeyframes);
    
    //Animation
    _ShowDocFadeOutAnimation = FieldAnimation::create();
    _ShowDocFadeOutAnimation->setAnimator(TheAnimator);
    _ShowDocFadeOutAnimation->setInterpolationType(TBAnimator::LINEAR_INTERPOLATION);
    _ShowDocFadeOutAnimation->setCycling(1);
    _ShowDocFadeOutAnimation->setAnimatedField(_DocShowForeground,
                                               SimpleTextForeground::ColorFieldId);

    _ShowDocFadeOutAnimation->attachUpdateProducer(MainWindow);
    _ShowDocFadeOutAnimation->start();
}

void SimpleScreenDoc::keyTyped(KeyEventDetails* const details)
{
    switch(details->getKeyChar())
    {
        case '?':
            _DocForeground->setActive(!_DocForeground->getActive());
            break;
    }
}

