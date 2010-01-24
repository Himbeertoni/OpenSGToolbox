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
 **     class ParticleSystemCore
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPARTICLESYSTEMCOREBASE_H_
#define _OSGPARTICLESYSTEMCOREBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

//#include "OSGBaseTypes.h"

#include "OSGMaterialDrawable.h" // Parent

#include "OSGSysFields.h"               // SortingMode type
#include "OSGParticleSystemFields.h"    // System type
#include "OSGParticleSystemDrawerFields.h" // Drawer type

#include "OSGParticleSystemCoreFields.h"


OSG_BEGIN_NAMESPACE

class ParticleSystemCore;

//! \brief ParticleSystemCore Base Class.

class OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING ParticleSystemCoreBase : public MaterialDrawable
{
  public:

    typedef MaterialDrawable Inherited;
    typedef MaterialDrawable ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(ParticleSystemCore);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        SortingModeFieldId = Inherited::NextFieldId,
        SortFieldId = SortingModeFieldId + 1,
        SystemFieldId = SortFieldId + 1,
        DrawerFieldId = SystemFieldId + 1,
        NextFieldId = DrawerFieldId + 1
    };

    static const OSG::BitVector SortingModeFieldMask =
        (TypeTraits<BitVector>::One << SortingModeFieldId);
    static const OSG::BitVector SortFieldMask =
        (TypeTraits<BitVector>::One << SortFieldId);
    static const OSG::BitVector SystemFieldMask =
        (TypeTraits<BitVector>::One << SystemFieldId);
    static const OSG::BitVector DrawerFieldMask =
        (TypeTraits<BitVector>::One << DrawerFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUInt32          SFSortingModeType;
    typedef MFUInt32          MFSortType;
    typedef SFUnrecParticleSystemPtr SFSystemType;
    typedef SFUnrecParticleSystemDrawerPtr SFDrawerType;


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


                  SFUInt32            *editSFSortingMode    (void);
            const SFUInt32            *getSFSortingMode     (void) const;
            const SFUnrecParticleSystemPtr *getSFSystem         (void) const;
                  SFUnrecParticleSystemPtr *editSFSystem         (void);
            const SFUnrecParticleSystemDrawerPtr *getSFDrawer         (void) const;
                  SFUnrecParticleSystemDrawerPtr *editSFDrawer         (void);


                  UInt32              &editSortingMode    (void);
                  UInt32               getSortingMode     (void) const;

                  ParticleSystem * getSystem         (void) const;

                  ParticleSystemDrawer * getDrawer         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setSortingMode    (const UInt32 value);
            void setSystem         (ParticleSystem * const value);
            void setDrawer         (ParticleSystemDrawer * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

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

    static  ParticleSystemCoreTransitPtr  create          (void);
    static  ParticleSystemCore           *createEmpty     (void);

    static  ParticleSystemCoreTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  ParticleSystemCore            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  ParticleSystemCoreTransitPtr  createDependent  (BitVector bFlags);

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

    SFUInt32          _sfSortingMode;
    MFUInt32          _mfSort;
    SFUnrecParticleSystemPtr _sfSystem;
    SFUnrecParticleSystemDrawerPtr _sfDrawer;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ParticleSystemCoreBase(void);
    ParticleSystemCoreBase(const ParticleSystemCoreBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ParticleSystemCoreBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const ParticleSystemCore *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleSortingMode     (void) const;
    EditFieldHandlePtr editHandleSortingMode    (void);
    GetFieldHandlePtr  getHandleSort            (void) const;
    EditFieldHandlePtr editHandleSort           (void);
    GetFieldHandlePtr  getHandleSystem          (void) const;
    EditFieldHandlePtr editHandleSystem         (void);
    GetFieldHandlePtr  getHandleDrawer          (void) const;
    EditFieldHandlePtr editHandleDrawer         (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  MFUInt32            *editMFSort           (void);
            const MFUInt32            *getMFSort            (void) const;


                  UInt32              &editSort           (const UInt32 index);
                  UInt32               getSort            (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */


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

            void execSync (      ParticleSystemCoreBase *pFrom,
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
    void operator =(const ParticleSystemCoreBase &source);
};

typedef ParticleSystemCoreBase *ParticleSystemCoreBaseP;

OSG_END_NAMESPACE

#endif /* _OSGPARTICLESYSTEMCOREBASE_H_ */
