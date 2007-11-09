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
 **     class CylinderDistribution3D
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCYLINDERDISTRIBUTION3DBASE_H_
#define _OSGCYLINDERDISTRIBUTION3DBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGDynamicsDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "Function/OSGFunction.h" // Parent

#include <OpenSG/OSGReal32Fields.h> // Height type
#include <OpenSG/OSGPnt3fFields.h> // Center type
#include <OpenSG/OSGVec3fFields.h> // Normal type
#include <OpenSG/OSGVec3fFields.h> // Tangent type
#include <OpenSG/OSGVec3fFields.h> // Binormal type
#include <OpenSG/OSGReal32Fields.h> // InnerRadius type
#include <OpenSG/OSGReal32Fields.h> // OuterRadius type
#include <OpenSG/OSGReal32Fields.h> // MinTheta type
#include <OpenSG/OSGReal32Fields.h> // MaxTheta type
#include <OpenSG/OSGUInt32Fields.h> // SurfaceOrVolume type

#include "OSGCylinderDistribution3DFields.h"

OSG_BEGIN_NAMESPACE

class CylinderDistribution3D;
class BinaryDataHandler;

//! \brief CylinderDistribution3D Base Class.

class OSG_DYNAMICSLIB_DLLMAPPING CylinderDistribution3DBase : public Function
{
  private:

    typedef Function    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef CylinderDistribution3DPtr  Ptr;

    enum
    {
        HeightFieldId          = Inherited::NextFieldId,
        CenterFieldId          = HeightFieldId          + 1,
        NormalFieldId          = CenterFieldId          + 1,
        TangentFieldId         = NormalFieldId          + 1,
        BinormalFieldId        = TangentFieldId         + 1,
        InnerRadiusFieldId     = BinormalFieldId        + 1,
        OuterRadiusFieldId     = InnerRadiusFieldId     + 1,
        MinThetaFieldId        = OuterRadiusFieldId     + 1,
        MaxThetaFieldId        = MinThetaFieldId        + 1,
        SurfaceOrVolumeFieldId = MaxThetaFieldId        + 1,
        NextFieldId            = SurfaceOrVolumeFieldId + 1
    };

    static const OSG::BitVector HeightFieldMask;
    static const OSG::BitVector CenterFieldMask;
    static const OSG::BitVector NormalFieldMask;
    static const OSG::BitVector TangentFieldMask;
    static const OSG::BitVector BinormalFieldMask;
    static const OSG::BitVector InnerRadiusFieldMask;
    static const OSG::BitVector OuterRadiusFieldMask;
    static const OSG::BitVector MinThetaFieldMask;
    static const OSG::BitVector MaxThetaFieldMask;
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

           SFReal32            *getSFHeight         (void);
           SFPnt3f             *getSFCenter         (void);
           SFVec3f             *getSFNormal         (void);
           SFReal32            *getSFInnerRadius    (void);
           SFReal32            *getSFOuterRadius    (void);
           SFReal32            *getSFMinTheta       (void);
           SFReal32            *getSFMaxTheta       (void);
           SFUInt32            *getSFSurfaceOrVolume(void);

           Real32              &getHeight         (void);
     const Real32              &getHeight         (void) const;
           Pnt3f               &getCenter         (void);
     const Pnt3f               &getCenter         (void) const;
           Vec3f               &getNormal         (void);
     const Vec3f               &getNormal         (void) const;
           Real32              &getInnerRadius    (void);
     const Real32              &getInnerRadius    (void) const;
           Real32              &getOuterRadius    (void);
     const Real32              &getOuterRadius    (void) const;
           Real32              &getMinTheta       (void);
     const Real32              &getMinTheta       (void) const;
           Real32              &getMaxTheta       (void);
     const Real32              &getMaxTheta       (void) const;
           UInt32              &getSurfaceOrVolume(void);
     const UInt32              &getSurfaceOrVolume(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setHeight         ( const Real32 &value );
     void setCenter         ( const Pnt3f &value );
     void setNormal         ( const Vec3f &value );
     void setInnerRadius    ( const Real32 &value );
     void setOuterRadius    ( const Real32 &value );
     void setMinTheta       ( const Real32 &value );
     void setMaxTheta       ( const Real32 &value );
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

    static  CylinderDistribution3DPtr      create          (void); 
    static  CylinderDistribution3DPtr      createEmpty     (void); 

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

    SFReal32            _sfHeight;
    SFPnt3f             _sfCenter;
    SFVec3f             _sfNormal;
    SFVec3f             _sfTangent;
    SFVec3f             _sfBinormal;
    SFReal32            _sfInnerRadius;
    SFReal32            _sfOuterRadius;
    SFReal32            _sfMinTheta;
    SFReal32            _sfMaxTheta;
    SFUInt32            _sfSurfaceOrVolume;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    CylinderDistribution3DBase(void);
    CylinderDistribution3DBase(const CylinderDistribution3DBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~CylinderDistribution3DBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFVec3f             *getSFTangent        (void);
           SFVec3f             *getSFBinormal       (void);

           Vec3f               &getTangent        (void);
     const Vec3f               &getTangent        (void) const;
           Vec3f               &getBinormal       (void);
     const Vec3f               &getBinormal       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setTangent        (const Vec3f &value);
     void setBinormal       (const Vec3f &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      CylinderDistribution3DBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      CylinderDistribution3DBase *pOther,
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
    void operator =(const CylinderDistribution3DBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef CylinderDistribution3DBase *CylinderDistribution3DBaseP;

typedef osgIF<CylinderDistribution3DBase::isNodeCore,
              CoredNodePtr<CylinderDistribution3D>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet CylinderDistribution3DNodePtr;

typedef RefPtr<CylinderDistribution3DPtr> CylinderDistribution3DRefPtr;

OSG_END_NAMESPACE

#define OSGCYLINDERDISTRIBUTION3DBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGCYLINDERDISTRIBUTION3DBASE_H_ */
