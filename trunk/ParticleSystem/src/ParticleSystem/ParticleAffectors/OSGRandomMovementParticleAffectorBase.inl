/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox Particle System                        *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                          Authors: David Kabala                            *
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
 **     class RandomMovementParticleAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &RandomMovementParticleAffectorBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 RandomMovementParticleAffectorBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
RandomMovementParticleAffectorPtr RandomMovementParticleAffectorBase::create(void) 
{
    RandomMovementParticleAffectorPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = RandomMovementParticleAffectorPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
RandomMovementParticleAffectorPtr RandomMovementParticleAffectorBase::createEmpty(void) 
{ 
    RandomMovementParticleAffectorPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the RandomMovementParticleAffector::_sfAttributeAffected field.
inline
SFUInt32 *RandomMovementParticleAffectorBase::getSFAttributeAffected(void)
{
    return &_sfAttributeAffected;
}

//! Get the RandomMovementParticleAffector::_sfMagnitude field.
inline
SFReal32 *RandomMovementParticleAffectorBase::getSFMagnitude(void)
{
    return &_sfMagnitude;
}

//! Get the RandomMovementParticleAffector::_sfSmooth field.
inline
SFBool *RandomMovementParticleAffectorBase::getSFSmooth(void)
{
    return &_sfSmooth;
}


//! Get the value of the RandomMovementParticleAffector::_sfAttributeAffected field.
inline
UInt32 &RandomMovementParticleAffectorBase::getAttributeAffected(void)
{
    return _sfAttributeAffected.getValue();
}

//! Get the value of the RandomMovementParticleAffector::_sfAttributeAffected field.
inline
const UInt32 &RandomMovementParticleAffectorBase::getAttributeAffected(void) const
{
    return _sfAttributeAffected.getValue();
}

//! Set the value of the RandomMovementParticleAffector::_sfAttributeAffected field.
inline
void RandomMovementParticleAffectorBase::setAttributeAffected(const UInt32 &value)
{
    _sfAttributeAffected.setValue(value);
}

//! Get the value of the RandomMovementParticleAffector::_sfMagnitude field.
inline
Real32 &RandomMovementParticleAffectorBase::getMagnitude(void)
{
    return _sfMagnitude.getValue();
}

//! Get the value of the RandomMovementParticleAffector::_sfMagnitude field.
inline
const Real32 &RandomMovementParticleAffectorBase::getMagnitude(void) const
{
    return _sfMagnitude.getValue();
}

//! Set the value of the RandomMovementParticleAffector::_sfMagnitude field.
inline
void RandomMovementParticleAffectorBase::setMagnitude(const Real32 &value)
{
    _sfMagnitude.setValue(value);
}

//! Get the value of the RandomMovementParticleAffector::_sfSmooth field.
inline
bool &RandomMovementParticleAffectorBase::getSmooth(void)
{
    return _sfSmooth.getValue();
}

//! Get the value of the RandomMovementParticleAffector::_sfSmooth field.
inline
const bool &RandomMovementParticleAffectorBase::getSmooth(void) const
{
    return _sfSmooth.getValue();
}

//! Set the value of the RandomMovementParticleAffector::_sfSmooth field.
inline
void RandomMovementParticleAffectorBase::setSmooth(const bool &value)
{
    _sfSmooth.setValue(value);
}


OSG_END_NAMESPACE

#define OSGRANDOMMOVEMENTPARTICLEAFFECTORBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
