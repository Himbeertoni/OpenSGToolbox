/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
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
 **     class BulletConeShape!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &BulletConeShapeBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 BulletConeShapeBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 BulletConeShapeBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the BulletConeShape::_sfRadius field.
inline
Real32 BulletConeShapeBase::getRadius(void) const
{
    return _sfRadius.getValue();
}

//! Set the value of the BulletConeShape::_sfRadius field.
inline
void BulletConeShapeBase::setRadius(const Real32 value)
{
    editSField(RadiusFieldMask);

    _sfRadius.setValue(value);
}
//! Get the value of the BulletConeShape::_sfHeight field.
inline
Real32 BulletConeShapeBase::getHeight(void) const
{
    return _sfHeight.getValue();
}

//! Set the value of the BulletConeShape::_sfHeight field.
inline
void BulletConeShapeBase::setHeight(const Real32 value)
{
    editSField(HeightFieldMask);

    _sfHeight.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void BulletConeShapeBase::execSync (      BulletConeShapeBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (RadiusFieldMask & whichField))
        _sfRadius.syncWith(pFrom->_sfRadius);

    if(FieldBits::NoField != (HeightFieldMask & whichField))
        _sfHeight.syncWith(pFrom->_sfHeight);
}
#endif


inline
const Char8 *BulletConeShapeBase::getClassname(void)
{
    return "BulletConeShape";
}
OSG_GEN_CONTAINERPTR(BulletConeShape);

OSG_END_NAMESPACE

