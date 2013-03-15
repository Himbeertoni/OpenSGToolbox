/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

#ifndef _OSGTBWIN32WINDOW_H_
#define _OSGTBWIN32WINDOW_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGTBWIN32WindowBase.h"

#include "OSGKeyEventDetails.h"
#include "OSGWindowEventProducer.h"

OSG_BEGIN_NAMESPACE

/*! \brief TBWIN32Window class. See \ref
           PageWindowWIN32TBWIN32Window for a description.
*/

class OSG_WINDOWWIN32_DLLMAPPING TBWIN32Window : public TBWIN32WindowBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef TBWIN32WindowBase Inherited;
    typedef TBWIN32Window     Self;

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(ConstFieldMaskArg whichField,
                         UInt32            origin,
                         BitVector         details    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0,
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
	
    static LRESULT CALLBACK staticWndProc(HWND hwnd, UINT uMsg,
                                          WPARAM wParam, LPARAM lParam);

    const HWND                &getHwnd            (void) const;


    virtual bool attachWindow(void);
    virtual Window* initWindow(void);
    virtual void mainLoop(void);

    //Set the Window Position
    virtual void setPosition(Pnt2f Pos);

    //Set the Window Position
    virtual Pnt2f getPosition(void) const;

    //Set the Window size
    virtual void setSize(Vec2us Size);

    //Get the Window size
    virtual Vec2f getSize(void) const;

    //Focused
    //Set the Window Focus
    virtual void setFocused(bool Focused);

    //Get the Window Focus
    virtual bool getFocused(void) const;

    //Visible / Iconify / Normal
    //Set the Window Visible
    virtual void setVisible(bool Visible);

    //Get the Window Visible
    virtual bool getVisible(void) const;

    //Set the Window Iconify
    virtual void setIconify(bool Iconify);

    //Get the Window Iconify
    virtual bool getIconify(void) const;

    //Fullscreen
    virtual void setFullscreen(bool Fullscreen);

    //Set the text on the Title bar of the window
    virtual void setTitle(const std::string& TitleText);

    //Get the text of the Title bar of the window
    virtual std::string getTitle(void);

    //Set the window to allow or not allow Resizing
    virtual void setRisizable(bool IsResizable);

    //Get whether or not the window allows resizing
    virtual bool getRisizable(void);

    //Set the window to draw or not draw it's border
    virtual void setDrawBorder(bool DrawBorder);

    //Get wether or not the window is drawing a border
    virtual bool getDrawBorder(void);

    //Get the Window Fullscreen
    virtual bool getFullscreen(void) const;

    virtual void setShowCursor(bool showCursor);

    virtual bool getShowCursor(void) const;

    virtual void setAttachMouseToCursor(bool attach);

    virtual bool getAttachMouseToCursor(void) const;


    virtual void setCursorPos(Vec2f Pos);

    virtual UInt32 getKeyModifiers(void) const;
    virtual KeyEventDetails::KeyState getKeyState(KeyEventDetails::Key TheKey) const;
    virtual Pnt2f getMousePosition(void) const;

    virtual std::string getClipboard(void) const;

    virtual void putClipboard(const std::string Value);

    virtual void openWindow(const Pnt2f& ScreenPosition,
                            const Vec2f& Size,
                            const std::string& WindowName);

    virtual void closeWindow(void);

    virtual void draw(void);
    virtual void update(void);

    virtual Vec2f getDesktopSize(void) const;

    virtual std::vector<BoostPath> openFileDialog(const std::string& WindowTitle,
                                             const std::vector<OSG::WindowEventProducer::FileDialogFilter>& Filters,
                                             const BoostPath& InitialDir,
                                             bool AllowMultiSelect);

    virtual BoostPath saveFileDialog(const std::string& DialogTitle,
                                const std::vector<OSG::WindowEventProducer::FileDialogFilter>& Filters,
                                const std::string& InitialFile,
                                const BoostPath& InitialDirectory,
                                bool PromptForOverwrite
                               );
	
    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in TBWIN32WindowBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    TBWIN32Window(void);
    TBWIN32Window(const TBWIN32Window &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TBWIN32Window(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
	typedef std::map<HWND, TBWIN32Window* > TBWIN32HWNDToProducerMap;
    static TBWIN32HWNDToProducerMap _WIN32HWNDToProducerMap;
    
    LRESULT WndProc(HWND hwnd, UINT uMsg,
                           WPARAM wParam, LPARAM lParam);

    static KeyEventDetails::Key determineKey(WPARAM key);
    /*---------------------------------------------------------------------*/
    /*! \name                MT Construction                               */
    /*! \{                                                                 */

           void onCreate       (const TBWIN32Window *source = NULL);

           void onDestroy      (      UInt32  uiContainerId);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name      Window system implementation functions                  */
    /*! \{                                                                 */
    /*! \}                                                                 */
    
	virtual void setCursor(void);
    
    bool _MouseOverWindow;

    static const UINT WIN32_DRAW_MESSAGE = WM_USER + 1;
    static const UINT WIN32_UPDATE_MESSAGE = WM_USER + 2;

    Pnt2f _PreviousWindowPosition;
    Vec2f _PreviousWindowSize;
    bool _IsFullscreen;

    bool _IsMouseCursorAssociated;
    bool _HandleNextMouseMove;
    Pnt2f _PreviousCursorPos;

    bool _RunMainLoop;
    bool _Active;

    /*==========================  PRIVATE  ================================*/	
  private:

    friend class FieldContainer;
    friend class TBWIN32WindowBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TBWIN32Window &source);
};

typedef TBWIN32Window *TBWIN32WindowP;

OSG_END_NAMESPACE

#include "OSGTBWIN32WindowBase.inl"
#include "OSGTBWIN32Window.inl"

#endif /* _OSGTBWIN32WINDOW_H_ */
