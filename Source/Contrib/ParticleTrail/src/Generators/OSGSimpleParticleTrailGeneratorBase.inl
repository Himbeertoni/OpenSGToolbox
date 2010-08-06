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
 **     class SimpleParticleTrailGenerator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SimpleParticleTrailGeneratorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 SimpleParticleTrailGeneratorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 SimpleParticleTrailGeneratorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the SimpleParticleTrailGenerator::_sfResolution field.

inline
Real32 &SimpleParticleTrailGeneratorBase::editResolution(void)
{
    editSField(ResolutionFieldMask);

    return _sfResolution.getValue();
}

//! Get the value of the SimpleParticleTrailGenerator::_sfResolution field.
inline
      Real32  SimpleParticleTrailGeneratorBase::getResolution(void) const
{
    return _sfResolution.getValue();
}

//! Set the value of the SimpleParticleTrailGenerator::_sfResolution field.
inline
void SimpleParticleTrailGeneratorBase::setResolution(const Real32 value)
{
    editSField(ResolutionFieldMask);

    _sfResolution.setValue(value);
}
//! Get the value of the SimpleParticleTrailGenerator::_sfDrawMethod field.

inline
UInt32 &SimpleParticleTrailGeneratorBase::editDrawMethod(void)
{
    editSField(DrawMethodFieldMask);

    return _sfDrawMethod.getValue();
}

//! Get the value of the SimpleParticleTrailGenerator::_sfDrawMethod field.
inline
      UInt32  SimpleParticleTrailGeneratorBase::getDrawMethod(void) const
{
    return _sfDrawMethod.getValue();
}

//! Set the value of the SimpleParticleTrailGenerator::_sfDrawMethod field.
inline
void SimpleParticleTrailGeneratorBase::setDrawMethod(const UInt32 value)
{
    editSField(DrawMethodFieldMask);

    _sfDrawMethod.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void SimpleParticleTrailGeneratorBase::execSync (      SimpleParticleTrailGeneratorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ResolutionFieldMask & whichField))
        _sfResolution.syncWith(pFrom->_sfResolution);

    if(FieldBits::NoField != (DrawMethodFieldMask & whichField))
        _sfDrawMethod.syncWith(pFrom->_sfDrawMethod);
}
#endif


inline
const Char8 *SimpleParticleTrailGeneratorBase::getClassname(void)
{
    return "SimpleParticleTrailGenerator";
}
OSG_GEN_CONTAINERPTR(SimpleParticleTrailGenerator);

OSG_END_NAMESPACE

