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
 **     class CollectiveGravityParticleSystemAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &CollectiveGravityParticleSystemAffectorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 CollectiveGravityParticleSystemAffectorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 CollectiveGravityParticleSystemAffectorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the CollectiveGravityParticleSystemAffector::_sfParticleMass field.

inline
Real32 &CollectiveGravityParticleSystemAffectorBase::editParticleMass(void)
{
    editSField(ParticleMassFieldMask);

    return _sfParticleMass.getValue();
}

//! Get the value of the CollectiveGravityParticleSystemAffector::_sfParticleMass field.
inline
      Real32  CollectiveGravityParticleSystemAffectorBase::getParticleMass(void) const
{
    return _sfParticleMass.getValue();
}

//! Set the value of the CollectiveGravityParticleSystemAffector::_sfParticleMass field.
inline
void CollectiveGravityParticleSystemAffectorBase::setParticleMass(const Real32 value)
{
    editSField(ParticleMassFieldMask);

    _sfParticleMass.setValue(value);
}
//! Get the value of the CollectiveGravityParticleSystemAffector::_sfGravitationalConstant field.

inline
Real32 &CollectiveGravityParticleSystemAffectorBase::editGravitationalConstant(void)
{
    editSField(GravitationalConstantFieldMask);

    return _sfGravitationalConstant.getValue();
}

//! Get the value of the CollectiveGravityParticleSystemAffector::_sfGravitationalConstant field.
inline
      Real32  CollectiveGravityParticleSystemAffectorBase::getGravitationalConstant(void) const
{
    return _sfGravitationalConstant.getValue();
}

//! Set the value of the CollectiveGravityParticleSystemAffector::_sfGravitationalConstant field.
inline
void CollectiveGravityParticleSystemAffectorBase::setGravitationalConstant(const Real32 value)
{
    editSField(GravitationalConstantFieldMask);

    _sfGravitationalConstant.setValue(value);
}
//! Get the value of the CollectiveGravityParticleSystemAffector::_sfParticleMassSource field.

inline
UInt32 &CollectiveGravityParticleSystemAffectorBase::editParticleMassSource(void)
{
    editSField(ParticleMassSourceFieldMask);

    return _sfParticleMassSource.getValue();
}

//! Get the value of the CollectiveGravityParticleSystemAffector::_sfParticleMassSource field.
inline
      UInt32  CollectiveGravityParticleSystemAffectorBase::getParticleMassSource(void) const
{
    return _sfParticleMassSource.getValue();
}

//! Set the value of the CollectiveGravityParticleSystemAffector::_sfParticleMassSource field.
inline
void CollectiveGravityParticleSystemAffectorBase::setParticleMassSource(const UInt32 value)
{
    editSField(ParticleMassSourceFieldMask);

    _sfParticleMassSource.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void CollectiveGravityParticleSystemAffectorBase::execSync (      CollectiveGravityParticleSystemAffectorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ParticleMassFieldMask & whichField))
        _sfParticleMass.syncWith(pFrom->_sfParticleMass);

    if(FieldBits::NoField != (GravitationalConstantFieldMask & whichField))
        _sfGravitationalConstant.syncWith(pFrom->_sfGravitationalConstant);

    if(FieldBits::NoField != (ParticleMassSourceFieldMask & whichField))
        _sfParticleMassSource.syncWith(pFrom->_sfParticleMassSource);
}
#endif


inline
const Char8 *CollectiveGravityParticleSystemAffectorBase::getClassname(void)
{
    return "CollectiveGravityParticleSystemAffector";
}


OSG_GEN_CONTAINERPTR(CollectiveGravityParticleSystemAffector);

OSG_END_NAMESPACE

