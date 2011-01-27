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
 **     class BulletSphereShape!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGBulletSphereShapeBase.h"
#include "OSGBulletSphereShape.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::BulletSphereShape
    This core is a wrapper around the bullet btSphereShape.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Real32          BulletSphereShapeBase::_sfRadius
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<BulletSphereShape *>::_type("BulletSphereShapePtr", "BulletCollisionShapePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(BulletSphereShape *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           BulletSphereShape *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           BulletSphereShape *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void BulletSphereShapeBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new BridgeSFReal32::Description(
        BridgeSFReal32::getClassType(),
        "Radius",
        "",
        RadiusFieldId, RadiusFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&BulletSphereShape::editHandleRadius),
        static_cast<FieldGetMethodSig >(&BulletSphereShape::getHandleRadius));

    oType.addInitialDesc(pDesc);
}


BulletSphereShapeBase::TypeObject BulletSphereShapeBase::_type(
    BulletSphereShapeBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&BulletSphereShapeBase::createEmptyLocal),
    BulletSphereShape::initMethod,
    BulletSphereShape::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&BulletSphereShape::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"BulletSphereShape\"\n"
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
    "    This core is a wrapper around the bullet btSphereShape.\n"
    "    <Field\n"
    "        name=\"Radius\"\n"
    "        type=\"Real32\"\n"
    "        category=\"data\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "        bridge=\"true\"\n"
    "        >\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    "This core is a wrapper around the bullet btSphereShape.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &BulletSphereShapeBase::getType(void)
{
    return _type;
}

const FieldContainerType &BulletSphereShapeBase::getType(void) const
{
    return _type;
}

UInt32 BulletSphereShapeBase::getContainerSize(void) const
{
    return sizeof(BulletSphereShape);
}

/*------------------------- decorator get ------------------------------*/


BridgeSFReal32 *BulletSphereShapeBase::editSFRadius(void)
{
    editSField(RadiusFieldMask);

    return &_sfRadius;
}

const BridgeSFReal32 *BulletSphereShapeBase::getSFRadius(void) const
{
    return &_sfRadius;
}






/*------------------------------ access -----------------------------------*/

UInt32 BulletSphereShapeBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RadiusFieldMask & whichField))
    {
        returnValue += _sfRadius.getBinSize();
    }

    return returnValue;
}

void BulletSphereShapeBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RadiusFieldMask & whichField))
    {
        _sfRadius.copyToBin(pMem);
    }
}

void BulletSphereShapeBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RadiusFieldMask & whichField))
    {
        editSField(RadiusFieldMask);
        _sfRadius.copyFromBin(pMem);
    }
}

//! create a new instance of the class
BulletSphereShapeTransitPtr BulletSphereShapeBase::createLocal(BitVector bFlags)
{
    BulletSphereShapeTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<BulletSphereShape>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
BulletSphereShapeTransitPtr BulletSphereShapeBase::createDependent(BitVector bFlags)
{
    BulletSphereShapeTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<BulletSphereShape>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
BulletSphereShapeTransitPtr BulletSphereShapeBase::create(void)
{
    BulletSphereShapeTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<BulletSphereShape>(tmpPtr);
    }

    return fc;
}

BulletSphereShape *BulletSphereShapeBase::createEmptyLocal(BitVector bFlags)
{
    BulletSphereShape *returnValue;

    newPtr<BulletSphereShape>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
BulletSphereShape *BulletSphereShapeBase::createEmpty(void)
{
    BulletSphereShape *returnValue;

    newPtr<BulletSphereShape>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}

FieldContainerTransitPtr BulletSphereShapeBase::shallowCopyLocal(
    BitVector bFlags) const
{
    BulletSphereShape *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const BulletSphereShape *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr BulletSphereShapeBase::shallowCopyDependent(
    BitVector bFlags) const
{
    BulletSphereShape *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const BulletSphereShape *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr BulletSphereShapeBase::shallowCopy(void) const
{
    BulletSphereShape *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const BulletSphereShape *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

BulletSphereShapeBase::BulletSphereShapeBase(void) :
    Inherited(),
    _sfRadius                 (boost::bind(&BulletSphereShape::getExternalRadius, static_cast<BulletSphereShape*>(this)),boost::bind(&BulletSphereShape::setExternalRadius, static_cast<BulletSphereShape*>(this), _1))
{
}

BulletSphereShapeBase::BulletSphereShapeBase(const BulletSphereShapeBase &source) :
    Inherited(source),
    _sfRadius                 (boost::bind(&BulletSphereShape::getExternalRadius, static_cast<BulletSphereShape*>(this)),boost::bind(&BulletSphereShape::setExternalRadius, static_cast<BulletSphereShape*>(this), _1))
{
}


/*-------------------------- destructors ----------------------------------*/

BulletSphereShapeBase::~BulletSphereShapeBase(void)
{
}


GetFieldHandlePtr BulletSphereShapeBase::getHandleRadius          (void) const
{
    BridgeSFReal32::GetHandlePtr returnValue(
        new  BridgeSFReal32::GetHandle(
             &_sfRadius,
             this->getType().getFieldDesc(RadiusFieldId),
             const_cast<BulletSphereShapeBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr BulletSphereShapeBase::editHandleRadius         (void)
{
    BridgeSFReal32::EditHandlePtr returnValue(
        new  BridgeSFReal32::EditHandle(
             &_sfRadius,
             this->getType().getFieldDesc(RadiusFieldId),
             this));


    editSField(RadiusFieldMask);

    return returnValue;
}



#ifdef OSG_MT_CPTR_ASPECT
void BulletSphereShapeBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    BulletSphereShape *pThis = static_cast<BulletSphereShape *>(this);

    pThis->execSync(static_cast<BulletSphereShape *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *BulletSphereShapeBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    BulletSphereShape *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const BulletSphereShape *>(pRefAspect),
                  dynamic_cast<const BulletSphereShape *>(this));

    return returnValue;
}
#endif

void BulletSphereShapeBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
