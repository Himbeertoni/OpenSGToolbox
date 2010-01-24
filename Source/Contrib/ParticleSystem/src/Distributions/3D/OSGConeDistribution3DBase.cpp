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
 **     class ConeDistribution3D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGConeDistribution3DBase.h"
#include "OSGConeDistribution3D.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ConeDistribution3D
    An BoxDistribution3D.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Pnt3f           ConeDistribution3DBase::_sfPosition
    
*/

/*! \var Vec3f           ConeDistribution3DBase::_sfDirection
    
*/

/*! \var Real32          ConeDistribution3DBase::_sfSpread
    
*/

/*! \var Real32          ConeDistribution3DBase::_sfMinTheta
    
*/

/*! \var Real32          ConeDistribution3DBase::_sfMaxTheta
    
*/

/*! \var Real32          ConeDistribution3DBase::_sfMin
    
*/

/*! \var Real32          ConeDistribution3DBase::_sfMax
    
*/

/*! \var UInt32          ConeDistribution3DBase::_sfSurfaceOrVolume
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ConeDistribution3D *>::_type("ConeDistribution3DPtr", "Distribution3DPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ConeDistribution3D *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ConeDistribution3D *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ConeDistribution3D *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ConeDistribution3DBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFPnt3f::Description(
        SFPnt3f::getClassType(),
        "Position",
        "",
        PositionFieldId, PositionFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ConeDistribution3D::editHandlePosition),
        static_cast<FieldGetMethodSig >(&ConeDistribution3D::getHandlePosition));

    oType.addInitialDesc(pDesc);


    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "Direction",
        "",
        DirectionFieldId, DirectionFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ConeDistribution3D::editHandleDirection),
        static_cast<FieldGetMethodSig >(&ConeDistribution3D::getHandleDirection));

    oType.addInitialDesc(pDesc);


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "Spread",
        "",
        SpreadFieldId, SpreadFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ConeDistribution3D::editHandleSpread),
        static_cast<FieldGetMethodSig >(&ConeDistribution3D::getHandleSpread));

    oType.addInitialDesc(pDesc);


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "MinTheta",
        "",
        MinThetaFieldId, MinThetaFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ConeDistribution3D::editHandleMinTheta),
        static_cast<FieldGetMethodSig >(&ConeDistribution3D::getHandleMinTheta));

    oType.addInitialDesc(pDesc);


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "MaxTheta",
        "",
        MaxThetaFieldId, MaxThetaFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ConeDistribution3D::editHandleMaxTheta),
        static_cast<FieldGetMethodSig >(&ConeDistribution3D::getHandleMaxTheta));

    oType.addInitialDesc(pDesc);


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "Min",
        "",
        MinFieldId, MinFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ConeDistribution3D::editHandleMin),
        static_cast<FieldGetMethodSig >(&ConeDistribution3D::getHandleMin));

    oType.addInitialDesc(pDesc);


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "Max",
        "",
        MaxFieldId, MaxFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ConeDistribution3D::editHandleMax),
        static_cast<FieldGetMethodSig >(&ConeDistribution3D::getHandleMax));

    oType.addInitialDesc(pDesc);


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "SurfaceOrVolume",
        "",
        SurfaceOrVolumeFieldId, SurfaceOrVolumeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ConeDistribution3D::editHandleSurfaceOrVolume),
        static_cast<FieldGetMethodSig >(&ConeDistribution3D::getHandleSurfaceOrVolume));

    oType.addInitialDesc(pDesc);

}


ConeDistribution3DBase::TypeObject ConeDistribution3DBase::_type(
    ConeDistribution3DBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ConeDistribution3DBase::createEmptyLocal),
    ConeDistribution3D::initMethod,
    ConeDistribution3D::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ConeDistribution3D::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ConeDistribution3D\"\n"
    "\tparent=\"Distribution3D\"\n"
    "    library=\"ContribParticleSystem\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "An BoxDistribution3D.\n"
    "\t<Field\n"
    "\t\tname=\"Position\"\n"
    "\t\ttype=\"Pnt3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.0,0.0,0.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Direction\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.0,0.0,1.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Spread\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.57\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"MinTheta\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"MaxTheta\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"6.28319\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Min\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Max\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"SurfaceOrVolume\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"ConeDistribution3D::VOLUME\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "An BoxDistribution3D.\n"
    );


/*------------------------------ get -----------------------------------*/

FieldContainerType &ConeDistribution3DBase::getType(void)
{
    return _type;
}

const FieldContainerType &ConeDistribution3DBase::getType(void) const
{
    return _type;
}

UInt32 ConeDistribution3DBase::getContainerSize(void) const
{
    return sizeof(ConeDistribution3D);
}

/*------------------------- decorator get ------------------------------*/


SFPnt3f *ConeDistribution3DBase::editSFPosition(void)
{
    editSField(PositionFieldMask);

    return &_sfPosition;
}

const SFPnt3f *ConeDistribution3DBase::getSFPosition(void) const
{
    return &_sfPosition;
}


SFVec3f *ConeDistribution3DBase::editSFDirection(void)
{
    editSField(DirectionFieldMask);

    return &_sfDirection;
}

const SFVec3f *ConeDistribution3DBase::getSFDirection(void) const
{
    return &_sfDirection;
}


SFReal32 *ConeDistribution3DBase::editSFSpread(void)
{
    editSField(SpreadFieldMask);

    return &_sfSpread;
}

const SFReal32 *ConeDistribution3DBase::getSFSpread(void) const
{
    return &_sfSpread;
}


SFReal32 *ConeDistribution3DBase::editSFMinTheta(void)
{
    editSField(MinThetaFieldMask);

    return &_sfMinTheta;
}

const SFReal32 *ConeDistribution3DBase::getSFMinTheta(void) const
{
    return &_sfMinTheta;
}


SFReal32 *ConeDistribution3DBase::editSFMaxTheta(void)
{
    editSField(MaxThetaFieldMask);

    return &_sfMaxTheta;
}

const SFReal32 *ConeDistribution3DBase::getSFMaxTheta(void) const
{
    return &_sfMaxTheta;
}


SFReal32 *ConeDistribution3DBase::editSFMin(void)
{
    editSField(MinFieldMask);

    return &_sfMin;
}

const SFReal32 *ConeDistribution3DBase::getSFMin(void) const
{
    return &_sfMin;
}


SFReal32 *ConeDistribution3DBase::editSFMax(void)
{
    editSField(MaxFieldMask);

    return &_sfMax;
}

const SFReal32 *ConeDistribution3DBase::getSFMax(void) const
{
    return &_sfMax;
}


SFUInt32 *ConeDistribution3DBase::editSFSurfaceOrVolume(void)
{
    editSField(SurfaceOrVolumeFieldMask);

    return &_sfSurfaceOrVolume;
}

const SFUInt32 *ConeDistribution3DBase::getSFSurfaceOrVolume(void) const
{
    return &_sfSurfaceOrVolume;
}






/*------------------------------ access -----------------------------------*/

UInt32 ConeDistribution3DBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        returnValue += _sfPosition.getBinSize();
    }
    if(FieldBits::NoField != (DirectionFieldMask & whichField))
    {
        returnValue += _sfDirection.getBinSize();
    }
    if(FieldBits::NoField != (SpreadFieldMask & whichField))
    {
        returnValue += _sfSpread.getBinSize();
    }
    if(FieldBits::NoField != (MinThetaFieldMask & whichField))
    {
        returnValue += _sfMinTheta.getBinSize();
    }
    if(FieldBits::NoField != (MaxThetaFieldMask & whichField))
    {
        returnValue += _sfMaxTheta.getBinSize();
    }
    if(FieldBits::NoField != (MinFieldMask & whichField))
    {
        returnValue += _sfMin.getBinSize();
    }
    if(FieldBits::NoField != (MaxFieldMask & whichField))
    {
        returnValue += _sfMax.getBinSize();
    }
    if(FieldBits::NoField != (SurfaceOrVolumeFieldMask & whichField))
    {
        returnValue += _sfSurfaceOrVolume.getBinSize();
    }

    return returnValue;
}

void ConeDistribution3DBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _sfPosition.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DirectionFieldMask & whichField))
    {
        _sfDirection.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SpreadFieldMask & whichField))
    {
        _sfSpread.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MinThetaFieldMask & whichField))
    {
        _sfMinTheta.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MaxThetaFieldMask & whichField))
    {
        _sfMaxTheta.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MinFieldMask & whichField))
    {
        _sfMin.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MaxFieldMask & whichField))
    {
        _sfMax.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SurfaceOrVolumeFieldMask & whichField))
    {
        _sfSurfaceOrVolume.copyToBin(pMem);
    }
}

void ConeDistribution3DBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _sfPosition.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DirectionFieldMask & whichField))
    {
        _sfDirection.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SpreadFieldMask & whichField))
    {
        _sfSpread.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MinThetaFieldMask & whichField))
    {
        _sfMinTheta.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MaxThetaFieldMask & whichField))
    {
        _sfMaxTheta.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MinFieldMask & whichField))
    {
        _sfMin.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MaxFieldMask & whichField))
    {
        _sfMax.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SurfaceOrVolumeFieldMask & whichField))
    {
        _sfSurfaceOrVolume.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ConeDistribution3DTransitPtr ConeDistribution3DBase::createLocal(BitVector bFlags)
{
    ConeDistribution3DTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ConeDistribution3D>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ConeDistribution3DTransitPtr ConeDistribution3DBase::createDependent(BitVector bFlags)
{
    ConeDistribution3DTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ConeDistribution3D>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ConeDistribution3DTransitPtr ConeDistribution3DBase::create(void)
{
    ConeDistribution3DTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ConeDistribution3D>(tmpPtr);
    }

    return fc;
}

ConeDistribution3D *ConeDistribution3DBase::createEmptyLocal(BitVector bFlags)
{
    ConeDistribution3D *returnValue;

    newPtr<ConeDistribution3D>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ConeDistribution3D *ConeDistribution3DBase::createEmpty(void)
{
    ConeDistribution3D *returnValue;

    newPtr<ConeDistribution3D>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ConeDistribution3DBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ConeDistribution3D *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ConeDistribution3D *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ConeDistribution3DBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ConeDistribution3D *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ConeDistribution3D *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ConeDistribution3DBase::shallowCopy(void) const
{
    ConeDistribution3D *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ConeDistribution3D *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ConeDistribution3DBase::ConeDistribution3DBase(void) :
    Inherited(),
    _sfPosition               (Pnt3f(0.0,0.0,0.0)),
    _sfDirection              (Vec3f(0.0,0.0,1.0)),
    _sfSpread                 (Real32(0.57)),
    _sfMinTheta               (Real32(0.0)),
    _sfMaxTheta               (Real32(6.28319)),
    _sfMin                    (Real32(0.0)),
    _sfMax                    (Real32(1.0)),
    _sfSurfaceOrVolume        (UInt32(ConeDistribution3D::VOLUME))
{
}

ConeDistribution3DBase::ConeDistribution3DBase(const ConeDistribution3DBase &source) :
    Inherited(source),
    _sfPosition               (source._sfPosition               ),
    _sfDirection              (source._sfDirection              ),
    _sfSpread                 (source._sfSpread                 ),
    _sfMinTheta               (source._sfMinTheta               ),
    _sfMaxTheta               (source._sfMaxTheta               ),
    _sfMin                    (source._sfMin                    ),
    _sfMax                    (source._sfMax                    ),
    _sfSurfaceOrVolume        (source._sfSurfaceOrVolume        )
{
}


/*-------------------------- destructors ----------------------------------*/

ConeDistribution3DBase::~ConeDistribution3DBase(void)
{
}


GetFieldHandlePtr ConeDistribution3DBase::getHandlePosition        (void) const
{
    SFPnt3f::GetHandlePtr returnValue(
        new  SFPnt3f::GetHandle(
             &_sfPosition,
             this->getType().getFieldDesc(PositionFieldId),
             const_cast<ConeDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ConeDistribution3DBase::editHandlePosition       (void)
{
    SFPnt3f::EditHandlePtr returnValue(
        new  SFPnt3f::EditHandle(
             &_sfPosition,
             this->getType().getFieldDesc(PositionFieldId),
             this));


    editSField(PositionFieldMask);

    return returnValue;
}

GetFieldHandlePtr ConeDistribution3DBase::getHandleDirection       (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfDirection,
             this->getType().getFieldDesc(DirectionFieldId),
             const_cast<ConeDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ConeDistribution3DBase::editHandleDirection      (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfDirection,
             this->getType().getFieldDesc(DirectionFieldId),
             this));


    editSField(DirectionFieldMask);

    return returnValue;
}

GetFieldHandlePtr ConeDistribution3DBase::getHandleSpread          (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfSpread,
             this->getType().getFieldDesc(SpreadFieldId),
             const_cast<ConeDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ConeDistribution3DBase::editHandleSpread         (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfSpread,
             this->getType().getFieldDesc(SpreadFieldId),
             this));


    editSField(SpreadFieldMask);

    return returnValue;
}

GetFieldHandlePtr ConeDistribution3DBase::getHandleMinTheta        (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfMinTheta,
             this->getType().getFieldDesc(MinThetaFieldId),
             const_cast<ConeDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ConeDistribution3DBase::editHandleMinTheta       (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfMinTheta,
             this->getType().getFieldDesc(MinThetaFieldId),
             this));


    editSField(MinThetaFieldMask);

    return returnValue;
}

GetFieldHandlePtr ConeDistribution3DBase::getHandleMaxTheta        (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfMaxTheta,
             this->getType().getFieldDesc(MaxThetaFieldId),
             const_cast<ConeDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ConeDistribution3DBase::editHandleMaxTheta       (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfMaxTheta,
             this->getType().getFieldDesc(MaxThetaFieldId),
             this));


    editSField(MaxThetaFieldMask);

    return returnValue;
}

GetFieldHandlePtr ConeDistribution3DBase::getHandleMin             (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfMin,
             this->getType().getFieldDesc(MinFieldId),
             const_cast<ConeDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ConeDistribution3DBase::editHandleMin            (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfMin,
             this->getType().getFieldDesc(MinFieldId),
             this));


    editSField(MinFieldMask);

    return returnValue;
}

GetFieldHandlePtr ConeDistribution3DBase::getHandleMax             (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfMax,
             this->getType().getFieldDesc(MaxFieldId),
             const_cast<ConeDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ConeDistribution3DBase::editHandleMax            (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfMax,
             this->getType().getFieldDesc(MaxFieldId),
             this));


    editSField(MaxFieldMask);

    return returnValue;
}

GetFieldHandlePtr ConeDistribution3DBase::getHandleSurfaceOrVolume (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfSurfaceOrVolume,
             this->getType().getFieldDesc(SurfaceOrVolumeFieldId),
             const_cast<ConeDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ConeDistribution3DBase::editHandleSurfaceOrVolume(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfSurfaceOrVolume,
             this->getType().getFieldDesc(SurfaceOrVolumeFieldId),
             this));


    editSField(SurfaceOrVolumeFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ConeDistribution3DBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ConeDistribution3D *pThis = static_cast<ConeDistribution3D *>(this);

    pThis->execSync(static_cast<ConeDistribution3D *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ConeDistribution3DBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ConeDistribution3D *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ConeDistribution3D *>(pRefAspect),
                  dynamic_cast<const ConeDistribution3D *>(this));

    return returnValue;
}
#endif

void ConeDistribution3DBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
