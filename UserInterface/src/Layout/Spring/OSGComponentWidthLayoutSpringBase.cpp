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
 **     class ComponentWidthLayoutSpring!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECOMPONENTWIDTHLAYOUTSPRINGINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGComponentWidthLayoutSpringBase.h"
#include "OSGComponentWidthLayoutSpring.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  ComponentWidthLayoutSpringBase::ComponentFieldMask = 
    (TypeTraits<BitVector>::One << ComponentWidthLayoutSpringBase::ComponentFieldId);

const OSG::BitVector ComponentWidthLayoutSpringBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var ComponentPtr    ComponentWidthLayoutSpringBase::_sfComponent
    
*/

//! ComponentWidthLayoutSpring description

FieldDescription *ComponentWidthLayoutSpringBase::_desc[] = 
{
    new FieldDescription(SFComponentPtr::getClassType(), 
                     "Component", 
                     ComponentFieldId, ComponentFieldMask,
                     false,
                     (FieldAccessMethod) &ComponentWidthLayoutSpringBase::getSFComponent)
};


FieldContainerType ComponentWidthLayoutSpringBase::_type(
    "ComponentWidthLayoutSpring",
    "AbstractLayoutSpring",
    NULL,
    (PrototypeCreateF) &ComponentWidthLayoutSpringBase::createEmpty,
    ComponentWidthLayoutSpring::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(ComponentWidthLayoutSpringBase, ComponentWidthLayoutSpringPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &ComponentWidthLayoutSpringBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ComponentWidthLayoutSpringBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr ComponentWidthLayoutSpringBase::shallowCopy(void) const 
{ 
    ComponentWidthLayoutSpringPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const ComponentWidthLayoutSpring *>(this)); 

    return returnValue; 
}

UInt32 ComponentWidthLayoutSpringBase::getContainerSize(void) const 
{ 
    return sizeof(ComponentWidthLayoutSpring); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void ComponentWidthLayoutSpringBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((ComponentWidthLayoutSpringBase *) &other, whichField);
}
#else
void ComponentWidthLayoutSpringBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((ComponentWidthLayoutSpringBase *) &other, whichField, sInfo);
}
void ComponentWidthLayoutSpringBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ComponentWidthLayoutSpringBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

ComponentWidthLayoutSpringBase::ComponentWidthLayoutSpringBase(void) :
    _sfComponent              (ComponentPtr(NullFC)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

ComponentWidthLayoutSpringBase::ComponentWidthLayoutSpringBase(const ComponentWidthLayoutSpringBase &source) :
    _sfComponent              (source._sfComponent              ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

ComponentWidthLayoutSpringBase::~ComponentWidthLayoutSpringBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 ComponentWidthLayoutSpringBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ComponentFieldMask & whichField))
    {
        returnValue += _sfComponent.getBinSize();
    }


    return returnValue;
}

void ComponentWidthLayoutSpringBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ComponentFieldMask & whichField))
    {
        _sfComponent.copyToBin(pMem);
    }


}

void ComponentWidthLayoutSpringBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ComponentFieldMask & whichField))
    {
        _sfComponent.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ComponentWidthLayoutSpringBase::executeSyncImpl(      ComponentWidthLayoutSpringBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ComponentFieldMask & whichField))
        _sfComponent.syncWith(pOther->_sfComponent);


}
#else
void ComponentWidthLayoutSpringBase::executeSyncImpl(      ComponentWidthLayoutSpringBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ComponentFieldMask & whichField))
        _sfComponent.syncWith(pOther->_sfComponent);



}

void ComponentWidthLayoutSpringBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<ComponentWidthLayoutSpringPtr>::_type("ComponentWidthLayoutSpringPtr", "AbstractLayoutSpringPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ComponentWidthLayoutSpringPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(ComponentWidthLayoutSpringPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGCOMPONENTWIDTHLAYOUTSPRINGBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGCOMPONENTWIDTHLAYOUTSPRINGBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGCOMPONENTWIDTHLAYOUTSPRINGFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

