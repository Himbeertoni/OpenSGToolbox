/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
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
 **     class NegativeLayoutSpring!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &NegativeLayoutSpringBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 NegativeLayoutSpringBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
NegativeLayoutSpringPtr NegativeLayoutSpringBase::create(void) 
{
    NegativeLayoutSpringPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = NegativeLayoutSpringPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
NegativeLayoutSpringPtr NegativeLayoutSpringBase::createEmpty(void) 
{ 
    NegativeLayoutSpringPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the NegativeLayoutSpring::_sfSpring field.
inline
SFLayoutSpringPtr *NegativeLayoutSpringBase::getSFSpring(void)
{
    return &_sfSpring;
}


//! Get the value of the NegativeLayoutSpring::_sfSpring field.
inline
LayoutSpringPtr &NegativeLayoutSpringBase::getSpring(void)
{
    return _sfSpring.getValue();
}

//! Get the value of the NegativeLayoutSpring::_sfSpring field.
inline
const LayoutSpringPtr &NegativeLayoutSpringBase::getSpring(void) const
{
    return _sfSpring.getValue();
}

//! Set the value of the NegativeLayoutSpring::_sfSpring field.
inline
void NegativeLayoutSpringBase::setSpring(const LayoutSpringPtr &value)
{
    _sfSpring.setValue(value);
}


OSG_END_NAMESPACE

#define OSGNEGATIVELAYOUTSPRINGBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

