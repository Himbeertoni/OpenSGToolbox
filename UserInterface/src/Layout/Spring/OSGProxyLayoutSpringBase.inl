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
 **     class ProxyLayoutSpring!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ProxyLayoutSpringBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ProxyLayoutSpringBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ProxyLayoutSpringPtr ProxyLayoutSpringBase::create(void) 
{
    ProxyLayoutSpringPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ProxyLayoutSpringPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ProxyLayoutSpringPtr ProxyLayoutSpringBase::createEmpty(void) 
{ 
    ProxyLayoutSpringPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ProxyLayoutSpring::_sfEdge field.
inline
SFUInt32 *ProxyLayoutSpringBase::getSFEdge(void)
{
    return &_sfEdge;
}

//! Get the ProxyLayoutSpring::_sfComponent field.
inline
SFComponentPtr *ProxyLayoutSpringBase::getSFComponent(void)
{
    return &_sfComponent;
}

//! Get the ProxyLayoutSpring::_sfLayout field.
inline
SFSpringLayoutPtr *ProxyLayoutSpringBase::getSFLayout(void)
{
    return &_sfLayout;
}


//! Get the value of the ProxyLayoutSpring::_sfEdge field.
inline
UInt32 &ProxyLayoutSpringBase::getEdge(void)
{
    return _sfEdge.getValue();
}

//! Get the value of the ProxyLayoutSpring::_sfEdge field.
inline
const UInt32 &ProxyLayoutSpringBase::getEdge(void) const
{
    return _sfEdge.getValue();
}

//! Set the value of the ProxyLayoutSpring::_sfEdge field.
inline
void ProxyLayoutSpringBase::setEdge(const UInt32 &value)
{
    _sfEdge.setValue(value);
}

//! Get the value of the ProxyLayoutSpring::_sfComponent field.
inline
ComponentPtr &ProxyLayoutSpringBase::getComponent(void)
{
    return _sfComponent.getValue();
}

//! Get the value of the ProxyLayoutSpring::_sfComponent field.
inline
const ComponentPtr &ProxyLayoutSpringBase::getComponent(void) const
{
    return _sfComponent.getValue();
}

//! Set the value of the ProxyLayoutSpring::_sfComponent field.
inline
void ProxyLayoutSpringBase::setComponent(const ComponentPtr &value)
{
    _sfComponent.setValue(value);
}

//! Get the value of the ProxyLayoutSpring::_sfLayout field.
inline
SpringLayoutPtr &ProxyLayoutSpringBase::getLayout(void)
{
    return _sfLayout.getValue();
}

//! Get the value of the ProxyLayoutSpring::_sfLayout field.
inline
const SpringLayoutPtr &ProxyLayoutSpringBase::getLayout(void) const
{
    return _sfLayout.getValue();
}

//! Set the value of the ProxyLayoutSpring::_sfLayout field.
inline
void ProxyLayoutSpringBase::setLayout(const SpringLayoutPtr &value)
{
    _sfLayout.setValue(value);
}


OSG_END_NAMESPACE

#define OSGPROXYLAYOUTSPRINGBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

