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
 **     class SegmentDistribution1D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SegmentDistribution1DBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 SegmentDistribution1DBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 SegmentDistribution1DBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the SegmentDistribution1D::_sfSegment field.

inline
Vec2f &SegmentDistribution1DBase::editSegment(void)
{
    editSField(SegmentFieldMask);

    return _sfSegment.getValue();
}

//! Get the value of the SegmentDistribution1D::_sfSegment field.
inline
const Vec2f &SegmentDistribution1DBase::getSegment(void) const
{
    return _sfSegment.getValue();
}

//! Set the value of the SegmentDistribution1D::_sfSegment field.
inline
void SegmentDistribution1DBase::setSegment(const Vec2f &value)
{
    editSField(SegmentFieldMask);

    _sfSegment.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void SegmentDistribution1DBase::execSync (      SegmentDistribution1DBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (SegmentFieldMask & whichField))
        _sfSegment.syncWith(pFrom->_sfSegment);
}
#endif


inline
const Char8 *SegmentDistribution1DBase::getClassname(void)
{
    return "SegmentDistribution1D";
}


OSG_GEN_CONTAINERPTR(SegmentDistribution1D);

OSG_END_NAMESPACE

