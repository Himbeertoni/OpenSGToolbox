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
 **     class TriDistribution3D
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTRIDISTRIBUTION3DBASE_H_
#define _OSGTRIDISTRIBUTION3DBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

//#include "OSGBaseTypes.h"

#include "OSGDistribution3D.h" // Parent

#include "OSGVecFields.h"               // Point1 type
#include "OSGSysFields.h"               // SurfaceOrEdge type

#include "OSGTriDistribution3DFields.h"


OSG_BEGIN_NAMESPACE

class TriDistribution3D;

//! \brief TriDistribution3D Base Class.

class OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING TriDistribution3DBase : public Distribution3D
{
  public:

    typedef Distribution3D Inherited;
    typedef Distribution3D ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(TriDistribution3D);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        Point1FieldId = Inherited::NextFieldId,
        Point2FieldId = Point1FieldId + 1,
        Point3FieldId = Point2FieldId + 1,
        SurfaceOrEdgeFieldId = Point3FieldId + 1,
        NextFieldId = SurfaceOrEdgeFieldId + 1
    };

    static const OSG::BitVector Point1FieldMask =
        (TypeTraits<BitVector>::One << Point1FieldId);
    static const OSG::BitVector Point2FieldMask =
        (TypeTraits<BitVector>::One << Point2FieldId);
    static const OSG::BitVector Point3FieldMask =
        (TypeTraits<BitVector>::One << Point3FieldId);
    static const OSG::BitVector SurfaceOrEdgeFieldMask =
        (TypeTraits<BitVector>::One << SurfaceOrEdgeFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFPnt3f           SFPoint1Type;
    typedef SFPnt3f           SFPoint2Type;
    typedef SFPnt3f           SFPoint3Type;
    typedef SFUInt32          SFSurfaceOrEdgeType;


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


                  SFPnt3f             *editSFPoint1         (void);
            const SFPnt3f             *getSFPoint1          (void) const;

                  SFPnt3f             *editSFPoint2         (void);
            const SFPnt3f             *getSFPoint2          (void) const;

                  SFPnt3f             *editSFPoint3         (void);
            const SFPnt3f             *getSFPoint3          (void) const;

                  SFUInt32            *editSFSurfaceOrEdge  (void);
            const SFUInt32            *getSFSurfaceOrEdge   (void) const;


                  Pnt3f               &editPoint1         (void);
            const Pnt3f               &getPoint1          (void) const;

                  Pnt3f               &editPoint2         (void);
            const Pnt3f               &getPoint2          (void) const;

                  Pnt3f               &editPoint3         (void);
            const Pnt3f               &getPoint3          (void) const;

                  UInt32              &editSurfaceOrEdge  (void);
                  UInt32               getSurfaceOrEdge   (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setPoint1         (const Pnt3f &value);
            void setPoint2         (const Pnt3f &value);
            void setPoint3         (const Pnt3f &value);
            void setSurfaceOrEdge  (const UInt32 value);

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

    static  TriDistribution3DTransitPtr  create          (void);
    static  TriDistribution3D           *createEmpty     (void);

    static  TriDistribution3DTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  TriDistribution3D            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  TriDistribution3DTransitPtr  createDependent  (BitVector bFlags);

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

    SFPnt3f           _sfPoint1;
    SFPnt3f           _sfPoint2;
    SFPnt3f           _sfPoint3;
    SFUInt32          _sfSurfaceOrEdge;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TriDistribution3DBase(void);
    TriDistribution3DBase(const TriDistribution3DBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TriDistribution3DBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandlePoint1          (void) const;
    EditFieldHandlePtr editHandlePoint1         (void);
    GetFieldHandlePtr  getHandlePoint2          (void) const;
    EditFieldHandlePtr editHandlePoint2         (void);
    GetFieldHandlePtr  getHandlePoint3          (void) const;
    EditFieldHandlePtr editHandlePoint3         (void);
    GetFieldHandlePtr  getHandleSurfaceOrEdge   (void) const;
    EditFieldHandlePtr editHandleSurfaceOrEdge  (void);

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

            void execSync (      TriDistribution3DBase *pFrom,
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
    void operator =(const TriDistribution3DBase &source);
};

typedef TriDistribution3DBase *TriDistribution3DBaseP;

OSG_END_NAMESPACE

#endif /* _OSGTRIDISTRIBUTION3DBASE_H_ */
