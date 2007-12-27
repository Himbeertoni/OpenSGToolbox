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
 **     class SpringLayout!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESPRINGLAYOUTINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGSpringLayoutBase.h"
#include "OSGSpringLayout.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  SpringLayoutBase::ConstraintsFieldMask = 
    (TypeTraits<BitVector>::One << SpringLayoutBase::ConstraintsFieldId);

const OSG::BitVector SpringLayoutBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var SpringLayoutConstraintsPtr SpringLayoutBase::_mfConstraints
    
*/

//! SpringLayout description

FieldDescription *SpringLayoutBase::_desc[] = 
{
    new FieldDescription(MFSpringLayoutConstraintsPtr::getClassType(), 
                     "Constraints", 
                     ConstraintsFieldId, ConstraintsFieldMask,
                     false,
                     (FieldAccessMethod) &SpringLayoutBase::getMFConstraints)
};


FieldContainerType SpringLayoutBase::_type(
    "SpringLayout",
    "Layout",
    NULL,
    (PrototypeCreateF) &SpringLayoutBase::createEmpty,
    SpringLayout::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(SpringLayoutBase, SpringLayoutPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &SpringLayoutBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &SpringLayoutBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr SpringLayoutBase::shallowCopy(void) const 
{ 
    SpringLayoutPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const SpringLayout *>(this)); 

    return returnValue; 
}

UInt32 SpringLayoutBase::getContainerSize(void) const 
{ 
    return sizeof(SpringLayout); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void SpringLayoutBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((SpringLayoutBase *) &other, whichField);
}
#else
void SpringLayoutBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((SpringLayoutBase *) &other, whichField, sInfo);
}
void SpringLayoutBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void SpringLayoutBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfConstraints.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

SpringLayoutBase::SpringLayoutBase(void) :
    _mfConstraints            (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

SpringLayoutBase::SpringLayoutBase(const SpringLayoutBase &source) :
    _mfConstraints            (source._mfConstraints            ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

SpringLayoutBase::~SpringLayoutBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 SpringLayoutBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ConstraintsFieldMask & whichField))
    {
        returnValue += _mfConstraints.getBinSize();
    }


    return returnValue;
}

void SpringLayoutBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ConstraintsFieldMask & whichField))
    {
        _mfConstraints.copyToBin(pMem);
    }


}

void SpringLayoutBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ConstraintsFieldMask & whichField))
    {
        _mfConstraints.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SpringLayoutBase::executeSyncImpl(      SpringLayoutBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ConstraintsFieldMask & whichField))
        _mfConstraints.syncWith(pOther->_mfConstraints);


}
#else
void SpringLayoutBase::executeSyncImpl(      SpringLayoutBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);


    if(FieldBits::NoField != (ConstraintsFieldMask & whichField))
        _mfConstraints.syncWith(pOther->_mfConstraints, sInfo);


}

void SpringLayoutBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ConstraintsFieldMask & whichField))
        _mfConstraints.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<SpringLayoutPtr>::_type("SpringLayoutPtr", "LayoutPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(SpringLayoutPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(SpringLayoutPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGSPRINGLAYOUTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSPRINGLAYOUTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSPRINGLAYOUTFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

