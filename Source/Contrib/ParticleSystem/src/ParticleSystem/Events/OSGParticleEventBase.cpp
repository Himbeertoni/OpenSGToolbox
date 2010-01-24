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
 **     class ParticleEvent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGParticleEventBase.h"
#include "OSGParticleEvent.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ParticleEvent
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Int32           ParticleEventBase::_sfParticleIndex
    
*/

/*! \var Pnt3f           ParticleEventBase::_sfParticlePosition
    
*/

/*! \var Pnt3f           ParticleEventBase::_sfParticleSecPosition
    
*/

/*! \var Vec3f           ParticleEventBase::_sfParticleNormal
    
*/

/*! \var Color4f         ParticleEventBase::_sfParticleColor
    
*/

/*! \var Vec3f           ParticleEventBase::_sfParticleSize
    
*/

/*! \var Real32          ParticleEventBase::_sfParticleLifespan
    
*/

/*! \var Real32          ParticleEventBase::_sfParticleAge
    
*/

/*! \var Vec3f           ParticleEventBase::_sfParticleVelocity
    
*/

/*! \var Vec3f           ParticleEventBase::_sfParticleSecVelocity
    
*/

/*! \var Vec3f           ParticleEventBase::_sfParticleAcceleration
    
*/

/*! \var StringToUInt32Map ParticleEventBase::_sfParticleAttributes
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ParticleEvent *>::_type("ParticleEventPtr", "EventPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ParticleEvent *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ParticleEvent *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ParticleEvent *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ParticleEventBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "ParticleIndex",
        "",
        ParticleIndexFieldId, ParticleIndexFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ParticleEvent::editHandleParticleIndex),
        static_cast<FieldGetMethodSig >(&ParticleEvent::getHandleParticleIndex));

    oType.addInitialDesc(pDesc);


    pDesc = new SFPnt3f::Description(
        SFPnt3f::getClassType(),
        "ParticlePosition",
        "",
        ParticlePositionFieldId, ParticlePositionFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ParticleEvent::editHandleParticlePosition),
        static_cast<FieldGetMethodSig >(&ParticleEvent::getHandleParticlePosition));

    oType.addInitialDesc(pDesc);


    pDesc = new SFPnt3f::Description(
        SFPnt3f::getClassType(),
        "ParticleSecPosition",
        "",
        ParticleSecPositionFieldId, ParticleSecPositionFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ParticleEvent::editHandleParticleSecPosition),
        static_cast<FieldGetMethodSig >(&ParticleEvent::getHandleParticleSecPosition));

    oType.addInitialDesc(pDesc);


    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "ParticleNormal",
        "",
        ParticleNormalFieldId, ParticleNormalFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ParticleEvent::editHandleParticleNormal),
        static_cast<FieldGetMethodSig >(&ParticleEvent::getHandleParticleNormal));

    oType.addInitialDesc(pDesc);


    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "ParticleColor",
        "",
        ParticleColorFieldId, ParticleColorFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ParticleEvent::editHandleParticleColor),
        static_cast<FieldGetMethodSig >(&ParticleEvent::getHandleParticleColor));

    oType.addInitialDesc(pDesc);


    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "ParticleSize",
        "",
        ParticleSizeFieldId, ParticleSizeFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ParticleEvent::editHandleParticleSize),
        static_cast<FieldGetMethodSig >(&ParticleEvent::getHandleParticleSize));

    oType.addInitialDesc(pDesc);


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "ParticleLifespan",
        "",
        ParticleLifespanFieldId, ParticleLifespanFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ParticleEvent::editHandleParticleLifespan),
        static_cast<FieldGetMethodSig >(&ParticleEvent::getHandleParticleLifespan));

    oType.addInitialDesc(pDesc);


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "ParticleAge",
        "",
        ParticleAgeFieldId, ParticleAgeFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ParticleEvent::editHandleParticleAge),
        static_cast<FieldGetMethodSig >(&ParticleEvent::getHandleParticleAge));

    oType.addInitialDesc(pDesc);


    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "ParticleVelocity",
        "",
        ParticleVelocityFieldId, ParticleVelocityFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ParticleEvent::editHandleParticleVelocity),
        static_cast<FieldGetMethodSig >(&ParticleEvent::getHandleParticleVelocity));

    oType.addInitialDesc(pDesc);


    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "ParticleSecVelocity",
        "",
        ParticleSecVelocityFieldId, ParticleSecVelocityFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ParticleEvent::editHandleParticleSecVelocity),
        static_cast<FieldGetMethodSig >(&ParticleEvent::getHandleParticleSecVelocity));

    oType.addInitialDesc(pDesc);


    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "ParticleAcceleration",
        "",
        ParticleAccelerationFieldId, ParticleAccelerationFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ParticleEvent::editHandleParticleAcceleration),
        static_cast<FieldGetMethodSig >(&ParticleEvent::getHandleParticleAcceleration));

    oType.addInitialDesc(pDesc);


    pDesc = new SFStringToUInt32Map::Description(
        SFStringToUInt32Map::getClassType(),
        "ParticleAttributes",
        "",
        ParticleAttributesFieldId, ParticleAttributesFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ParticleEvent::editHandleParticleAttributes),
        static_cast<FieldGetMethodSig >(&ParticleEvent::getHandleParticleAttributes));

    oType.addInitialDesc(pDesc);

}


ParticleEventBase::TypeObject ParticleEventBase::_type(
    ParticleEventBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ParticleEventBase::createEmptyLocal),
    ParticleEvent::initMethod,
    ParticleEvent::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ParticleEvent::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"ParticleEvent\"\n"
    "\tparent=\"Event\"\n"
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
    "\t<Field\n"
    "\t\tname=\"ParticleIndex\"\n"
    "\t\ttype=\"Int32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "        defaultValue=\"-1\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ParticlePosition\"\n"
    "\t\ttype=\"Pnt3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "        defaultValue=\"0.0f,0.0f,0.0f\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ParticleSecPosition\"\n"
    "\t\ttype=\"Pnt3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "        defaultValue=\"0.0f,0.0f,0.0f\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ParticleNormal\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "        defaultValue=\"0.0f,0.0f,0.0f\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ParticleColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "        defaultValue=\"1.0f,1.0f,1.0f,1.0f\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ParticleSize\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "        defaultValue=\"1.0f,1.0f,1.0f\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ParticleLifespan\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "        defaultValue=\"0.0f\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ParticleAge\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "        defaultValue=\"0.0f\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ParticleVelocity\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "        defaultValue=\"0.0f,0.0f,0.0f\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ParticleSecVelocity\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "        defaultValue=\"0.0f,0.0f,0.0f\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ParticleAcceleration\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "        defaultValue=\"0.0f,0.0f,0.0f\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ParticleAttributes\"\n"
    "\t\ttype=\"StringToUInt32Map\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );


/*------------------------------ get -----------------------------------*/

FieldContainerType &ParticleEventBase::getType(void)
{
    return _type;
}

const FieldContainerType &ParticleEventBase::getType(void) const
{
    return _type;
}

UInt32 ParticleEventBase::getContainerSize(void) const
{
    return sizeof(ParticleEvent);
}

/*------------------------- decorator get ------------------------------*/


SFInt32 *ParticleEventBase::editSFParticleIndex(void)
{
    editSField(ParticleIndexFieldMask);

    return &_sfParticleIndex;
}

const SFInt32 *ParticleEventBase::getSFParticleIndex(void) const
{
    return &_sfParticleIndex;
}


SFPnt3f *ParticleEventBase::editSFParticlePosition(void)
{
    editSField(ParticlePositionFieldMask);

    return &_sfParticlePosition;
}

const SFPnt3f *ParticleEventBase::getSFParticlePosition(void) const
{
    return &_sfParticlePosition;
}


SFPnt3f *ParticleEventBase::editSFParticleSecPosition(void)
{
    editSField(ParticleSecPositionFieldMask);

    return &_sfParticleSecPosition;
}

const SFPnt3f *ParticleEventBase::getSFParticleSecPosition(void) const
{
    return &_sfParticleSecPosition;
}


SFVec3f *ParticleEventBase::editSFParticleNormal(void)
{
    editSField(ParticleNormalFieldMask);

    return &_sfParticleNormal;
}

const SFVec3f *ParticleEventBase::getSFParticleNormal(void) const
{
    return &_sfParticleNormal;
}


SFColor4f *ParticleEventBase::editSFParticleColor(void)
{
    editSField(ParticleColorFieldMask);

    return &_sfParticleColor;
}

const SFColor4f *ParticleEventBase::getSFParticleColor(void) const
{
    return &_sfParticleColor;
}


SFVec3f *ParticleEventBase::editSFParticleSize(void)
{
    editSField(ParticleSizeFieldMask);

    return &_sfParticleSize;
}

const SFVec3f *ParticleEventBase::getSFParticleSize(void) const
{
    return &_sfParticleSize;
}


SFReal32 *ParticleEventBase::editSFParticleLifespan(void)
{
    editSField(ParticleLifespanFieldMask);

    return &_sfParticleLifespan;
}

const SFReal32 *ParticleEventBase::getSFParticleLifespan(void) const
{
    return &_sfParticleLifespan;
}


SFReal32 *ParticleEventBase::editSFParticleAge(void)
{
    editSField(ParticleAgeFieldMask);

    return &_sfParticleAge;
}

const SFReal32 *ParticleEventBase::getSFParticleAge(void) const
{
    return &_sfParticleAge;
}


SFVec3f *ParticleEventBase::editSFParticleVelocity(void)
{
    editSField(ParticleVelocityFieldMask);

    return &_sfParticleVelocity;
}

const SFVec3f *ParticleEventBase::getSFParticleVelocity(void) const
{
    return &_sfParticleVelocity;
}


SFVec3f *ParticleEventBase::editSFParticleSecVelocity(void)
{
    editSField(ParticleSecVelocityFieldMask);

    return &_sfParticleSecVelocity;
}

const SFVec3f *ParticleEventBase::getSFParticleSecVelocity(void) const
{
    return &_sfParticleSecVelocity;
}


SFVec3f *ParticleEventBase::editSFParticleAcceleration(void)
{
    editSField(ParticleAccelerationFieldMask);

    return &_sfParticleAcceleration;
}

const SFVec3f *ParticleEventBase::getSFParticleAcceleration(void) const
{
    return &_sfParticleAcceleration;
}


SFStringToUInt32Map *ParticleEventBase::editSFParticleAttributes(void)
{
    editSField(ParticleAttributesFieldMask);

    return &_sfParticleAttributes;
}

const SFStringToUInt32Map *ParticleEventBase::getSFParticleAttributes(void) const
{
    return &_sfParticleAttributes;
}






/*------------------------------ access -----------------------------------*/

UInt32 ParticleEventBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ParticleIndexFieldMask & whichField))
    {
        returnValue += _sfParticleIndex.getBinSize();
    }
    if(FieldBits::NoField != (ParticlePositionFieldMask & whichField))
    {
        returnValue += _sfParticlePosition.getBinSize();
    }
    if(FieldBits::NoField != (ParticleSecPositionFieldMask & whichField))
    {
        returnValue += _sfParticleSecPosition.getBinSize();
    }
    if(FieldBits::NoField != (ParticleNormalFieldMask & whichField))
    {
        returnValue += _sfParticleNormal.getBinSize();
    }
    if(FieldBits::NoField != (ParticleColorFieldMask & whichField))
    {
        returnValue += _sfParticleColor.getBinSize();
    }
    if(FieldBits::NoField != (ParticleSizeFieldMask & whichField))
    {
        returnValue += _sfParticleSize.getBinSize();
    }
    if(FieldBits::NoField != (ParticleLifespanFieldMask & whichField))
    {
        returnValue += _sfParticleLifespan.getBinSize();
    }
    if(FieldBits::NoField != (ParticleAgeFieldMask & whichField))
    {
        returnValue += _sfParticleAge.getBinSize();
    }
    if(FieldBits::NoField != (ParticleVelocityFieldMask & whichField))
    {
        returnValue += _sfParticleVelocity.getBinSize();
    }
    if(FieldBits::NoField != (ParticleSecVelocityFieldMask & whichField))
    {
        returnValue += _sfParticleSecVelocity.getBinSize();
    }
    if(FieldBits::NoField != (ParticleAccelerationFieldMask & whichField))
    {
        returnValue += _sfParticleAcceleration.getBinSize();
    }
    if(FieldBits::NoField != (ParticleAttributesFieldMask & whichField))
    {
        returnValue += _sfParticleAttributes.getBinSize();
    }

    return returnValue;
}

void ParticleEventBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ParticleIndexFieldMask & whichField))
    {
        _sfParticleIndex.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParticlePositionFieldMask & whichField))
    {
        _sfParticlePosition.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParticleSecPositionFieldMask & whichField))
    {
        _sfParticleSecPosition.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParticleNormalFieldMask & whichField))
    {
        _sfParticleNormal.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParticleColorFieldMask & whichField))
    {
        _sfParticleColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParticleSizeFieldMask & whichField))
    {
        _sfParticleSize.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParticleLifespanFieldMask & whichField))
    {
        _sfParticleLifespan.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParticleAgeFieldMask & whichField))
    {
        _sfParticleAge.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParticleVelocityFieldMask & whichField))
    {
        _sfParticleVelocity.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParticleSecVelocityFieldMask & whichField))
    {
        _sfParticleSecVelocity.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParticleAccelerationFieldMask & whichField))
    {
        _sfParticleAcceleration.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParticleAttributesFieldMask & whichField))
    {
        _sfParticleAttributes.copyToBin(pMem);
    }
}

void ParticleEventBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ParticleIndexFieldMask & whichField))
    {
        _sfParticleIndex.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParticlePositionFieldMask & whichField))
    {
        _sfParticlePosition.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParticleSecPositionFieldMask & whichField))
    {
        _sfParticleSecPosition.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParticleNormalFieldMask & whichField))
    {
        _sfParticleNormal.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParticleColorFieldMask & whichField))
    {
        _sfParticleColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParticleSizeFieldMask & whichField))
    {
        _sfParticleSize.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParticleLifespanFieldMask & whichField))
    {
        _sfParticleLifespan.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParticleAgeFieldMask & whichField))
    {
        _sfParticleAge.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParticleVelocityFieldMask & whichField))
    {
        _sfParticleVelocity.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParticleSecVelocityFieldMask & whichField))
    {
        _sfParticleSecVelocity.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParticleAccelerationFieldMask & whichField))
    {
        _sfParticleAcceleration.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParticleAttributesFieldMask & whichField))
    {
        _sfParticleAttributes.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ParticleEventTransitPtr ParticleEventBase::createLocal(BitVector bFlags)
{
    ParticleEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ParticleEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ParticleEventTransitPtr ParticleEventBase::createDependent(BitVector bFlags)
{
    ParticleEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ParticleEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ParticleEventTransitPtr ParticleEventBase::create(void)
{
    ParticleEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ParticleEvent>(tmpPtr);
    }

    return fc;
}

ParticleEvent *ParticleEventBase::createEmptyLocal(BitVector bFlags)
{
    ParticleEvent *returnValue;

    newPtr<ParticleEvent>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ParticleEvent *ParticleEventBase::createEmpty(void)
{
    ParticleEvent *returnValue;

    newPtr<ParticleEvent>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ParticleEventBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ParticleEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ParticleEvent *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ParticleEventBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ParticleEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ParticleEvent *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ParticleEventBase::shallowCopy(void) const
{
    ParticleEvent *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ParticleEvent *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ParticleEventBase::ParticleEventBase(void) :
    Inherited(),
    _sfParticleIndex          (Int32(-1)),
    _sfParticlePosition       (Pnt3f(0.0f,0.0f,0.0f)),
    _sfParticleSecPosition    (Pnt3f(0.0f,0.0f,0.0f)),
    _sfParticleNormal         (Vec3f(0.0f,0.0f,0.0f)),
    _sfParticleColor          (Color4f(1.0f,1.0f,1.0f,1.0f)),
    _sfParticleSize           (Vec3f(1.0f,1.0f,1.0f)),
    _sfParticleLifespan       (Real32(0.0f)),
    _sfParticleAge            (Real32(0.0f)),
    _sfParticleVelocity       (Vec3f(0.0f,0.0f,0.0f)),
    _sfParticleSecVelocity    (Vec3f(0.0f,0.0f,0.0f)),
    _sfParticleAcceleration   (Vec3f(0.0f,0.0f,0.0f)),
    _sfParticleAttributes     ()
{
}

ParticleEventBase::ParticleEventBase(const ParticleEventBase &source) :
    Inherited(source),
    _sfParticleIndex          (source._sfParticleIndex          ),
    _sfParticlePosition       (source._sfParticlePosition       ),
    _sfParticleSecPosition    (source._sfParticleSecPosition    ),
    _sfParticleNormal         (source._sfParticleNormal         ),
    _sfParticleColor          (source._sfParticleColor          ),
    _sfParticleSize           (source._sfParticleSize           ),
    _sfParticleLifespan       (source._sfParticleLifespan       ),
    _sfParticleAge            (source._sfParticleAge            ),
    _sfParticleVelocity       (source._sfParticleVelocity       ),
    _sfParticleSecVelocity    (source._sfParticleSecVelocity    ),
    _sfParticleAcceleration   (source._sfParticleAcceleration   ),
    _sfParticleAttributes     (source._sfParticleAttributes     )
{
}


/*-------------------------- destructors ----------------------------------*/

ParticleEventBase::~ParticleEventBase(void)
{
}


GetFieldHandlePtr ParticleEventBase::getHandleParticleIndex   (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfParticleIndex,
             this->getType().getFieldDesc(ParticleIndexFieldId),
             const_cast<ParticleEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ParticleEventBase::editHandleParticleIndex  (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfParticleIndex,
             this->getType().getFieldDesc(ParticleIndexFieldId),
             this));


    editSField(ParticleIndexFieldMask);

    return returnValue;
}

GetFieldHandlePtr ParticleEventBase::getHandleParticlePosition (void) const
{
    SFPnt3f::GetHandlePtr returnValue(
        new  SFPnt3f::GetHandle(
             &_sfParticlePosition,
             this->getType().getFieldDesc(ParticlePositionFieldId),
             const_cast<ParticleEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ParticleEventBase::editHandleParticlePosition(void)
{
    SFPnt3f::EditHandlePtr returnValue(
        new  SFPnt3f::EditHandle(
             &_sfParticlePosition,
             this->getType().getFieldDesc(ParticlePositionFieldId),
             this));


    editSField(ParticlePositionFieldMask);

    return returnValue;
}

GetFieldHandlePtr ParticleEventBase::getHandleParticleSecPosition (void) const
{
    SFPnt3f::GetHandlePtr returnValue(
        new  SFPnt3f::GetHandle(
             &_sfParticleSecPosition,
             this->getType().getFieldDesc(ParticleSecPositionFieldId),
             const_cast<ParticleEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ParticleEventBase::editHandleParticleSecPosition(void)
{
    SFPnt3f::EditHandlePtr returnValue(
        new  SFPnt3f::EditHandle(
             &_sfParticleSecPosition,
             this->getType().getFieldDesc(ParticleSecPositionFieldId),
             this));


    editSField(ParticleSecPositionFieldMask);

    return returnValue;
}

GetFieldHandlePtr ParticleEventBase::getHandleParticleNormal  (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfParticleNormal,
             this->getType().getFieldDesc(ParticleNormalFieldId),
             const_cast<ParticleEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ParticleEventBase::editHandleParticleNormal (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfParticleNormal,
             this->getType().getFieldDesc(ParticleNormalFieldId),
             this));


    editSField(ParticleNormalFieldMask);

    return returnValue;
}

GetFieldHandlePtr ParticleEventBase::getHandleParticleColor   (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfParticleColor,
             this->getType().getFieldDesc(ParticleColorFieldId),
             const_cast<ParticleEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ParticleEventBase::editHandleParticleColor  (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfParticleColor,
             this->getType().getFieldDesc(ParticleColorFieldId),
             this));


    editSField(ParticleColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr ParticleEventBase::getHandleParticleSize    (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfParticleSize,
             this->getType().getFieldDesc(ParticleSizeFieldId),
             const_cast<ParticleEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ParticleEventBase::editHandleParticleSize   (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfParticleSize,
             this->getType().getFieldDesc(ParticleSizeFieldId),
             this));


    editSField(ParticleSizeFieldMask);

    return returnValue;
}

GetFieldHandlePtr ParticleEventBase::getHandleParticleLifespan (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfParticleLifespan,
             this->getType().getFieldDesc(ParticleLifespanFieldId),
             const_cast<ParticleEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ParticleEventBase::editHandleParticleLifespan(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfParticleLifespan,
             this->getType().getFieldDesc(ParticleLifespanFieldId),
             this));


    editSField(ParticleLifespanFieldMask);

    return returnValue;
}

GetFieldHandlePtr ParticleEventBase::getHandleParticleAge     (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfParticleAge,
             this->getType().getFieldDesc(ParticleAgeFieldId),
             const_cast<ParticleEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ParticleEventBase::editHandleParticleAge    (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfParticleAge,
             this->getType().getFieldDesc(ParticleAgeFieldId),
             this));


    editSField(ParticleAgeFieldMask);

    return returnValue;
}

GetFieldHandlePtr ParticleEventBase::getHandleParticleVelocity (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfParticleVelocity,
             this->getType().getFieldDesc(ParticleVelocityFieldId),
             const_cast<ParticleEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ParticleEventBase::editHandleParticleVelocity(void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfParticleVelocity,
             this->getType().getFieldDesc(ParticleVelocityFieldId),
             this));


    editSField(ParticleVelocityFieldMask);

    return returnValue;
}

GetFieldHandlePtr ParticleEventBase::getHandleParticleSecVelocity (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfParticleSecVelocity,
             this->getType().getFieldDesc(ParticleSecVelocityFieldId),
             const_cast<ParticleEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ParticleEventBase::editHandleParticleSecVelocity(void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfParticleSecVelocity,
             this->getType().getFieldDesc(ParticleSecVelocityFieldId),
             this));


    editSField(ParticleSecVelocityFieldMask);

    return returnValue;
}

GetFieldHandlePtr ParticleEventBase::getHandleParticleAcceleration (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfParticleAcceleration,
             this->getType().getFieldDesc(ParticleAccelerationFieldId),
             const_cast<ParticleEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ParticleEventBase::editHandleParticleAcceleration(void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfParticleAcceleration,
             this->getType().getFieldDesc(ParticleAccelerationFieldId),
             this));


    editSField(ParticleAccelerationFieldMask);

    return returnValue;
}

GetFieldHandlePtr ParticleEventBase::getHandleParticleAttributes (void) const
{
    SFStringToUInt32Map::GetHandlePtr returnValue(
        new  SFStringToUInt32Map::GetHandle(
             &_sfParticleAttributes,
             this->getType().getFieldDesc(ParticleAttributesFieldId),
             const_cast<ParticleEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ParticleEventBase::editHandleParticleAttributes(void)
{
    SFStringToUInt32Map::EditHandlePtr returnValue(
        new  SFStringToUInt32Map::EditHandle(
             &_sfParticleAttributes,
             this->getType().getFieldDesc(ParticleAttributesFieldId),
             this));


    editSField(ParticleAttributesFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ParticleEventBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ParticleEvent *pThis = static_cast<ParticleEvent *>(this);

    pThis->execSync(static_cast<ParticleEvent *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ParticleEventBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ParticleEvent *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ParticleEvent *>(pRefAspect),
                  dynamic_cast<const ParticleEvent *>(this));

    return returnValue;
}
#endif

void ParticleEventBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
