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
 **     class ScaleLayoutSpring!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESCALELAYOUTSPRINGINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGScaleLayoutSpringBase.h"
#include "OSGScaleLayoutSpring.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  ScaleLayoutSpringBase::SpringFieldMask = 
    (TypeTraits<BitVector>::One << ScaleLayoutSpringBase::SpringFieldId);

const OSG::BitVector  ScaleLayoutSpringBase::FactorFieldMask = 
    (TypeTraits<BitVector>::One << ScaleLayoutSpringBase::FactorFieldId);

const OSG::BitVector ScaleLayoutSpringBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var LayoutSpringPtr ScaleLayoutSpringBase::_sfSpring
    
*/
/*! \var Real32          ScaleLayoutSpringBase::_sfFactor
    
*/

//! ScaleLayoutSpring description

FieldDescription *ScaleLayoutSpringBase::_desc[] = 
{
    new FieldDescription(SFLayoutSpringPtr::getClassType(), 
                     "Spring", 
                     SpringFieldId, SpringFieldMask,
                     false,
                     (FieldAccessMethod) &ScaleLayoutSpringBase::getSFSpring),
    new FieldDescription(SFReal32::getClassType(), 
                     "Factor", 
                     FactorFieldId, FactorFieldMask,
                     false,
                     (FieldAccessMethod) &ScaleLayoutSpringBase::getSFFactor)
};


FieldContainerType ScaleLayoutSpringBase::_type(
    "ScaleLayoutSpring",
    "LayoutSpring",
    NULL,
    (PrototypeCreateF) &ScaleLayoutSpringBase::createEmpty,
    ScaleLayoutSpring::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(ScaleLayoutSpringBase, ScaleLayoutSpringPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &ScaleLayoutSpringBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ScaleLayoutSpringBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr ScaleLayoutSpringBase::shallowCopy(void) const 
{ 
    ScaleLayoutSpringPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const ScaleLayoutSpring *>(this)); 

    return returnValue; 
}

UInt32 ScaleLayoutSpringBase::getContainerSize(void) const 
{ 
    return sizeof(ScaleLayoutSpring); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void ScaleLayoutSpringBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((ScaleLayoutSpringBase *) &other, whichField);
}
#else
void ScaleLayoutSpringBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((ScaleLayoutSpringBase *) &other, whichField, sInfo);
}
void ScaleLayoutSpringBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ScaleLayoutSpringBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

ScaleLayoutSpringBase::ScaleLayoutSpringBase(void) :
    _sfSpring                 (LayoutSpringPtr(NullFC)), 
    _sfFactor                 (Real32(0.0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

ScaleLayoutSpringBase::ScaleLayoutSpringBase(const ScaleLayoutSpringBase &source) :
    _sfSpring                 (source._sfSpring                 ), 
    _sfFactor                 (source._sfFactor                 ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

ScaleLayoutSpringBase::~ScaleLayoutSpringBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 ScaleLayoutSpringBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SpringFieldMask & whichField))
    {
        returnValue += _sfSpring.getBinSize();
    }

    if(FieldBits::NoField != (FactorFieldMask & whichField))
    {
        returnValue += _sfFactor.getBinSize();
    }


    return returnValue;
}

void ScaleLayoutSpringBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SpringFieldMask & whichField))
    {
        _sfSpring.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FactorFieldMask & whichField))
    {
        _sfFactor.copyToBin(pMem);
    }


}

void ScaleLayoutSpringBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SpringFieldMask & whichField))
    {
        _sfSpring.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FactorFieldMask & whichField))
    {
        _sfFactor.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ScaleLayoutSpringBase::executeSyncImpl(      ScaleLayoutSpringBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (SpringFieldMask & whichField))
        _sfSpring.syncWith(pOther->_sfSpring);

    if(FieldBits::NoField != (FactorFieldMask & whichField))
        _sfFactor.syncWith(pOther->_sfFactor);


}
#else
void ScaleLayoutSpringBase::executeSyncImpl(      ScaleLayoutSpringBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (SpringFieldMask & whichField))
        _sfSpring.syncWith(pOther->_sfSpring);

    if(FieldBits::NoField != (FactorFieldMask & whichField))
        _sfFactor.syncWith(pOther->_sfFactor);



}

void ScaleLayoutSpringBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<ScaleLayoutSpringPtr>::_type("ScaleLayoutSpringPtr", "LayoutSpringPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ScaleLayoutSpringPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(ScaleLayoutSpringPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGSCALELAYOUTSPRINGBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSCALELAYOUTSPRINGBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSCALELAYOUTSPRINGFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

