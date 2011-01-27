/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
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
 **     class BulletCylinderShape!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGBulletCylinderShapeBase.h"
#include "OSGBulletCylinderShape.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::BulletCylinderShape
    This core is a wrapper around the bullet btCylinderShape.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Vec3f           BulletCylinderShapeBase::_sfHalfExtents
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<BulletCylinderShape *>::_type("BulletCylinderShapePtr", "BulletCollisionShapePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(BulletCylinderShape *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           BulletCylinderShape *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           BulletCylinderShape *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void BulletCylinderShapeBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new BridgeSFVec3f::Description(
        BridgeSFVec3f::getClassType(),
        "HalfExtents",
        "",
        HalfExtentsFieldId, HalfExtentsFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&BulletCylinderShape::editHandleHalfExtents),
        static_cast<FieldGetMethodSig >(&BulletCylinderShape::getHandleHalfExtents));

    oType.addInitialDesc(pDesc);
}


BulletCylinderShapeBase::TypeObject BulletCylinderShapeBase::_type(
    BulletCylinderShapeBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&BulletCylinderShapeBase::createEmptyLocal),
    BulletCylinderShape::initMethod,
    BulletCylinderShape::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&BulletCylinderShape::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"BulletCylinderShape\"\n"
    "    parent=\"BulletCollisionShape\"\n"
    "    library=\"ContribBullet\"\n"
    "    structure=\"concrete\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)\"\n"
    "    >\n"
    "    This core is a wrapper around the bullet btCylinderShape.\n"
    "    <Field\n"
    "        name=\"HalfExtents\"\n"
    "        type=\"Vec3f\"\n"
    "        category=\"data\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "        bridge=\"true\"\n"
    "        >\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    "This core is a wrapper around the bullet btCylinderShape.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &BulletCylinderShapeBase::getType(void)
{
    return _type;
}

const FieldContainerType &BulletCylinderShapeBase::getType(void) const
{
    return _type;
}

UInt32 BulletCylinderShapeBase::getContainerSize(void) const
{
    return sizeof(BulletCylinderShape);
}

/*------------------------- decorator get ------------------------------*/


BridgeSFVec3f *BulletCylinderShapeBase::editSFHalfExtents(void)
{
    editSField(HalfExtentsFieldMask);

    return &_sfHalfExtents;
}

const BridgeSFVec3f *BulletCylinderShapeBase::getSFHalfExtents(void) const
{
    return &_sfHalfExtents;
}






/*------------------------------ access -----------------------------------*/

UInt32 BulletCylinderShapeBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (HalfExtentsFieldMask & whichField))
    {
        returnValue += _sfHalfExtents.getBinSize();
    }

    return returnValue;
}

void BulletCylinderShapeBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (HalfExtentsFieldMask & whichField))
    {
        _sfHalfExtents.copyToBin(pMem);
    }
}

void BulletCylinderShapeBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (HalfExtentsFieldMask & whichField))
    {
        editSField(HalfExtentsFieldMask);
        _sfHalfExtents.copyFromBin(pMem);
    }
}

//! create a new instance of the class
BulletCylinderShapeTransitPtr BulletCylinderShapeBase::createLocal(BitVector bFlags)
{
    BulletCylinderShapeTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<BulletCylinderShape>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
BulletCylinderShapeTransitPtr BulletCylinderShapeBase::createDependent(BitVector bFlags)
{
    BulletCylinderShapeTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<BulletCylinderShape>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
BulletCylinderShapeTransitPtr BulletCylinderShapeBase::create(void)
{
    BulletCylinderShapeTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<BulletCylinderShape>(tmpPtr);
    }

    return fc;
}

BulletCylinderShape *BulletCylinderShapeBase::createEmptyLocal(BitVector bFlags)
{
    BulletCylinderShape *returnValue;

    newPtr<BulletCylinderShape>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
BulletCylinderShape *BulletCylinderShapeBase::createEmpty(void)
{
    BulletCylinderShape *returnValue;

    newPtr<BulletCylinderShape>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}

FieldContainerTransitPtr BulletCylinderShapeBase::shallowCopyLocal(
    BitVector bFlags) const
{
    BulletCylinderShape *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const BulletCylinderShape *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr BulletCylinderShapeBase::shallowCopyDependent(
    BitVector bFlags) const
{
    BulletCylinderShape *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const BulletCylinderShape *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr BulletCylinderShapeBase::shallowCopy(void) const
{
    BulletCylinderShape *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const BulletCylinderShape *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

BulletCylinderShapeBase::BulletCylinderShapeBase(void) :
    Inherited(),
    _sfHalfExtents            (boost::bind(&BulletCylinderShape::getExternalHalfExtents, static_cast<BulletCylinderShape*>(this)),boost::bind(&BulletCylinderShape::setExternalHalfExtents, static_cast<BulletCylinderShape*>(this), _1))
{
}

BulletCylinderShapeBase::BulletCylinderShapeBase(const BulletCylinderShapeBase &source) :
    Inherited(source),
    _sfHalfExtents            (boost::bind(&BulletCylinderShape::getExternalHalfExtents, static_cast<BulletCylinderShape*>(this)),boost::bind(&BulletCylinderShape::setExternalHalfExtents, static_cast<BulletCylinderShape*>(this), _1))
{
}


/*-------------------------- destructors ----------------------------------*/

BulletCylinderShapeBase::~BulletCylinderShapeBase(void)
{
}


GetFieldHandlePtr BulletCylinderShapeBase::getHandleHalfExtents     (void) const
{
    BridgeSFVec3f::GetHandlePtr returnValue(
        new  BridgeSFVec3f::GetHandle(
             &_sfHalfExtents,
             this->getType().getFieldDesc(HalfExtentsFieldId),
             const_cast<BulletCylinderShapeBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr BulletCylinderShapeBase::editHandleHalfExtents    (void)
{
    BridgeSFVec3f::EditHandlePtr returnValue(
        new  BridgeSFVec3f::EditHandle(
             &_sfHalfExtents,
             this->getType().getFieldDesc(HalfExtentsFieldId),
             this));


    editSField(HalfExtentsFieldMask);

    return returnValue;
}



#ifdef OSG_MT_CPTR_ASPECT
void BulletCylinderShapeBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    BulletCylinderShape *pThis = static_cast<BulletCylinderShape *>(this);

    pThis->execSync(static_cast<BulletCylinderShape *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *BulletCylinderShapeBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    BulletCylinderShape *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const BulletCylinderShape *>(pRefAspect),
                  dynamic_cast<const BulletCylinderShape *>(this));

    return returnValue;
}
#endif

void BulletCylinderShapeBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
