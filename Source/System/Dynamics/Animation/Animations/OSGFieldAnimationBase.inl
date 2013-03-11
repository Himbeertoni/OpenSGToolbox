/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class FieldAnimation!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &FieldAnimationBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 FieldAnimationBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 FieldAnimationBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the FieldAnimation::_sfAnimator field.
inline
TBAnimator * FieldAnimationBase::getAnimator(void) const
{
    return _sfAnimator.getValue();
}

//! Set the value of the FieldAnimation::_sfAnimator field.
inline
void FieldAnimationBase::setAnimator(TBAnimator * const value)
{
    editSField(AnimatorFieldMask);

    _sfAnimator.setValue(value);
}

//! Get the value of the FieldAnimation::_sfContainer field.
inline
FieldContainer * FieldAnimationBase::getContainer(void) const
{
    return _sfContainer.getValue();
}

//! Set the value of the FieldAnimation::_sfContainer field.
inline
void FieldAnimationBase::setContainer(FieldContainer * const value)
{
    editSField(ContainerFieldMask);

    _sfContainer.setValue(value);
}
//! Get the value of the FieldAnimation::_sfFieldId field.

inline
UInt32 &FieldAnimationBase::editFieldId(void)
{
    editSField(FieldIdFieldMask);

    return _sfFieldId.getValue();
}

//! Get the value of the FieldAnimation::_sfFieldId field.
inline
      UInt32  FieldAnimationBase::getFieldId(void) const
{
    return _sfFieldId.getValue();
}

//! Set the value of the FieldAnimation::_sfFieldId field.
inline
void FieldAnimationBase::setFieldId(const UInt32 value)
{
    editSField(FieldIdFieldMask);

    _sfFieldId.setValue(value);
}
//! Get the value of the FieldAnimation::_sfFieldName field.

inline
std::string &FieldAnimationBase::editFieldName(void)
{
    editSField(FieldNameFieldMask);

    return _sfFieldName.getValue();
}

//! Get the value of the FieldAnimation::_sfFieldName field.
inline
const std::string &FieldAnimationBase::getFieldName(void) const
{
    return _sfFieldName.getValue();
}

//! Set the value of the FieldAnimation::_sfFieldName field.
inline
void FieldAnimationBase::setFieldName(const std::string &value)
{
    editSField(FieldNameFieldMask);

    _sfFieldName.setValue(value);
}
//! Get the value of the FieldAnimation::_sfIndex field.

inline
Int64 &FieldAnimationBase::editIndex(void)
{
    editSField(IndexFieldMask);

    return _sfIndex.getValue();
}

//! Get the value of the FieldAnimation::_sfIndex field.
inline
      Int64  FieldAnimationBase::getIndex(void) const
{
    return _sfIndex.getValue();
}

//! Set the value of the FieldAnimation::_sfIndex field.
inline
void FieldAnimationBase::setIndex(const Int64 value)
{
    editSField(IndexFieldMask);

    _sfIndex.setValue(value);
}
//! Get the value of the FieldAnimation::_sfInterpolationType field.

inline
UInt32 &FieldAnimationBase::editInterpolationType(void)
{
    editSField(InterpolationTypeFieldMask);

    return _sfInterpolationType.getValue();
}

//! Get the value of the FieldAnimation::_sfInterpolationType field.
inline
      UInt32  FieldAnimationBase::getInterpolationType(void) const
{
    return _sfInterpolationType.getValue();
}

//! Set the value of the FieldAnimation::_sfInterpolationType field.
inline
void FieldAnimationBase::setInterpolationType(const UInt32 value)
{
    editSField(InterpolationTypeFieldMask);

    _sfInterpolationType.setValue(value);
}
//! Get the value of the FieldAnimation::_sfReplacementPolicy field.

inline
UInt32 &FieldAnimationBase::editReplacementPolicy(void)
{
    editSField(ReplacementPolicyFieldMask);

    return _sfReplacementPolicy.getValue();
}

//! Get the value of the FieldAnimation::_sfReplacementPolicy field.
inline
      UInt32  FieldAnimationBase::getReplacementPolicy(void) const
{
    return _sfReplacementPolicy.getValue();
}

//! Set the value of the FieldAnimation::_sfReplacementPolicy field.
inline
void FieldAnimationBase::setReplacementPolicy(const UInt32 value)
{
    editSField(ReplacementPolicyFieldMask);

    _sfReplacementPolicy.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void FieldAnimationBase::execSync (      FieldAnimationBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (AnimatorFieldMask & whichField))
        _sfAnimator.syncWith(pFrom->_sfAnimator);

    if(FieldBits::NoField != (ContainerFieldMask & whichField))
        _sfContainer.syncWith(pFrom->_sfContainer);

    if(FieldBits::NoField != (FieldIdFieldMask & whichField))
        _sfFieldId.syncWith(pFrom->_sfFieldId);

    if(FieldBits::NoField != (FieldNameFieldMask & whichField))
        _sfFieldName.syncWith(pFrom->_sfFieldName);

    if(FieldBits::NoField != (IndexFieldMask & whichField))
        _sfIndex.syncWith(pFrom->_sfIndex);

    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
        _sfInterpolationType.syncWith(pFrom->_sfInterpolationType);

    if(FieldBits::NoField != (ReplacementPolicyFieldMask & whichField))
        _sfReplacementPolicy.syncWith(pFrom->_sfReplacementPolicy);
}
#endif


inline
const Char8 *FieldAnimationBase::getClassname(void)
{
    return "FieldAnimation";
}
OSG_GEN_CONTAINERPTR(FieldAnimation);

OSG_END_NAMESPACE

