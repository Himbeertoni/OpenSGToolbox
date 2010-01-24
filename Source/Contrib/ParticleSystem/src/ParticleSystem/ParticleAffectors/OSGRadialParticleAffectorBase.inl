/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class RadialParticleAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &RadialParticleAffectorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 RadialParticleAffectorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 RadialParticleAffectorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the RadialParticleAffector::_sfMagnitude field.

inline
Real32 &RadialParticleAffectorBase::editMagnitude(void)
{
    editSField(MagnitudeFieldMask);

    return _sfMagnitude.getValue();
}

//! Get the value of the RadialParticleAffector::_sfMagnitude field.
inline
      Real32  RadialParticleAffectorBase::getMagnitude(void) const
{
    return _sfMagnitude.getValue();
}

//! Set the value of the RadialParticleAffector::_sfMagnitude field.
inline
void RadialParticleAffectorBase::setMagnitude(const Real32 value)
{
    editSField(MagnitudeFieldMask);

    _sfMagnitude.setValue(value);
}
//! Get the value of the RadialParticleAffector::_sfAttenuation field.

inline
Real32 &RadialParticleAffectorBase::editAttenuation(void)
{
    editSField(AttenuationFieldMask);

    return _sfAttenuation.getValue();
}

//! Get the value of the RadialParticleAffector::_sfAttenuation field.
inline
      Real32  RadialParticleAffectorBase::getAttenuation(void) const
{
    return _sfAttenuation.getValue();
}

//! Set the value of the RadialParticleAffector::_sfAttenuation field.
inline
void RadialParticleAffectorBase::setAttenuation(const Real32 value)
{
    editSField(AttenuationFieldMask);

    _sfAttenuation.setValue(value);
}
//! Get the value of the RadialParticleAffector::_sfMaxDistance field.

inline
Real32 &RadialParticleAffectorBase::editMaxDistance(void)
{
    editSField(MaxDistanceFieldMask);

    return _sfMaxDistance.getValue();
}

//! Get the value of the RadialParticleAffector::_sfMaxDistance field.
inline
      Real32  RadialParticleAffectorBase::getMaxDistance(void) const
{
    return _sfMaxDistance.getValue();
}

//! Set the value of the RadialParticleAffector::_sfMaxDistance field.
inline
void RadialParticleAffectorBase::setMaxDistance(const Real32 value)
{
    editSField(MaxDistanceFieldMask);

    _sfMaxDistance.setValue(value);
}

//! Get the value of the RadialParticleAffector::_sfBeacon field.
inline
Node * RadialParticleAffectorBase::getBeacon(void) const
{
    return _sfBeacon.getValue();
}

//! Set the value of the RadialParticleAffector::_sfBeacon field.
inline
void RadialParticleAffectorBase::setBeacon(Node * const value)
{
    editSField(BeaconFieldMask);

    _sfBeacon.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void RadialParticleAffectorBase::execSync (      RadialParticleAffectorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (MagnitudeFieldMask & whichField))
        _sfMagnitude.syncWith(pFrom->_sfMagnitude);

    if(FieldBits::NoField != (AttenuationFieldMask & whichField))
        _sfAttenuation.syncWith(pFrom->_sfAttenuation);

    if(FieldBits::NoField != (MaxDistanceFieldMask & whichField))
        _sfMaxDistance.syncWith(pFrom->_sfMaxDistance);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
        _sfBeacon.syncWith(pFrom->_sfBeacon);
}
#endif


inline
const Char8 *RadialParticleAffectorBase::getClassname(void)
{
    return "RadialParticleAffector";
}


OSG_GEN_CONTAINERPTR(RadialParticleAffector);

OSG_END_NAMESPACE

