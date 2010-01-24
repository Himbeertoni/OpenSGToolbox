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
 **     class BurstParticleGenerator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &BurstParticleGeneratorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 BurstParticleGeneratorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 BurstParticleGeneratorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the BurstParticleGenerator::_sfBurstAmount field.

inline
UInt32 &BurstParticleGeneratorBase::editBurstAmount(void)
{
    editSField(BurstAmountFieldMask);

    return _sfBurstAmount.getValue();
}

//! Get the value of the BurstParticleGenerator::_sfBurstAmount field.
inline
      UInt32  BurstParticleGeneratorBase::getBurstAmount(void) const
{
    return _sfBurstAmount.getValue();
}

//! Set the value of the BurstParticleGenerator::_sfBurstAmount field.
inline
void BurstParticleGeneratorBase::setBurstAmount(const UInt32 value)
{
    editSField(BurstAmountFieldMask);

    _sfBurstAmount.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void BurstParticleGeneratorBase::execSync (      BurstParticleGeneratorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (BurstAmountFieldMask & whichField))
        _sfBurstAmount.syncWith(pFrom->_sfBurstAmount);
}
#endif


inline
const Char8 *BurstParticleGeneratorBase::getClassname(void)
{
    return "BurstParticleGenerator";
}


OSG_GEN_CONTAINERPTR(BurstParticleGenerator);

OSG_END_NAMESPACE

