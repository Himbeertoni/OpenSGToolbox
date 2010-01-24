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
 **     class CylinderDistribution3D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGCylinderDistribution3DBase.h"
#include "OSGCylinderDistribution3D.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CylinderDistribution3D
    An CylinderDistribution3D.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Real32          CylinderDistribution3DBase::_sfHeight
    
*/

/*! \var Pnt3f           CylinderDistribution3DBase::_sfCenter
    
*/

/*! \var Vec3f           CylinderDistribution3DBase::_sfNormal
    
*/

/*! \var Vec3f           CylinderDistribution3DBase::_sfTangent
    
*/

/*! \var Vec3f           CylinderDistribution3DBase::_sfBinormal
    
*/

/*! \var Real32          CylinderDistribution3DBase::_sfInnerRadius
    
*/

/*! \var Real32          CylinderDistribution3DBase::_sfOuterRadius
    
*/

/*! \var Real32          CylinderDistribution3DBase::_sfMinTheta
    
*/

/*! \var Real32          CylinderDistribution3DBase::_sfMaxTheta
    
*/

/*! \var UInt32          CylinderDistribution3DBase::_sfSurfaceOrVolume
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<CylinderDistribution3D *>::_type("CylinderDistribution3DPtr", "Distribution3DPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(CylinderDistribution3D *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           CylinderDistribution3D *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           CylinderDistribution3D *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void CylinderDistribution3DBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "Height",
        "",
        HeightFieldId, HeightFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CylinderDistribution3D::editHandleHeight),
        static_cast<FieldGetMethodSig >(&CylinderDistribution3D::getHandleHeight));

    oType.addInitialDesc(pDesc);


    pDesc = new SFPnt3f::Description(
        SFPnt3f::getClassType(),
        "Center",
        "",
        CenterFieldId, CenterFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CylinderDistribution3D::editHandleCenter),
        static_cast<FieldGetMethodSig >(&CylinderDistribution3D::getHandleCenter));

    oType.addInitialDesc(pDesc);


    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "Normal",
        "",
        NormalFieldId, NormalFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CylinderDistribution3D::editHandleNormal),
        static_cast<FieldGetMethodSig >(&CylinderDistribution3D::getHandleNormal));

    oType.addInitialDesc(pDesc);


    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "Tangent",
        "",
        TangentFieldId, TangentFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CylinderDistribution3D::editHandleTangent),
        static_cast<FieldGetMethodSig >(&CylinderDistribution3D::getHandleTangent));

    oType.addInitialDesc(pDesc);


    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "Binormal",
        "",
        BinormalFieldId, BinormalFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CylinderDistribution3D::editHandleBinormal),
        static_cast<FieldGetMethodSig >(&CylinderDistribution3D::getHandleBinormal));

    oType.addInitialDesc(pDesc);


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "InnerRadius",
        "",
        InnerRadiusFieldId, InnerRadiusFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CylinderDistribution3D::editHandleInnerRadius),
        static_cast<FieldGetMethodSig >(&CylinderDistribution3D::getHandleInnerRadius));

    oType.addInitialDesc(pDesc);


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "OuterRadius",
        "",
        OuterRadiusFieldId, OuterRadiusFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CylinderDistribution3D::editHandleOuterRadius),
        static_cast<FieldGetMethodSig >(&CylinderDistribution3D::getHandleOuterRadius));

    oType.addInitialDesc(pDesc);


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "MinTheta",
        "",
        MinThetaFieldId, MinThetaFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CylinderDistribution3D::editHandleMinTheta),
        static_cast<FieldGetMethodSig >(&CylinderDistribution3D::getHandleMinTheta));

    oType.addInitialDesc(pDesc);


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "MaxTheta",
        "",
        MaxThetaFieldId, MaxThetaFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CylinderDistribution3D::editHandleMaxTheta),
        static_cast<FieldGetMethodSig >(&CylinderDistribution3D::getHandleMaxTheta));

    oType.addInitialDesc(pDesc);


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "SurfaceOrVolume",
        "",
        SurfaceOrVolumeFieldId, SurfaceOrVolumeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CylinderDistribution3D::editHandleSurfaceOrVolume),
        static_cast<FieldGetMethodSig >(&CylinderDistribution3D::getHandleSurfaceOrVolume));

    oType.addInitialDesc(pDesc);

}


CylinderDistribution3DBase::TypeObject CylinderDistribution3DBase::_type(
    CylinderDistribution3DBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&CylinderDistribution3DBase::createEmptyLocal),
    CylinderDistribution3D::initMethod,
    CylinderDistribution3D::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&CylinderDistribution3D::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"CylinderDistribution3D\"\n"
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
    "An CylinderDistribution3D.\n"
    "\t<Field\n"
    "\t\tname=\"Height\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Center\"\n"
    "\t\ttype=\"Pnt3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.0,0.0,0.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Normal\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.0,0.0,1.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Tangent\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.0,1.0,0.0\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Binormal\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.0,0.0,0.0\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"InnerRadius\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"OuterRadius\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.0\"\n"
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
    "\t\tname=\"SurfaceOrVolume\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"CylinderDistribution3D::VOLUME\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "An CylinderDistribution3D.\n"
    );


/*------------------------------ get -----------------------------------*/

FieldContainerType &CylinderDistribution3DBase::getType(void)
{
    return _type;
}

const FieldContainerType &CylinderDistribution3DBase::getType(void) const
{
    return _type;
}

UInt32 CylinderDistribution3DBase::getContainerSize(void) const
{
    return sizeof(CylinderDistribution3D);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *CylinderDistribution3DBase::editSFHeight(void)
{
    editSField(HeightFieldMask);

    return &_sfHeight;
}

const SFReal32 *CylinderDistribution3DBase::getSFHeight(void) const
{
    return &_sfHeight;
}


SFPnt3f *CylinderDistribution3DBase::editSFCenter(void)
{
    editSField(CenterFieldMask);

    return &_sfCenter;
}

const SFPnt3f *CylinderDistribution3DBase::getSFCenter(void) const
{
    return &_sfCenter;
}


SFVec3f *CylinderDistribution3DBase::editSFNormal(void)
{
    editSField(NormalFieldMask);

    return &_sfNormal;
}

const SFVec3f *CylinderDistribution3DBase::getSFNormal(void) const
{
    return &_sfNormal;
}


SFVec3f *CylinderDistribution3DBase::editSFTangent(void)
{
    editSField(TangentFieldMask);

    return &_sfTangent;
}

const SFVec3f *CylinderDistribution3DBase::getSFTangent(void) const
{
    return &_sfTangent;
}


SFVec3f *CylinderDistribution3DBase::editSFBinormal(void)
{
    editSField(BinormalFieldMask);

    return &_sfBinormal;
}

const SFVec3f *CylinderDistribution3DBase::getSFBinormal(void) const
{
    return &_sfBinormal;
}


SFReal32 *CylinderDistribution3DBase::editSFInnerRadius(void)
{
    editSField(InnerRadiusFieldMask);

    return &_sfInnerRadius;
}

const SFReal32 *CylinderDistribution3DBase::getSFInnerRadius(void) const
{
    return &_sfInnerRadius;
}


SFReal32 *CylinderDistribution3DBase::editSFOuterRadius(void)
{
    editSField(OuterRadiusFieldMask);

    return &_sfOuterRadius;
}

const SFReal32 *CylinderDistribution3DBase::getSFOuterRadius(void) const
{
    return &_sfOuterRadius;
}


SFReal32 *CylinderDistribution3DBase::editSFMinTheta(void)
{
    editSField(MinThetaFieldMask);

    return &_sfMinTheta;
}

const SFReal32 *CylinderDistribution3DBase::getSFMinTheta(void) const
{
    return &_sfMinTheta;
}


SFReal32 *CylinderDistribution3DBase::editSFMaxTheta(void)
{
    editSField(MaxThetaFieldMask);

    return &_sfMaxTheta;
}

const SFReal32 *CylinderDistribution3DBase::getSFMaxTheta(void) const
{
    return &_sfMaxTheta;
}


SFUInt32 *CylinderDistribution3DBase::editSFSurfaceOrVolume(void)
{
    editSField(SurfaceOrVolumeFieldMask);

    return &_sfSurfaceOrVolume;
}

const SFUInt32 *CylinderDistribution3DBase::getSFSurfaceOrVolume(void) const
{
    return &_sfSurfaceOrVolume;
}






/*------------------------------ access -----------------------------------*/

UInt32 CylinderDistribution3DBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        returnValue += _sfHeight.getBinSize();
    }
    if(FieldBits::NoField != (CenterFieldMask & whichField))
    {
        returnValue += _sfCenter.getBinSize();
    }
    if(FieldBits::NoField != (NormalFieldMask & whichField))
    {
        returnValue += _sfNormal.getBinSize();
    }
    if(FieldBits::NoField != (TangentFieldMask & whichField))
    {
        returnValue += _sfTangent.getBinSize();
    }
    if(FieldBits::NoField != (BinormalFieldMask & whichField))
    {
        returnValue += _sfBinormal.getBinSize();
    }
    if(FieldBits::NoField != (InnerRadiusFieldMask & whichField))
    {
        returnValue += _sfInnerRadius.getBinSize();
    }
    if(FieldBits::NoField != (OuterRadiusFieldMask & whichField))
    {
        returnValue += _sfOuterRadius.getBinSize();
    }
    if(FieldBits::NoField != (MinThetaFieldMask & whichField))
    {
        returnValue += _sfMinTheta.getBinSize();
    }
    if(FieldBits::NoField != (MaxThetaFieldMask & whichField))
    {
        returnValue += _sfMaxTheta.getBinSize();
    }
    if(FieldBits::NoField != (SurfaceOrVolumeFieldMask & whichField))
    {
        returnValue += _sfSurfaceOrVolume.getBinSize();
    }

    return returnValue;
}

void CylinderDistribution3DBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CenterFieldMask & whichField))
    {
        _sfCenter.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NormalFieldMask & whichField))
    {
        _sfNormal.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TangentFieldMask & whichField))
    {
        _sfTangent.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BinormalFieldMask & whichField))
    {
        _sfBinormal.copyToBin(pMem);
    }
    if(FieldBits::NoField != (InnerRadiusFieldMask & whichField))
    {
        _sfInnerRadius.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OuterRadiusFieldMask & whichField))
    {
        _sfOuterRadius.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MinThetaFieldMask & whichField))
    {
        _sfMinTheta.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MaxThetaFieldMask & whichField))
    {
        _sfMaxTheta.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SurfaceOrVolumeFieldMask & whichField))
    {
        _sfSurfaceOrVolume.copyToBin(pMem);
    }
}

void CylinderDistribution3DBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CenterFieldMask & whichField))
    {
        _sfCenter.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NormalFieldMask & whichField))
    {
        _sfNormal.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TangentFieldMask & whichField))
    {
        _sfTangent.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BinormalFieldMask & whichField))
    {
        _sfBinormal.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (InnerRadiusFieldMask & whichField))
    {
        _sfInnerRadius.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OuterRadiusFieldMask & whichField))
    {
        _sfOuterRadius.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MinThetaFieldMask & whichField))
    {
        _sfMinTheta.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MaxThetaFieldMask & whichField))
    {
        _sfMaxTheta.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SurfaceOrVolumeFieldMask & whichField))
    {
        _sfSurfaceOrVolume.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CylinderDistribution3DTransitPtr CylinderDistribution3DBase::createLocal(BitVector bFlags)
{
    CylinderDistribution3DTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CylinderDistribution3D>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
CylinderDistribution3DTransitPtr CylinderDistribution3DBase::createDependent(BitVector bFlags)
{
    CylinderDistribution3DTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<CylinderDistribution3D>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CylinderDistribution3DTransitPtr CylinderDistribution3DBase::create(void)
{
    CylinderDistribution3DTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<CylinderDistribution3D>(tmpPtr);
    }

    return fc;
}

CylinderDistribution3D *CylinderDistribution3DBase::createEmptyLocal(BitVector bFlags)
{
    CylinderDistribution3D *returnValue;

    newPtr<CylinderDistribution3D>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
CylinderDistribution3D *CylinderDistribution3DBase::createEmpty(void)
{
    CylinderDistribution3D *returnValue;

    newPtr<CylinderDistribution3D>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr CylinderDistribution3DBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CylinderDistribution3D *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CylinderDistribution3D *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CylinderDistribution3DBase::shallowCopyDependent(
    BitVector bFlags) const
{
    CylinderDistribution3D *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CylinderDistribution3D *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr CylinderDistribution3DBase::shallowCopy(void) const
{
    CylinderDistribution3D *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const CylinderDistribution3D *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

CylinderDistribution3DBase::CylinderDistribution3DBase(void) :
    Inherited(),
    _sfHeight                 (Real32(1.0)),
    _sfCenter                 (Pnt3f(0.0,0.0,0.0)),
    _sfNormal                 (Vec3f(0.0,0.0,1.0)),
    _sfTangent                (Vec3f(0.0,1.0,0.0)),
    _sfBinormal               (Vec3f(1.0,0.0,0.0)),
    _sfInnerRadius            (Real32(0.0)),
    _sfOuterRadius            (Real32(1.0)),
    _sfMinTheta               (Real32(0.0)),
    _sfMaxTheta               (Real32(6.28319)),
    _sfSurfaceOrVolume        (UInt32(CylinderDistribution3D::VOLUME))
{
}

CylinderDistribution3DBase::CylinderDistribution3DBase(const CylinderDistribution3DBase &source) :
    Inherited(source),
    _sfHeight                 (source._sfHeight                 ),
    _sfCenter                 (source._sfCenter                 ),
    _sfNormal                 (source._sfNormal                 ),
    _sfTangent                (source._sfTangent                ),
    _sfBinormal               (source._sfBinormal               ),
    _sfInnerRadius            (source._sfInnerRadius            ),
    _sfOuterRadius            (source._sfOuterRadius            ),
    _sfMinTheta               (source._sfMinTheta               ),
    _sfMaxTheta               (source._sfMaxTheta               ),
    _sfSurfaceOrVolume        (source._sfSurfaceOrVolume        )
{
}


/*-------------------------- destructors ----------------------------------*/

CylinderDistribution3DBase::~CylinderDistribution3DBase(void)
{
}


GetFieldHandlePtr CylinderDistribution3DBase::getHandleHeight          (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfHeight,
             this->getType().getFieldDesc(HeightFieldId),
             const_cast<CylinderDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CylinderDistribution3DBase::editHandleHeight         (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfHeight,
             this->getType().getFieldDesc(HeightFieldId),
             this));


    editSField(HeightFieldMask);

    return returnValue;
}

GetFieldHandlePtr CylinderDistribution3DBase::getHandleCenter          (void) const
{
    SFPnt3f::GetHandlePtr returnValue(
        new  SFPnt3f::GetHandle(
             &_sfCenter,
             this->getType().getFieldDesc(CenterFieldId),
             const_cast<CylinderDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CylinderDistribution3DBase::editHandleCenter         (void)
{
    SFPnt3f::EditHandlePtr returnValue(
        new  SFPnt3f::EditHandle(
             &_sfCenter,
             this->getType().getFieldDesc(CenterFieldId),
             this));


    editSField(CenterFieldMask);

    return returnValue;
}

GetFieldHandlePtr CylinderDistribution3DBase::getHandleNormal          (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfNormal,
             this->getType().getFieldDesc(NormalFieldId),
             const_cast<CylinderDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CylinderDistribution3DBase::editHandleNormal         (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfNormal,
             this->getType().getFieldDesc(NormalFieldId),
             this));


    editSField(NormalFieldMask);

    return returnValue;
}

GetFieldHandlePtr CylinderDistribution3DBase::getHandleTangent         (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfTangent,
             this->getType().getFieldDesc(TangentFieldId),
             const_cast<CylinderDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CylinderDistribution3DBase::editHandleTangent        (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfTangent,
             this->getType().getFieldDesc(TangentFieldId),
             this));


    editSField(TangentFieldMask);

    return returnValue;
}

GetFieldHandlePtr CylinderDistribution3DBase::getHandleBinormal        (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfBinormal,
             this->getType().getFieldDesc(BinormalFieldId),
             const_cast<CylinderDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CylinderDistribution3DBase::editHandleBinormal       (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfBinormal,
             this->getType().getFieldDesc(BinormalFieldId),
             this));


    editSField(BinormalFieldMask);

    return returnValue;
}

GetFieldHandlePtr CylinderDistribution3DBase::getHandleInnerRadius     (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfInnerRadius,
             this->getType().getFieldDesc(InnerRadiusFieldId),
             const_cast<CylinderDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CylinderDistribution3DBase::editHandleInnerRadius    (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfInnerRadius,
             this->getType().getFieldDesc(InnerRadiusFieldId),
             this));


    editSField(InnerRadiusFieldMask);

    return returnValue;
}

GetFieldHandlePtr CylinderDistribution3DBase::getHandleOuterRadius     (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfOuterRadius,
             this->getType().getFieldDesc(OuterRadiusFieldId),
             const_cast<CylinderDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CylinderDistribution3DBase::editHandleOuterRadius    (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfOuterRadius,
             this->getType().getFieldDesc(OuterRadiusFieldId),
             this));


    editSField(OuterRadiusFieldMask);

    return returnValue;
}

GetFieldHandlePtr CylinderDistribution3DBase::getHandleMinTheta        (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfMinTheta,
             this->getType().getFieldDesc(MinThetaFieldId),
             const_cast<CylinderDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CylinderDistribution3DBase::editHandleMinTheta       (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfMinTheta,
             this->getType().getFieldDesc(MinThetaFieldId),
             this));


    editSField(MinThetaFieldMask);

    return returnValue;
}

GetFieldHandlePtr CylinderDistribution3DBase::getHandleMaxTheta        (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfMaxTheta,
             this->getType().getFieldDesc(MaxThetaFieldId),
             const_cast<CylinderDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CylinderDistribution3DBase::editHandleMaxTheta       (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfMaxTheta,
             this->getType().getFieldDesc(MaxThetaFieldId),
             this));


    editSField(MaxThetaFieldMask);

    return returnValue;
}

GetFieldHandlePtr CylinderDistribution3DBase::getHandleSurfaceOrVolume (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfSurfaceOrVolume,
             this->getType().getFieldDesc(SurfaceOrVolumeFieldId),
             const_cast<CylinderDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CylinderDistribution3DBase::editHandleSurfaceOrVolume(void)
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
void CylinderDistribution3DBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    CylinderDistribution3D *pThis = static_cast<CylinderDistribution3D *>(this);

    pThis->execSync(static_cast<CylinderDistribution3D *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CylinderDistribution3DBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    CylinderDistribution3D *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CylinderDistribution3D *>(pRefAspect),
                  dynamic_cast<const CylinderDistribution3D *>(this));

    return returnValue;
}
#endif

void CylinderDistribution3DBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
