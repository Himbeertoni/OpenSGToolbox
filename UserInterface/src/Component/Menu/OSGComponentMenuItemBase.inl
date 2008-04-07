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
 **     class ComponentMenuItem!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ComponentMenuItemBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ComponentMenuItemBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ComponentMenuItemPtr ComponentMenuItemBase::create(void) 
{
    ComponentMenuItemPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ComponentMenuItemPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ComponentMenuItemPtr ComponentMenuItemBase::createEmpty(void) 
{ 
    ComponentMenuItemPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ComponentMenuItem::_sfComponent field.
inline
SFComponentPtr *ComponentMenuItemBase::getSFComponent(void)
{
    return &_sfComponent;
}

//! Get the ComponentMenuItem::_sfFont field.
inline
SFUIFontPtr *ComponentMenuItemBase::getSFFont(void)
{
    return &_sfFont;
}

//! Get the ComponentMenuItem::_sfAcceleratorModifiers field.
inline
SFUInt32 *ComponentMenuItemBase::getSFAcceleratorModifiers(void)
{
    return &_sfAcceleratorModifiers;
}

//! Get the ComponentMenuItem::_sfAcceleratorKey field.
inline
SFUInt32 *ComponentMenuItemBase::getSFAcceleratorKey(void)
{
    return &_sfAcceleratorKey;
}

//! Get the ComponentMenuItem::_sfSelectedBorder field.
inline
SFBorderPtr *ComponentMenuItemBase::getSFSelectedBorder(void)
{
    return &_sfSelectedBorder;
}

//! Get the ComponentMenuItem::_sfSelectedBackground field.
inline
SFUIBackgroundPtr *ComponentMenuItemBase::getSFSelectedBackground(void)
{
    return &_sfSelectedBackground;
}

//! Get the ComponentMenuItem::_sfAcceleratorText field.
inline
SFString *ComponentMenuItemBase::getSFAcceleratorText(void)
{
    return &_sfAcceleratorText;
}


//! Get the value of the ComponentMenuItem::_sfComponent field.
inline
ComponentPtr &ComponentMenuItemBase::getComponent(void)
{
    return _sfComponent.getValue();
}

//! Get the value of the ComponentMenuItem::_sfComponent field.
inline
const ComponentPtr &ComponentMenuItemBase::getComponent(void) const
{
    return _sfComponent.getValue();
}

//! Set the value of the ComponentMenuItem::_sfComponent field.
inline
void ComponentMenuItemBase::setComponent(const ComponentPtr &value)
{
    _sfComponent.setValue(value);
}

//! Get the value of the ComponentMenuItem::_sfFont field.
inline
UIFontPtr &ComponentMenuItemBase::getFont(void)
{
    return _sfFont.getValue();
}

//! Get the value of the ComponentMenuItem::_sfFont field.
inline
const UIFontPtr &ComponentMenuItemBase::getFont(void) const
{
    return _sfFont.getValue();
}

//! Set the value of the ComponentMenuItem::_sfFont field.
inline
void ComponentMenuItemBase::setFont(const UIFontPtr &value)
{
    _sfFont.setValue(value);
}

//! Get the value of the ComponentMenuItem::_sfAcceleratorModifiers field.
inline
UInt32 &ComponentMenuItemBase::getAcceleratorModifiers(void)
{
    return _sfAcceleratorModifiers.getValue();
}

//! Get the value of the ComponentMenuItem::_sfAcceleratorModifiers field.
inline
const UInt32 &ComponentMenuItemBase::getAcceleratorModifiers(void) const
{
    return _sfAcceleratorModifiers.getValue();
}

//! Set the value of the ComponentMenuItem::_sfAcceleratorModifiers field.
inline
void ComponentMenuItemBase::setAcceleratorModifiers(const UInt32 &value)
{
    _sfAcceleratorModifiers.setValue(value);
}

//! Get the value of the ComponentMenuItem::_sfAcceleratorKey field.
inline
UInt32 &ComponentMenuItemBase::getAcceleratorKey(void)
{
    return _sfAcceleratorKey.getValue();
}

//! Get the value of the ComponentMenuItem::_sfAcceleratorKey field.
inline
const UInt32 &ComponentMenuItemBase::getAcceleratorKey(void) const
{
    return _sfAcceleratorKey.getValue();
}

//! Set the value of the ComponentMenuItem::_sfAcceleratorKey field.
inline
void ComponentMenuItemBase::setAcceleratorKey(const UInt32 &value)
{
    _sfAcceleratorKey.setValue(value);
}

//! Get the value of the ComponentMenuItem::_sfSelectedBorder field.
inline
BorderPtr &ComponentMenuItemBase::getSelectedBorder(void)
{
    return _sfSelectedBorder.getValue();
}

//! Get the value of the ComponentMenuItem::_sfSelectedBorder field.
inline
const BorderPtr &ComponentMenuItemBase::getSelectedBorder(void) const
{
    return _sfSelectedBorder.getValue();
}

//! Set the value of the ComponentMenuItem::_sfSelectedBorder field.
inline
void ComponentMenuItemBase::setSelectedBorder(const BorderPtr &value)
{
    _sfSelectedBorder.setValue(value);
}

//! Get the value of the ComponentMenuItem::_sfSelectedBackground field.
inline
UIBackgroundPtr &ComponentMenuItemBase::getSelectedBackground(void)
{
    return _sfSelectedBackground.getValue();
}

//! Get the value of the ComponentMenuItem::_sfSelectedBackground field.
inline
const UIBackgroundPtr &ComponentMenuItemBase::getSelectedBackground(void) const
{
    return _sfSelectedBackground.getValue();
}

//! Set the value of the ComponentMenuItem::_sfSelectedBackground field.
inline
void ComponentMenuItemBase::setSelectedBackground(const UIBackgroundPtr &value)
{
    _sfSelectedBackground.setValue(value);
}

//! Get the value of the ComponentMenuItem::_sfAcceleratorText field.
inline
std::string &ComponentMenuItemBase::getAcceleratorText(void)
{
    return _sfAcceleratorText.getValue();
}

//! Get the value of the ComponentMenuItem::_sfAcceleratorText field.
inline
const std::string &ComponentMenuItemBase::getAcceleratorText(void) const
{
    return _sfAcceleratorText.getValue();
}

//! Set the value of the ComponentMenuItem::_sfAcceleratorText field.
inline
void ComponentMenuItemBase::setAcceleratorText(const std::string &value)
{
    _sfAcceleratorText.setValue(value);
}


OSG_END_NAMESPACE

#define OSGCOMPONENTMENUITEMBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

