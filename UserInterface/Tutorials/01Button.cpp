// OpenSG Tutorial Example: Creating a Button Component
//
// This tutorial explains how to edit the basic features of
// a Button created in the OSG User Interface library.
// 
// Includes: Button PreferredSize, MaximumSize, MinimumSize, Font,
// Text,and adding a Button to a Scene.


// GLUT is used for window handling
#include <OpenSG/OSGGLUT.h>

// General OpenSG configuration, needed everywhere
#include <OpenSG/OSGConfig.h>

// Methods to create simple geometry: boxes, spheres, tori etc.
#include <OpenSG/OSGSimpleGeometry.h>

// The GLUT-OpenSG connection class
#include <OpenSG/OSGGLUTWindow.h>

// A little helper to simplify scene management and interaction
#include <OpenSG/OSGSimpleSceneManager.h>
#include <OpenSG/OSGNode.h>
#include <OpenSG/OSGGroup.h>
#include <OpenSG/OSGViewport.h>

// the general scene file loading handler
#include <OpenSG/OSGSceneFileHandler.h>

//Input
#include <OpenSG/Input/OSGWindowUtils.h>

//UserInterface Headers
#include <OpenSG/UserInterface/OSGUIForeground.h>
#include <OpenSG/UserInterface/OSGUIDrawingSurface.h>
#include <OpenSG/UserInterface/OSGGraphics2D.h>
#include <OpenSG/UserInterface/OSGButton.h>
#include <OpenSG/UserInterface/OSGLineBorder.h>
#include <OpenSG/UserInterface/OSGAbsoluteLayout.h>
#include <OpenSG/UserInterface/OSGLookAndFeelManager.h>
#include <OpenSG/UserInterface/OSGFont.h>

// Activate the OpenSG namespace
// This is not strictly necessary, you can also prefix all OpenSG symbols
// with OSG::, but that would be a bit tedious for this example
OSG_USING_NAMESPACE

// The SimpleSceneManager to manage simple applications
SimpleSceneManager *mgr;

// forward declaration so we can have the interesting stuff upfront
void display(void);
void reshape(Vec2s Size);

// Initialize WIN32 & OpenSG and set up the scene
int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);
    
    WindowPtr MainWindow;
    WindowEventProducerPtr TheWindowEventProducer;
    createDefaultWindow(Pnt2s(50,50),
                                        Vec2s(550,550),
                                        "OpenSG 01Button Window",
                                        MainWindow,
                                        TheWindowEventProducer);
    
    TheWindowEventProducer->setDisplayCallback(display);
    TheWindowEventProducer->setReshapeCallback(reshape);

    //Attach Mouse Listener
    //TheWindowEventProducer->addMouseListener(new TutorialMouseListener());
    //Attach Mouse Wheel Listener
    //TheWindowEventProducer->addMouseWheelListener(new TutorialMouseWheelListener());
    //Attach Key Listener
    //TheWindowEventProducer->addKeyListener(new TutorialKeyListener());
    //Attach Window Listener
    //TheWindowEventProducer->addWindowListener(new TutorialWindowListener());

   // Make Torus Node (creates Torus in background of scene)
    NodePtr TorusGeometryNode = makeTorus(.5, 2, 16, 16);


    // Make Main Scene Node
    NodePtr scene = osg::Node::create();
    beginEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);
    {
        scene->setCore(osg::Group::create());
 
        // add the torus as a child
        scene->addChild(TorusGeometryNode);
    }
    endEditCP  (scene, Node::CoreFieldMask | Node::ChildrenFieldMask);

	// Create the Graphics
	GraphicsPtr graphics = osg::Graphics2D::create();

	// Initialize the LookAndFeelManager to enable default settings
	LookAndFeelManager::the()->getLookAndFeel()->init();

	// Create a Button component
	ButtonPtr button1 = osg::Button::create();
	// Create a simple Font to be used with the Button
	FontPtr sampleFont = osg::Font::create();
	beginEditCP(sampleFont, Font::SizeFieldMask);
		sampleFont->setSize(12);
	endEditCP(sampleFont, Font::SizeFieldMask);

	/******************************************************

		Edit the Button and determine its characteristics

	******************************************************/

	beginEditCP(button1, Component::MinSizeFieldMask | Component::MaxSizeFieldMask | Component::PreferredSizeFieldMask | Component::SizeFieldMask | Button::TextFieldMask | Button::FontFieldMask | Button::VerticalAlignmentFieldMask | Button::HorizontalAlignmentFieldMask);
			// The following 4 function calls are not specific to Button, 
			// but can be used with any Component

			// Determine the Minimum and Maximum size that the Component can ever have
			// due to various Layouts (some change the size of the Components within
			// the Layouts)
		button1->setMinSize( Vec2s (50, 25) );
		button1->setMaxSize( Vec2s (200, 100) );
			// Determine the PreferredSize for the Component
		button1->setPreferredSize( Vec2s (100, 50) );
			// Determine whether the Button appears pressed (false) or not-pressed (true)
		button1->setEnabled(true);
		// The following functions are specific to Button
			// Determine the visible Text (Text must fit within Button Size
			// or extra Text will not display)
		button1->setText("Button 1");
		//button1->setFont(sampleFont);
			// Determine the VerticalAlignment of the Text- VERTICAL_CENTER, 
			// or VERTICAL_TOP, VERTICAL_BOTTOM
		button1->setVerticalAlignment(VERTICAL_TOP);
			// Determine the HorizontalAlignment of the Text- HORIZONTAL_CENTER,
			// HORIZONTAL_LEFT, HORIZONTAL_RIGHT
		button1->setHorizontalAlignment(HORIZONTAL_RIGHT);
    endEditCP(button1, Component::MinSizeFieldMask | Component::MaxSizeFieldMask | Component::PreferredSizeFieldMask | Component::SizeFieldMask | Button::TextFieldMask | Button::FontFieldMask | Button::VerticalAlignmentFieldMask | Button::HorizontalAlignmentFieldMask);

	// Create The Main Frame
	FramePtr MainFrame = osg::Frame::create();
	LayoutPtr MainFrameLayout = osg::AbsoluteLayout::create();
	beginEditCP(MainFrame, Frame::ChildrenFieldMask | Frame::LayoutFieldMask);
	   // Assign the Button to the MainFrame so it will be displayed
	   // when the view is rendered.
	   MainFrame->getChildren().addValue(button1);
	   MainFrame->setLayout(MainFrameLayout);
	endEditCP  (MainFrame, Frame::ChildrenFieldMask | Frame::LayoutFieldMask);

	//Create the Drawing Surface
	UIDrawingSurfacePtr drawingSurface = UIDrawingSurface::create();
	beginEditCP(drawingSurface, UIDrawingSurface::GraphicsFieldMask | UIDrawingSurface::RootFrameFieldMask|UIDrawingSurface::EventProducerFieldMask);
		drawingSurface->setGraphics(graphics);
		drawingSurface->setRootFrame(MainFrame);
	    drawingSurface->setEventProducer(TheWindowEventProducer);
    endEditCP  (drawingSurface, UIDrawingSurface::GraphicsFieldMask | UIDrawingSurface::RootFrameFieldMask|UIDrawingSurface::EventProducerFieldMask);
	// Create the UI Foreground Object
	UIForegroundPtr foreground = osg::UIForeground::create();

	beginEditCP(foreground, UIForeground::FramePositionOffsetFieldMask | UIForeground::FrameBoundsFieldMask);
	    foreground->setDrawingSurface(drawingSurface);
		foreground->setFramePositionOffset(Vec2s(0,0));
		foreground->setFrameBounds(Vec2f(0.5,0.5));
	   //Set the Event Producer for the DrawingSurface
	   //This is needed in order to get Mouse/Keyboard/etc Input to the UI DrawingSurface
    endEditCP  (foreground, UIForeground::FramePositionOffsetFieldMask | UIForeground::FrameBoundsFieldMask);


    // create the SimpleSceneManager helper
    mgr = new SimpleSceneManager;

    // tell the manager what to manage
    mgr->setWindow(MainWindow );
    mgr->setRoot  (scene);

	// Add the UI Foreground Object to the Scene
	ViewportPtr viewport = mgr->getWindow()->getPort(0);
    beginEditCP(viewport, Viewport::ForegroundsFieldMask);
		viewport->getForegrounds().addValue(foreground);
    beginEditCP(viewport, Viewport::ForegroundsFieldMask);
    // show the whole scene
    mgr->showAll();

    openWindow(TheWindowEventProducer);

    return 0;
}

//
// callback functions
//

// redraw the window
void display(void)
{
    mgr->redraw();
}

// react to size changes
void reshape(Vec2s Size)
{
    mgr->resize(Size.x(), Size.y());
}
