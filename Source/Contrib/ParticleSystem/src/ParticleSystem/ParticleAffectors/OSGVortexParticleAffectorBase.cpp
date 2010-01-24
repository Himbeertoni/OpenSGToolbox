/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com), Daniel Guilliams           *
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
 **     class VortexParticleAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGNode.h"                    // Beacon Class

#include "OSGVortexParticleAffectorBase.h"
#include "OSGVortexParticleAffector.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::VortexParticleAffector
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Real32          VortexParticleAffectorBase::_sfMagnitude
    
*/

/*! \var Vec3f           VortexParticleAffectorBase::_sfVortexAxis
    
*/

/*! \var Real32          VortexParticleAffectorBase::_sfAttenuation
    
*/

/*! \var Real32          VortexParticleAffectorBase::_sfMaxDistance
    
*/

/*! \var Node *          VortexParticleAffectorBase::_sfBeacon
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<VortexParticleAffector *>::_type("VortexParticleAffectorPtr", "ParticleAffectorPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(VortexParticleAffector *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           VortexParticleAffector *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           VortexParticleAffector *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void VortexParticleAffectorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "Magnitude",
        "",
        MagnitudeFieldId, MagnitudeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&VortexParticleAffector::editHandleMagnitude),
        static_cast<FieldGetMethodSig >(&VortexParticleAffector::getHandleMagnitude));

    oType.addInitialDesc(pDesc);


    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "VortexAxis",
        "",
        VortexAxisFieldId, VortexAxisFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&VortexParticleAffector::editHandleVortexAxis),
        static_cast<FieldGetMethodSig >(&VortexParticleAffector::getHandleVortexAxis));

    oType.addInitialDesc(pDesc);


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "Attenuation",
        "",
        AttenuationFieldId, AttenuationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&VortexParticleAffector::editHandleAttenuation),
        static_cast<FieldGetMethodSig >(&VortexParticleAffector::getHandleAttenuation));

    oType.addInitialDesc(pDesc);


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "MaxDistance",
        "",
        MaxDistanceFieldId, MaxDistanceFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&VortexParticleAffector::editHandleMaxDistance),
        static_cast<FieldGetMethodSig >(&VortexParticleAffector::getHandleMaxDistance));

    oType.addInitialDesc(pDesc);


    pDesc = new SFUnrecNodePtr::Description(
        SFUnrecNodePtr::getClassType(),
        "Beacon",
        "",
        BeaconFieldId, BeaconFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&VortexParticleAffector::editHandleBeacon),
        static_cast<FieldGetMethodSig >(&VortexParticleAffector::getHandleBeacon));

    oType.addInitialDesc(pDesc);

}


VortexParticleAffectorBase::TypeObject VortexParticleAffectorBase::_type(
    VortexParticleAffectorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&VortexParticleAffectorBase::createEmptyLocal),
    VortexParticleAffector::initMethod,
    VortexParticleAffector::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&VortexParticleAffector::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"VortexParticleAffector\"\n"
    "\tparent=\"ParticleAffector\"\n"
    "    library=\"ContribParticleSystem\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com), Daniel Guilliams           \"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"Magnitude\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"5.000\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"VortexAxis\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"0.0, 1.0, 0.0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Attenuation\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"2.0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"MaxDistance\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"-1.0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Beacon\"\n"
    "\t\ttype=\"Node\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );


/*------------------------------ get -----------------------------------*/

FieldContainerType &VortexParticleAffectorBase::getType(void)
{
    return _type;
}

const FieldContainerType &VortexParticleAffectorBase::getType(void) const
{
    return _type;
}

UInt32 VortexParticleAffectorBase::getContainerSize(void) const
{
    return sizeof(VortexParticleAffector);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *VortexParticleAffectorBase::editSFMagnitude(void)
{
    editSField(MagnitudeFieldMask);

    return &_sfMagnitude;
}

const SFReal32 *VortexParticleAffectorBase::getSFMagnitude(void) const
{
    return &_sfMagnitude;
}


SFVec3f *VortexParticleAffectorBase::editSFVortexAxis(void)
{
    editSField(VortexAxisFieldMask);

    return &_sfVortexAxis;
}

const SFVec3f *VortexParticleAffectorBase::getSFVortexAxis(void) const
{
    return &_sfVortexAxis;
}


SFReal32 *VortexParticleAffectorBase::editSFAttenuation(void)
{
    editSField(AttenuationFieldMask);

    return &_sfAttenuation;
}

const SFReal32 *VortexParticleAffectorBase::getSFAttenuation(void) const
{
    return &_sfAttenuation;
}


SFReal32 *VortexParticleAffectorBase::editSFMaxDistance(void)
{
    editSField(MaxDistanceFieldMask);

    return &_sfMaxDistance;
}

const SFReal32 *VortexParticleAffectorBase::getSFMaxDistance(void) const
{
    return &_sfMaxDistance;
}


//! Get the VortexParticleAffector::_sfBeacon field.
const SFUnrecNodePtr *VortexParticleAffectorBase::getSFBeacon(void) const
{
    return &_sfBeacon;
}

SFUnrecNodePtr      *VortexParticleAffectorBase::editSFBeacon         (void)
{
    editSField(BeaconFieldMask);

    return &_sfBeacon;
}





/*------------------------------ access -----------------------------------*/

UInt32 VortexParticleAffectorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MagnitudeFieldMask & whichField))
    {
        returnValue += _sfMagnitude.getBinSize();
    }
    if(FieldBits::NoField != (VortexAxisFieldMask & whichField))
    {
        returnValue += _sfVortexAxis.getBinSize();
    }
    if(FieldBits::NoField != (AttenuationFieldMask & whichField))
    {
        returnValue += _sfAttenuation.getBinSize();
    }
    if(FieldBits::NoField != (MaxDistanceFieldMask & whichField))
    {
        returnValue += _sfMaxDistance.getBinSize();
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        returnValue += _sfBeacon.getBinSize();
    }

    return returnValue;
}

void VortexParticleAffectorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MagnitudeFieldMask & whichField))
    {
        _sfMagnitude.copyToBin(pMem);
    }
    if(FieldBits::NoField != (VortexAxisFieldMask & whichField))
    {
        _sfVortexAxis.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AttenuationFieldMask & whichField))
    {
        _sfAttenuation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MaxDistanceFieldMask & whichField))
    {
        _sfMaxDistance.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyToBin(pMem);
    }
}

void VortexParticleAffectorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MagnitudeFieldMask & whichField))
    {
        _sfMagnitude.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (VortexAxisFieldMask & whichField))
    {
        _sfVortexAxis.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AttenuationFieldMask & whichField))
    {
        _sfAttenuation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MaxDistanceFieldMask & whichField))
    {
        _sfMaxDistance.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyFromBin(pMem);
    }
}

//! create a new instance of the class
VortexParticleAffectorTransitPtr VortexParticleAffectorBase::createLocal(BitVector bFlags)
{
    VortexParticleAffectorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<VortexParticleAffector>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
VortexParticleAffectorTransitPtr VortexParticleAffectorBase::createDependent(BitVector bFlags)
{
    VortexParticleAffectorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<VortexParticleAffector>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
VortexParticleAffectorTransitPtr VortexParticleAffectorBase::create(void)
{
    VortexParticleAffectorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<VortexParticleAffector>(tmpPtr);
    }

    return fc;
}

VortexParticleAffector *VortexParticleAffectorBase::createEmptyLocal(BitVector bFlags)
{
    VortexParticleAffector *returnValue;

    newPtr<VortexParticleAffector>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
VortexParticleAffector *VortexParticleAffectorBase::createEmpty(void)
{
    VortexParticleAffector *returnValue;

    newPtr<VortexParticleAffector>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr VortexParticleAffectorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    VortexParticleAffector *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const VortexParticleAffector *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr VortexParticleAffectorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    VortexParticleAffector *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const VortexParticleAffector *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr VortexParticleAffectorBase::shallowCopy(void) const
{
    VortexParticleAffector *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const VortexParticleAffector *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

VortexParticleAffectorBase::VortexParticleAffectorBase(void) :
    Inherited(),
    _sfMagnitude              (Real32(5.000)),
    _sfVortexAxis             (Vec3f(0.0, 1.0, 0.0)),
    _sfAttenuation            (Real32(2.0)),
    _sfMaxDistance            (Real32(-1.0)),
    _sfBeacon                 (NULL)
{
}

VortexParticleAffectorBase::VortexParticleAffectorBase(const VortexParticleAffectorBase &source) :
    Inherited(source),
    _sfMagnitude              (source._sfMagnitude              ),
    _sfVortexAxis             (source._sfVortexAxis             ),
    _sfAttenuation            (source._sfAttenuation            ),
    _sfMaxDistance            (source._sfMaxDistance            ),
    _sfBeacon                 (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

VortexParticleAffectorBase::~VortexParticleAffectorBase(void)
{
}

void VortexParticleAffectorBase::onCreate(const VortexParticleAffector *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        VortexParticleAffector *pThis = static_cast<VortexParticleAffector *>(this);

        pThis->setBeacon(source->getBeacon());
    }
}

GetFieldHandlePtr VortexParticleAffectorBase::getHandleMagnitude       (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfMagnitude,
             this->getType().getFieldDesc(MagnitudeFieldId),
             const_cast<VortexParticleAffectorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr VortexParticleAffectorBase::editHandleMagnitude      (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfMagnitude,
             this->getType().getFieldDesc(MagnitudeFieldId),
             this));


    editSField(MagnitudeFieldMask);

    return returnValue;
}

GetFieldHandlePtr VortexParticleAffectorBase::getHandleVortexAxis      (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfVortexAxis,
             this->getType().getFieldDesc(VortexAxisFieldId),
             const_cast<VortexParticleAffectorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr VortexParticleAffectorBase::editHandleVortexAxis     (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfVortexAxis,
             this->getType().getFieldDesc(VortexAxisFieldId),
             this));


    editSField(VortexAxisFieldMask);

    return returnValue;
}

GetFieldHandlePtr VortexParticleAffectorBase::getHandleAttenuation     (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfAttenuation,
             this->getType().getFieldDesc(AttenuationFieldId),
             const_cast<VortexParticleAffectorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr VortexParticleAffectorBase::editHandleAttenuation    (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfAttenuation,
             this->getType().getFieldDesc(AttenuationFieldId),
             this));


    editSField(AttenuationFieldMask);

    return returnValue;
}

GetFieldHandlePtr VortexParticleAffectorBase::getHandleMaxDistance     (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfMaxDistance,
             this->getType().getFieldDesc(MaxDistanceFieldId),
             const_cast<VortexParticleAffectorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr VortexParticleAffectorBase::editHandleMaxDistance    (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfMaxDistance,
             this->getType().getFieldDesc(MaxDistanceFieldId),
             this));


    editSField(MaxDistanceFieldMask);

    return returnValue;
}

GetFieldHandlePtr VortexParticleAffectorBase::getHandleBeacon          (void) const
{
    SFUnrecNodePtr::GetHandlePtr returnValue(
        new  SFUnrecNodePtr::GetHandle(
             &_sfBeacon,
             this->getType().getFieldDesc(BeaconFieldId),
             const_cast<VortexParticleAffectorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr VortexParticleAffectorBase::editHandleBeacon         (void)
{
    SFUnrecNodePtr::EditHandlePtr returnValue(
        new  SFUnrecNodePtr::EditHandle(
             &_sfBeacon,
             this->getType().getFieldDesc(BeaconFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&VortexParticleAffector::setBeacon,
                    static_cast<VortexParticleAffector *>(this), _1));

    editSField(BeaconFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void VortexParticleAffectorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    VortexParticleAffector *pThis = static_cast<VortexParticleAffector *>(this);

    pThis->execSync(static_cast<VortexParticleAffector *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *VortexParticleAffectorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    VortexParticleAffector *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const VortexParticleAffector *>(pRefAspect),
                  dynamic_cast<const VortexParticleAffector *>(this));

    return returnValue;
}
#endif

void VortexParticleAffectorBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<VortexParticleAffector *>(this)->setBeacon(NULL);


}


OSG_END_NAMESPACE
