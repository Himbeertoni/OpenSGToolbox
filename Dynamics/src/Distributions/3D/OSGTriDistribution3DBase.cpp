/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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
 **     class TriDistribution3D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETRIDISTRIBUTION3DINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGTriDistribution3DBase.h"
#include "OSGTriDistribution3D.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  TriDistribution3DBase::Point1FieldMask = 
    (TypeTraits<BitVector>::One << TriDistribution3DBase::Point1FieldId);

const OSG::BitVector  TriDistribution3DBase::Point2FieldMask = 
    (TypeTraits<BitVector>::One << TriDistribution3DBase::Point2FieldId);

const OSG::BitVector  TriDistribution3DBase::Point3FieldMask = 
    (TypeTraits<BitVector>::One << TriDistribution3DBase::Point3FieldId);

const OSG::BitVector  TriDistribution3DBase::SurfaceOrEdgeFieldMask = 
    (TypeTraits<BitVector>::One << TriDistribution3DBase::SurfaceOrEdgeFieldId);

const OSG::BitVector TriDistribution3DBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Pnt3f           TriDistribution3DBase::_sfPoint1
    
*/
/*! \var Pnt3f           TriDistribution3DBase::_sfPoint2
    
*/
/*! \var Pnt3f           TriDistribution3DBase::_sfPoint3
    
*/
/*! \var UInt32          TriDistribution3DBase::_sfSurfaceOrEdge
    
*/

//! TriDistribution3D description

FieldDescription *TriDistribution3DBase::_desc[] = 
{
    new FieldDescription(SFPnt3f::getClassType(), 
                     "Point1", 
                     Point1FieldId, Point1FieldMask,
                     false,
                     (FieldAccessMethod) &TriDistribution3DBase::getSFPoint1),
    new FieldDescription(SFPnt3f::getClassType(), 
                     "Point2", 
                     Point2FieldId, Point2FieldMask,
                     false,
                     (FieldAccessMethod) &TriDistribution3DBase::getSFPoint2),
    new FieldDescription(SFPnt3f::getClassType(), 
                     "Point3", 
                     Point3FieldId, Point3FieldMask,
                     false,
                     (FieldAccessMethod) &TriDistribution3DBase::getSFPoint3),
    new FieldDescription(SFUInt32::getClassType(), 
                     "SurfaceOrEdge", 
                     SurfaceOrEdgeFieldId, SurfaceOrEdgeFieldMask,
                     false,
                     (FieldAccessMethod) &TriDistribution3DBase::getSFSurfaceOrEdge)
};


FieldContainerType TriDistribution3DBase::_type(
    "TriDistribution3D",
    "Function",
    NULL,
    (PrototypeCreateF) &TriDistribution3DBase::createEmpty,
    TriDistribution3D::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(TriDistribution3DBase, TriDistribution3DPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &TriDistribution3DBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &TriDistribution3DBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr TriDistribution3DBase::shallowCopy(void) const 
{ 
    TriDistribution3DPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const TriDistribution3D *>(this)); 

    return returnValue; 
}

UInt32 TriDistribution3DBase::getContainerSize(void) const 
{ 
    return sizeof(TriDistribution3D); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void TriDistribution3DBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((TriDistribution3DBase *) &other, whichField);
}
#else
void TriDistribution3DBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((TriDistribution3DBase *) &other, whichField, sInfo);
}
void TriDistribution3DBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void TriDistribution3DBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

TriDistribution3DBase::TriDistribution3DBase(void) :
    _sfPoint1                 (Pnt3f(0.0,0.0,0.0)), 
    _sfPoint2                 (Pnt3f(1.0,0.0,0.0)), 
    _sfPoint3                 (Pnt3f(0.0,1.0,0.0)), 
    _sfSurfaceOrEdge          (UInt32(TriDistribution3D::SURFACE)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

TriDistribution3DBase::TriDistribution3DBase(const TriDistribution3DBase &source) :
    _sfPoint1                 (source._sfPoint1                 ), 
    _sfPoint2                 (source._sfPoint2                 ), 
    _sfPoint3                 (source._sfPoint3                 ), 
    _sfSurfaceOrEdge          (source._sfSurfaceOrEdge          ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

TriDistribution3DBase::~TriDistribution3DBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 TriDistribution3DBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (Point1FieldMask & whichField))
    {
        returnValue += _sfPoint1.getBinSize();
    }

    if(FieldBits::NoField != (Point2FieldMask & whichField))
    {
        returnValue += _sfPoint2.getBinSize();
    }

    if(FieldBits::NoField != (Point3FieldMask & whichField))
    {
        returnValue += _sfPoint3.getBinSize();
    }

    if(FieldBits::NoField != (SurfaceOrEdgeFieldMask & whichField))
    {
        returnValue += _sfSurfaceOrEdge.getBinSize();
    }


    return returnValue;
}

void TriDistribution3DBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (Point1FieldMask & whichField))
    {
        _sfPoint1.copyToBin(pMem);
    }

    if(FieldBits::NoField != (Point2FieldMask & whichField))
    {
        _sfPoint2.copyToBin(pMem);
    }

    if(FieldBits::NoField != (Point3FieldMask & whichField))
    {
        _sfPoint3.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SurfaceOrEdgeFieldMask & whichField))
    {
        _sfSurfaceOrEdge.copyToBin(pMem);
    }


}

void TriDistribution3DBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (Point1FieldMask & whichField))
    {
        _sfPoint1.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (Point2FieldMask & whichField))
    {
        _sfPoint2.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (Point3FieldMask & whichField))
    {
        _sfPoint3.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SurfaceOrEdgeFieldMask & whichField))
    {
        _sfSurfaceOrEdge.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void TriDistribution3DBase::executeSyncImpl(      TriDistribution3DBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (Point1FieldMask & whichField))
        _sfPoint1.syncWith(pOther->_sfPoint1);

    if(FieldBits::NoField != (Point2FieldMask & whichField))
        _sfPoint2.syncWith(pOther->_sfPoint2);

    if(FieldBits::NoField != (Point3FieldMask & whichField))
        _sfPoint3.syncWith(pOther->_sfPoint3);

    if(FieldBits::NoField != (SurfaceOrEdgeFieldMask & whichField))
        _sfSurfaceOrEdge.syncWith(pOther->_sfSurfaceOrEdge);


}
#else
void TriDistribution3DBase::executeSyncImpl(      TriDistribution3DBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (Point1FieldMask & whichField))
        _sfPoint1.syncWith(pOther->_sfPoint1);

    if(FieldBits::NoField != (Point2FieldMask & whichField))
        _sfPoint2.syncWith(pOther->_sfPoint2);

    if(FieldBits::NoField != (Point3FieldMask & whichField))
        _sfPoint3.syncWith(pOther->_sfPoint3);

    if(FieldBits::NoField != (SurfaceOrEdgeFieldMask & whichField))
        _sfSurfaceOrEdge.syncWith(pOther->_sfSurfaceOrEdge);



}

void TriDistribution3DBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<TriDistribution3DPtr>::_type("TriDistribution3DPtr", "FunctionPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(TriDistribution3DPtr, OSG_DYNAMICSLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(TriDistribution3DPtr, OSG_DYNAMICSLIB_DLLTMPLMAPPING);


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.47 2006/03/17 17:03:19 pdaehne Exp $";
    static Char8 cvsid_hpp       [] = OSGTRIDISTRIBUTION3DBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGTRIDISTRIBUTION3DBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGTRIDISTRIBUTION3DFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

