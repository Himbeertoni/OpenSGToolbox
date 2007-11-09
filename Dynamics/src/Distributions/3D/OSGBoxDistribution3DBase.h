/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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
 **     class BoxDistribution3D
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGBOXDISTRIBUTION3DBASE_H_
#define _OSGBOXDISTRIBUTION3DBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGDynamicsDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "Function/OSGFunction.h" // Parent

#include <OpenSG/OSGPnt3fFields.h> // MinPoint type
#include <OpenSG/OSGPnt3fFields.h> // MaxPoint type
#include <OpenSG/OSGUInt32Fields.h> // SurfaceOrVolume type

#include "OSGBoxDistribution3DFields.h"

OSG_BEGIN_NAMESPACE

class BoxDistribution3D;
class BinaryDataHandler;

//! \brief BoxDistribution3D Base Class.

class OSG_DYNAMICSLIB_DLLMAPPING BoxDistribution3DBase : public Function
{
  private:

    typedef Function    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef BoxDistribution3DPtr  Ptr;

    enum
    {
        MinPointFieldId        = Inherited::NextFieldId,
        MaxPointFieldId        = MinPointFieldId        + 1,
        SurfaceOrVolumeFieldId = MaxPointFieldId        + 1,
        NextFieldId            = SurfaceOrVolumeFieldId + 1
    };

    static const OSG::BitVector MinPointFieldMask;
    static const OSG::BitVector MaxPointFieldMask;
    static const OSG::BitVector SurfaceOrVolumeFieldMask;


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

           SFPnt3f             *getSFMinPoint       (void);
           SFPnt3f             *getSFMaxPoint       (void);
           SFUInt32            *getSFSurfaceOrVolume(void);

           Pnt3f               &getMinPoint       (void);
     const Pnt3f               &getMinPoint       (void) const;
           Pnt3f               &getMaxPoint       (void);
     const Pnt3f               &getMaxPoint       (void) const;
           UInt32              &getSurfaceOrVolume(void);
     const UInt32              &getSurfaceOrVolume(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setMinPoint       ( const Pnt3f &value );
     void setMaxPoint       ( const Pnt3f &value );
     void setSurfaceOrVolume( const UInt32 &value );

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
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  BoxDistribution3DPtr      create          (void); 
    static  BoxDistribution3DPtr      createEmpty     (void); 

    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr     shallowCopy     (void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFPnt3f             _sfMinPoint;
    SFPnt3f             _sfMaxPoint;
    SFUInt32            _sfSurfaceOrVolume;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    BoxDistribution3DBase(void);
    BoxDistribution3DBase(const BoxDistribution3DBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BoxDistribution3DBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      BoxDistribution3DBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      BoxDistribution3DBase *pOther,
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
    void operator =(const BoxDistribution3DBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef BoxDistribution3DBase *BoxDistribution3DBaseP;

typedef osgIF<BoxDistribution3DBase::isNodeCore,
              CoredNodePtr<BoxDistribution3D>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet BoxDistribution3DNodePtr;

typedef RefPtr<BoxDistribution3DPtr> BoxDistribution3DRefPtr;

OSG_END_NAMESPACE

#define OSGBOXDISTRIBUTION3DBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGBOXDISTRIBUTION3DBASE_H_ */
