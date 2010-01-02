/*---------------------------------------------------------------------------*\
 *                       OpenSG ToolBox Animation                            *
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
 **     class SkeletonBlendedAnimation!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SkeletonBlendedAnimationBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 SkeletonBlendedAnimationBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
SkeletonBlendedAnimationPtr SkeletonBlendedAnimationBase::create(void) 
{
    SkeletonBlendedAnimationPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = SkeletonBlendedAnimationPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
SkeletonBlendedAnimationPtr SkeletonBlendedAnimationBase::createEmpty(void) 
{ 
    SkeletonBlendedAnimationPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the SkeletonBlendedAnimation::_mfSkeletonAnimations field.
inline
MFSkeletonAnimationPtr *SkeletonBlendedAnimationBase::getMFSkeletonAnimations(void)
{
    return &_mfSkeletonAnimations;
}

//! Get the SkeletonBlendedAnimation::_mfBlendAmounts field.
inline
MFReal32 *SkeletonBlendedAnimationBase::getMFBlendAmounts(void)
{
    return &_mfBlendAmounts;
}

//! Get the SkeletonBlendedAnimation::_mfOverrideStatuses field.
inline
MFBool *SkeletonBlendedAnimationBase::getMFOverrideStatuses(void)
{
    return &_mfOverrideStatuses;
}



//! Get the value of the \a index element the SkeletonBlendedAnimation::_mfSkeletonAnimations field.
inline
SkeletonAnimationPtr &SkeletonBlendedAnimationBase::getSkeletonAnimations(const UInt32 index)
{
    return _mfSkeletonAnimations[index];
}

//! Get the SkeletonBlendedAnimation::_mfSkeletonAnimations field.
inline
MFSkeletonAnimationPtr &SkeletonBlendedAnimationBase::getSkeletonAnimations(void)
{
    return _mfSkeletonAnimations;
}

//! Get the SkeletonBlendedAnimation::_mfSkeletonAnimations field.
inline
const MFSkeletonAnimationPtr &SkeletonBlendedAnimationBase::getSkeletonAnimations(void) const
{
    return _mfSkeletonAnimations;
}

//! Get the value of the \a index element the SkeletonBlendedAnimation::_mfBlendAmounts field.
inline
Real32 &SkeletonBlendedAnimationBase::getBlendAmounts(const UInt32 index)
{
    return _mfBlendAmounts[index];
}

//! Get the SkeletonBlendedAnimation::_mfBlendAmounts field.
inline
MFReal32 &SkeletonBlendedAnimationBase::getBlendAmounts(void)
{
    return _mfBlendAmounts;
}

//! Get the SkeletonBlendedAnimation::_mfBlendAmounts field.
inline
const MFReal32 &SkeletonBlendedAnimationBase::getBlendAmounts(void) const
{
    return _mfBlendAmounts;
}

//! Get the value of the \a index element the SkeletonBlendedAnimation::_mfOverrideStatuses field.
inline
bool SkeletonBlendedAnimationBase::getOverrideStatuses(const UInt32 index)
{
    return _mfOverrideStatuses[index];
}

//! Get the SkeletonBlendedAnimation::_mfOverrideStatuses field.
inline
MFBool &SkeletonBlendedAnimationBase::getOverrideStatuses(void)
{
    return _mfOverrideStatuses;
}

//! Get the SkeletonBlendedAnimation::_mfOverrideStatuses field.
inline
const MFBool &SkeletonBlendedAnimationBase::getOverrideStatuses(void) const
{
    return _mfOverrideStatuses;
}

OSG_END_NAMESPACE

#define OSGSKELETONBLENDEDANIMATIONBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
