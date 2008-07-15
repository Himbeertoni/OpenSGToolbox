/*---------------------------------------------------------------------------*\
 *                          OpenSG ToolBox Input                             *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                          Authors: David Kabala                            *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class WindowEventProducer
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGWINDOWEVENTPRODUCERBASE_H_
#define _OSGWINDOWEVENTPRODUCERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGInputDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include <OpenSG/OSGFieldContainer.h> // Parent

#include <OpenSG/OSGWindowFields.h> // Window type
#include <OpenSG/OSGBoolFields.h> // Enabled type
#include <OpenSG/OSGBoolFields.h> // UseCallbackForDraw type
#include <OpenSG/OSGBoolFields.h> // UseCallbackForReshape type
#include <OpenSG/OSGTimeFields.h> // LastUpdateTime type
#include <OpenSG/OSGImageFields.h> // Icon type
#include <OpenSG/OSGBoolFields.h> // LockCursor type

#include "OSGWindowEventProducerFields.h"

OSG_BEGIN_NAMESPACE

class WindowEventProducer;
class BinaryDataHandler;

//! \brief WindowEventProducer Base Class.

class OSG_INPUTLIB_DLLMAPPING WindowEventProducerBase : public FieldContainer
{
  private:

    typedef FieldContainer    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef WindowEventProducerPtr  Ptr;

    enum
    {
        WindowFieldId                = Inherited::NextFieldId,
        EnabledFieldId               = WindowFieldId                + 1,
        UseCallbackForDrawFieldId    = EnabledFieldId               + 1,
        UseCallbackForReshapeFieldId = UseCallbackForDrawFieldId    + 1,
        LastUpdateTimeFieldId        = UseCallbackForReshapeFieldId + 1,
        IconFieldId                  = LastUpdateTimeFieldId        + 1,
        LockCursorFieldId            = IconFieldId                  + 1,
        NextFieldId                  = LockCursorFieldId            + 1
    };

    static const OSG::BitVector WindowFieldMask;
    static const OSG::BitVector EnabledFieldMask;
    static const OSG::BitVector UseCallbackForDrawFieldMask;
    static const OSG::BitVector UseCallbackForReshapeFieldMask;
    static const OSG::BitVector LastUpdateTimeFieldMask;
    static const OSG::BitVector IconFieldMask;
    static const OSG::BitVector LockCursorFieldMask;


    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType  (void); 
    virtual const FieldContainerType &getType  (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFWindowPtr         *getSFWindow         (void);
           SFBool              *getSFEnabled        (void);
           SFBool              *getSFUseCallbackForDraw(void);
           SFBool              *getSFUseCallbackForReshape(void);
           SFTime              *getSFLastUpdateTime (void);
           SFImagePtr          *getSFIcon           (void);
           SFBool              *getSFLockCursor     (void);

           WindowPtr           &getWindow         (void);
     const WindowPtr           &getWindow         (void) const;
           bool                &getEnabled        (void);
     const bool                &getEnabled        (void) const;
           bool                &getUseCallbackForDraw(void);
     const bool                &getUseCallbackForDraw(void) const;
           bool                &getUseCallbackForReshape(void);
     const bool                &getUseCallbackForReshape(void) const;
           Time                &getLastUpdateTime (void);
     const Time                &getLastUpdateTime (void) const;
           ImagePtr            &getIcon           (void);
     const ImagePtr            &getIcon           (void) const;
           bool                &getLockCursor     (void);
     const bool                &getLockCursor     (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setWindow         ( const WindowPtr &value );
     void setEnabled        ( const bool &value );
     void setUseCallbackForDraw( const bool &value );
     void setUseCallbackForReshape( const bool &value );
     void setLastUpdateTime ( const Time &value );
     void setIcon           ( const ImagePtr &value );
     void setLockCursor     ( const bool &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (const BitVector         &whichField);
    virtual void   copyToBin  (      BinaryDataHandler &pMem,
                               const BitVector         &whichField);
    virtual void   copyFromBin(      BinaryDataHandler &pMem,
                               const BitVector         &whichField);


    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFWindowPtr         _sfWindow;
    SFBool              _sfEnabled;
    SFBool              _sfUseCallbackForDraw;
    SFBool              _sfUseCallbackForReshape;
    SFTime              _sfLastUpdateTime;
    SFImagePtr          _sfIcon;
    SFBool              _sfLockCursor;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    WindowEventProducerBase(void);
    WindowEventProducerBase(const WindowEventProducerBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~WindowEventProducerBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      WindowEventProducerBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      WindowEventProducerBase *pOther,
                         const BitVector         &whichField,
                         const SyncInfo          &sInfo     );

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField,
                               const SyncInfo          &sInfo);

    virtual void execBeginEdit     (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

            void execBeginEditImpl (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

    virtual void onDestroyAspect(UInt32 uiId, UInt32 uiAspect);
#endif

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const WindowEventProducerBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef WindowEventProducerBase *WindowEventProducerBaseP;

typedef osgIF<WindowEventProducerBase::isNodeCore,
              CoredNodePtr<WindowEventProducer>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet WindowEventProducerNodePtr;

typedef RefPtr<WindowEventProducerPtr> WindowEventProducerRefPtr;

OSG_END_NAMESPACE

#define OSGWINDOWEVENTPRODUCERBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGWINDOWEVENTPRODUCERBASE_H_ */
