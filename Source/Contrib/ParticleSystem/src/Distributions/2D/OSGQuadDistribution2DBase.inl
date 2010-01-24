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
 **     class QuadDistribution2D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &QuadDistribution2DBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 QuadDistribution2DBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 QuadDistribution2DBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the QuadDistribution2D::_sfPoint1 field.

inline
Pnt2f &QuadDistribution2DBase::editPoint1(void)
{
    editSField(Point1FieldMask);

    return _sfPoint1.getValue();
}

//! Get the value of the QuadDistribution2D::_sfPoint1 field.
inline
const Pnt2f &QuadDistribution2DBase::getPoint1(void) const
{
    return _sfPoint1.getValue();
}

//! Set the value of the QuadDistribution2D::_sfPoint1 field.
inline
void QuadDistribution2DBase::setPoint1(const Pnt2f &value)
{
    editSField(Point1FieldMask);

    _sfPoint1.setValue(value);
}
//! Get the value of the QuadDistribution2D::_sfPoint2 field.

inline
Pnt2f &QuadDistribution2DBase::editPoint2(void)
{
    editSField(Point2FieldMask);

    return _sfPoint2.getValue();
}

//! Get the value of the QuadDistribution2D::_sfPoint2 field.
inline
const Pnt2f &QuadDistribution2DBase::getPoint2(void) const
{
    return _sfPoint2.getValue();
}

//! Set the value of the QuadDistribution2D::_sfPoint2 field.
inline
void QuadDistribution2DBase::setPoint2(const Pnt2f &value)
{
    editSField(Point2FieldMask);

    _sfPoint2.setValue(value);
}
//! Get the value of the QuadDistribution2D::_sfPoint3 field.

inline
Pnt2f &QuadDistribution2DBase::editPoint3(void)
{
    editSField(Point3FieldMask);

    return _sfPoint3.getValue();
}

//! Get the value of the QuadDistribution2D::_sfPoint3 field.
inline
const Pnt2f &QuadDistribution2DBase::getPoint3(void) const
{
    return _sfPoint3.getValue();
}

//! Set the value of the QuadDistribution2D::_sfPoint3 field.
inline
void QuadDistribution2DBase::setPoint3(const Pnt2f &value)
{
    editSField(Point3FieldMask);

    _sfPoint3.setValue(value);
}
//! Get the value of the QuadDistribution2D::_sfPoint4 field.

inline
Pnt2f &QuadDistribution2DBase::editPoint4(void)
{
    editSField(Point4FieldMask);

    return _sfPoint4.getValue();
}

//! Get the value of the QuadDistribution2D::_sfPoint4 field.
inline
const Pnt2f &QuadDistribution2DBase::getPoint4(void) const
{
    return _sfPoint4.getValue();
}

//! Set the value of the QuadDistribution2D::_sfPoint4 field.
inline
void QuadDistribution2DBase::setPoint4(const Pnt2f &value)
{
    editSField(Point4FieldMask);

    _sfPoint4.setValue(value);
}
//! Get the value of the QuadDistribution2D::_sfSurfaceOrEdge field.

inline
UInt32 &QuadDistribution2DBase::editSurfaceOrEdge(void)
{
    editSField(SurfaceOrEdgeFieldMask);

    return _sfSurfaceOrEdge.getValue();
}

//! Get the value of the QuadDistribution2D::_sfSurfaceOrEdge field.
inline
      UInt32  QuadDistribution2DBase::getSurfaceOrEdge(void) const
{
    return _sfSurfaceOrEdge.getValue();
}

//! Set the value of the QuadDistribution2D::_sfSurfaceOrEdge field.
inline
void QuadDistribution2DBase::setSurfaceOrEdge(const UInt32 value)
{
    editSField(SurfaceOrEdgeFieldMask);

    _sfSurfaceOrEdge.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void QuadDistribution2DBase::execSync (      QuadDistribution2DBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (Point1FieldMask & whichField))
        _sfPoint1.syncWith(pFrom->_sfPoint1);

    if(FieldBits::NoField != (Point2FieldMask & whichField))
        _sfPoint2.syncWith(pFrom->_sfPoint2);

    if(FieldBits::NoField != (Point3FieldMask & whichField))
        _sfPoint3.syncWith(pFrom->_sfPoint3);

    if(FieldBits::NoField != (Point4FieldMask & whichField))
        _sfPoint4.syncWith(pFrom->_sfPoint4);

    if(FieldBits::NoField != (SurfaceOrEdgeFieldMask & whichField))
        _sfSurfaceOrEdge.syncWith(pFrom->_sfSurfaceOrEdge);
}
#endif


inline
const Char8 *QuadDistribution2DBase::getClassname(void)
{
    return "QuadDistribution2D";
}


OSG_GEN_CONTAINERPTR(QuadDistribution2D);

OSG_END_NAMESPACE

