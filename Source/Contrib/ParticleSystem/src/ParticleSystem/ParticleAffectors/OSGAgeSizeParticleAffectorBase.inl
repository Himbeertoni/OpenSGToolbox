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
 **     class AgeSizeParticleAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &AgeSizeParticleAffectorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 AgeSizeParticleAffectorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 AgeSizeParticleAffectorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the \a index element the AgeSizeParticleAffector::_mfAges field.
inline
      Real32  AgeSizeParticleAffectorBase::getAges(const UInt32 index) const
{
    return _mfAges[index];
}

inline
Real32 &AgeSizeParticleAffectorBase::editAges(const UInt32 index)
{
    editMField(AgesFieldMask, _mfAges);

    return _mfAges[index];
}


//! Get the value of the \a index element the AgeSizeParticleAffector::_mfSizes field.
inline
const Vec3f &AgeSizeParticleAffectorBase::getSizes(const UInt32 index) const
{
    return _mfSizes[index];
}

inline
Vec3f &AgeSizeParticleAffectorBase::editSizes(const UInt32 index)
{
    editMField(SizesFieldMask, _mfSizes);

    return _mfSizes[index];
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void AgeSizeParticleAffectorBase::execSync (      AgeSizeParticleAffectorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (AgesFieldMask & whichField))
        _mfAges.syncWith(pFrom->_mfAges,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (SizesFieldMask & whichField))
        _mfSizes.syncWith(pFrom->_mfSizes,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);
}
#endif


inline
const Char8 *AgeSizeParticleAffectorBase::getClassname(void)
{
    return "AgeSizeParticleAffector";
}


OSG_GEN_CONTAINERPTR(AgeSizeParticleAffector);

OSG_END_NAMESPACE

