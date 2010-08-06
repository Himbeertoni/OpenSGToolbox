/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
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
 **     class QuadParticleSystemDrawer
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGQUADPARTICLESYSTEMDRAWERBASE_H_
#define _OSGQUADPARTICLESYSTEMDRAWERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

//#include "OSGBaseTypes.h"

#include "OSGParticleSystemDrawer.h" // Parent

#include "OSGVecFields.h"               // QuadSizeScaling type
#include "OSGSysFields.h"               // UseImageSizeRatio type

#include "OSGQuadParticleSystemDrawerFields.h"

OSG_BEGIN_NAMESPACE

class QuadParticleSystemDrawer;

//! \brief QuadParticleSystemDrawer Base Class.

class OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING QuadParticleSystemDrawerBase : public ParticleSystemDrawer
{
  public:

    typedef ParticleSystemDrawer Inherited;
    typedef ParticleSystemDrawer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(QuadParticleSystemDrawer);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        QuadSizeScalingFieldId = Inherited::NextFieldId,
        UseImageSizeRatioFieldId = QuadSizeScalingFieldId + 1,
        NormalSourceFieldId = UseImageSizeRatioFieldId + 1,
        NormalFieldId = NormalSourceFieldId + 1,
        UpSourceFieldId = NormalFieldId + 1,
        UpFieldId = UpSourceFieldId + 1,
        UseNormalAsObjectSpaceRotationFieldId = UpFieldId + 1,
        TwistFieldId = UseNormalAsObjectSpaceRotationFieldId + 1,
        NextFieldId = TwistFieldId + 1
    };

    static const OSG::BitVector QuadSizeScalingFieldMask =
        (TypeTraits<BitVector>::One << QuadSizeScalingFieldId);
    static const OSG::BitVector UseImageSizeRatioFieldMask =
        (TypeTraits<BitVector>::One << UseImageSizeRatioFieldId);
    static const OSG::BitVector NormalSourceFieldMask =
        (TypeTraits<BitVector>::One << NormalSourceFieldId);
    static const OSG::BitVector NormalFieldMask =
        (TypeTraits<BitVector>::One << NormalFieldId);
    static const OSG::BitVector UpSourceFieldMask =
        (TypeTraits<BitVector>::One << UpSourceFieldId);
    static const OSG::BitVector UpFieldMask =
        (TypeTraits<BitVector>::One << UpFieldId);
    static const OSG::BitVector UseNormalAsObjectSpaceRotationFieldMask =
        (TypeTraits<BitVector>::One << UseNormalAsObjectSpaceRotationFieldId);
    static const OSG::BitVector TwistFieldMask =
        (TypeTraits<BitVector>::One << TwistFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFVec2f           SFQuadSizeScalingType;
    typedef SFBool            SFUseImageSizeRatioType;
    typedef SFUInt32          SFNormalSourceType;
    typedef SFVec3f           SFNormalType;
    typedef SFUInt32          SFUpSourceType;
    typedef SFVec3f           SFUpType;
    typedef SFBool            SFUseNormalAsObjectSpaceRotationType;
    typedef SFReal32          SFTwistType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFVec2f             *editSFQuadSizeScaling(void);
            const SFVec2f             *getSFQuadSizeScaling (void) const;

                  SFBool              *editSFUseImageSizeRatio(void);
            const SFBool              *getSFUseImageSizeRatio (void) const;

                  SFBool              *editSFUseNormalAsObjectSpaceRotation(void);
            const SFBool              *getSFUseNormalAsObjectSpaceRotation (void) const;

                  SFReal32            *editSFTwist          (void);
            const SFReal32            *getSFTwist           (void) const;


                  Vec2f               &editQuadSizeScaling(void);
            const Vec2f               &getQuadSizeScaling (void) const;

                  bool                &editUseImageSizeRatio(void);
                  bool                 getUseImageSizeRatio (void) const;

                  bool                &editUseNormalAsObjectSpaceRotation(void);
                  bool                 getUseNormalAsObjectSpaceRotation (void) const;

                  Real32              &editTwist          (void);
                  Real32               getTwist           (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setQuadSizeScaling(const Vec2f &value);
            void setUseImageSizeRatio(const bool value);
            void setUseNormalAsObjectSpaceRotation(const bool value);
            void setTwist          (const Real32 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  QuadParticleSystemDrawerTransitPtr  create          (void);
    static  QuadParticleSystemDrawer           *createEmpty     (void);

    static  QuadParticleSystemDrawerTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  QuadParticleSystemDrawer            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  QuadParticleSystemDrawerTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFVec2f           _sfQuadSizeScaling;
    SFBool            _sfUseImageSizeRatio;
    SFUInt32          _sfNormalSource;
    SFVec3f           _sfNormal;
    SFUInt32          _sfUpSource;
    SFVec3f           _sfUp;
    SFBool            _sfUseNormalAsObjectSpaceRotation;
    SFReal32          _sfTwist;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    QuadParticleSystemDrawerBase(void);
    QuadParticleSystemDrawerBase(const QuadParticleSystemDrawerBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~QuadParticleSystemDrawerBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleQuadSizeScaling (void) const;
    EditFieldHandlePtr editHandleQuadSizeScaling(void);
    GetFieldHandlePtr  getHandleUseImageSizeRatio (void) const;
    EditFieldHandlePtr editHandleUseImageSizeRatio(void);
    GetFieldHandlePtr  getHandleNormalSource    (void) const;
    EditFieldHandlePtr editHandleNormalSource   (void);
    GetFieldHandlePtr  getHandleNormal          (void) const;
    EditFieldHandlePtr editHandleNormal         (void);
    GetFieldHandlePtr  getHandleUpSource        (void) const;
    EditFieldHandlePtr editHandleUpSource       (void);
    GetFieldHandlePtr  getHandleUp              (void) const;
    EditFieldHandlePtr editHandleUp             (void);
    GetFieldHandlePtr  getHandleUseNormalAsObjectSpaceRotation (void) const;
    EditFieldHandlePtr editHandleUseNormalAsObjectSpaceRotation(void);
    GetFieldHandlePtr  getHandleTwist           (void) const;
    EditFieldHandlePtr editHandleTwist          (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFUInt32            *editSFNormalSource   (void);
            const SFUInt32            *getSFNormalSource    (void) const;

                  SFVec3f             *editSFNormal         (void);
            const SFVec3f             *getSFNormal          (void) const;

                  SFUInt32            *editSFUpSource       (void);
            const SFUInt32            *getSFUpSource        (void) const;

                  SFVec3f             *editSFUp             (void);
            const SFVec3f             *getSFUp              (void) const;


                  UInt32              &editNormalSource   (void);
                  UInt32               getNormalSource    (void) const;

                  Vec3f               &editNormal         (void);
            const Vec3f               &getNormal          (void) const;

                  UInt32              &editUpSource       (void);
                  UInt32               getUpSource        (void) const;

                  Vec3f               &editUp             (void);
            const Vec3f               &getUp              (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setNormalSource   (const UInt32 value);
            void setNormal         (const Vec3f &value);
            void setUpSource       (const UInt32 value);
            void setUp             (const Vec3f &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      QuadParticleSystemDrawerBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const QuadParticleSystemDrawerBase &source);
};

typedef QuadParticleSystemDrawerBase *QuadParticleSystemDrawerBaseP;

OSG_END_NAMESPACE

#endif /* _OSGQUADPARTICLESYSTEMDRAWERBASE_H_ */
