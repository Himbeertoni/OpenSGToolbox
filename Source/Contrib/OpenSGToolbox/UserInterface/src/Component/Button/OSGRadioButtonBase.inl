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
 **     class RadioButton!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &RadioButtonBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 RadioButtonBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
RadioButtonPtr RadioButtonBase::create(void) 
{
    RadioButtonPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = RadioButtonPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
RadioButtonPtr RadioButtonBase::createEmpty(void) 
{ 
    RadioButtonPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the RadioButton::_sfRadioDrawObject field.
inline
SFUIDrawObjectCanvasPtr *RadioButtonBase::getSFRadioDrawObject(void)
{
    return &_sfRadioDrawObject;
}

//! Get the RadioButton::_sfSelectedRadioDrawObject field.
inline
SFUIDrawObjectCanvasPtr *RadioButtonBase::getSFSelectedRadioDrawObject(void)
{
    return &_sfSelectedRadioDrawObject;
}

//! Get the RadioButton::_sfActiveRadioDrawObject field.
inline
SFUIDrawObjectCanvasPtr *RadioButtonBase::getSFActiveRadioDrawObject(void)
{
    return &_sfActiveRadioDrawObject;
}

//! Get the RadioButton::_sfActiveSelectedRadioDrawObject field.
inline
SFUIDrawObjectCanvasPtr *RadioButtonBase::getSFActiveSelectedRadioDrawObject(void)
{
    return &_sfActiveSelectedRadioDrawObject;
}

//! Get the RadioButton::_sfRolloverRadioDrawObject field.
inline
SFUIDrawObjectCanvasPtr *RadioButtonBase::getSFRolloverRadioDrawObject(void)
{
    return &_sfRolloverRadioDrawObject;
}

//! Get the RadioButton::_sfRolloverSelectedRadioDrawObject field.
inline
SFUIDrawObjectCanvasPtr *RadioButtonBase::getSFRolloverSelectedRadioDrawObject(void)
{
    return &_sfRolloverSelectedRadioDrawObject;
}

//! Get the RadioButton::_sfDisabledRadioDrawObject field.
inline
SFUIDrawObjectCanvasPtr *RadioButtonBase::getSFDisabledRadioDrawObject(void)
{
    return &_sfDisabledRadioDrawObject;
}

//! Get the RadioButton::_sfDisabledSelectedRadioDrawObject field.
inline
SFUIDrawObjectCanvasPtr *RadioButtonBase::getSFDisabledSelectedRadioDrawObject(void)
{
    return &_sfDisabledSelectedRadioDrawObject;
}


//! Get the value of the RadioButton::_sfRadioDrawObject field.
inline
UIDrawObjectCanvasPtr &RadioButtonBase::getRadioDrawObject(void)
{
    return _sfRadioDrawObject.getValue();
}

//! Get the value of the RadioButton::_sfRadioDrawObject field.
inline
const UIDrawObjectCanvasPtr &RadioButtonBase::getRadioDrawObject(void) const
{
    return _sfRadioDrawObject.getValue();
}

//! Set the value of the RadioButton::_sfRadioDrawObject field.
inline
void RadioButtonBase::setRadioDrawObject(const UIDrawObjectCanvasPtr &value)
{
    _sfRadioDrawObject.setValue(value);
}

//! Get the value of the RadioButton::_sfSelectedRadioDrawObject field.
inline
UIDrawObjectCanvasPtr &RadioButtonBase::getSelectedRadioDrawObject(void)
{
    return _sfSelectedRadioDrawObject.getValue();
}

//! Get the value of the RadioButton::_sfSelectedRadioDrawObject field.
inline
const UIDrawObjectCanvasPtr &RadioButtonBase::getSelectedRadioDrawObject(void) const
{
    return _sfSelectedRadioDrawObject.getValue();
}

//! Set the value of the RadioButton::_sfSelectedRadioDrawObject field.
inline
void RadioButtonBase::setSelectedRadioDrawObject(const UIDrawObjectCanvasPtr &value)
{
    _sfSelectedRadioDrawObject.setValue(value);
}

//! Get the value of the RadioButton::_sfActiveRadioDrawObject field.
inline
UIDrawObjectCanvasPtr &RadioButtonBase::getActiveRadioDrawObject(void)
{
    return _sfActiveRadioDrawObject.getValue();
}

//! Get the value of the RadioButton::_sfActiveRadioDrawObject field.
inline
const UIDrawObjectCanvasPtr &RadioButtonBase::getActiveRadioDrawObject(void) const
{
    return _sfActiveRadioDrawObject.getValue();
}

//! Set the value of the RadioButton::_sfActiveRadioDrawObject field.
inline
void RadioButtonBase::setActiveRadioDrawObject(const UIDrawObjectCanvasPtr &value)
{
    _sfActiveRadioDrawObject.setValue(value);
}

//! Get the value of the RadioButton::_sfActiveSelectedRadioDrawObject field.
inline
UIDrawObjectCanvasPtr &RadioButtonBase::getActiveSelectedRadioDrawObject(void)
{
    return _sfActiveSelectedRadioDrawObject.getValue();
}

//! Get the value of the RadioButton::_sfActiveSelectedRadioDrawObject field.
inline
const UIDrawObjectCanvasPtr &RadioButtonBase::getActiveSelectedRadioDrawObject(void) const
{
    return _sfActiveSelectedRadioDrawObject.getValue();
}

//! Set the value of the RadioButton::_sfActiveSelectedRadioDrawObject field.
inline
void RadioButtonBase::setActiveSelectedRadioDrawObject(const UIDrawObjectCanvasPtr &value)
{
    _sfActiveSelectedRadioDrawObject.setValue(value);
}

//! Get the value of the RadioButton::_sfRolloverRadioDrawObject field.
inline
UIDrawObjectCanvasPtr &RadioButtonBase::getRolloverRadioDrawObject(void)
{
    return _sfRolloverRadioDrawObject.getValue();
}

//! Get the value of the RadioButton::_sfRolloverRadioDrawObject field.
inline
const UIDrawObjectCanvasPtr &RadioButtonBase::getRolloverRadioDrawObject(void) const
{
    return _sfRolloverRadioDrawObject.getValue();
}

//! Set the value of the RadioButton::_sfRolloverRadioDrawObject field.
inline
void RadioButtonBase::setRolloverRadioDrawObject(const UIDrawObjectCanvasPtr &value)
{
    _sfRolloverRadioDrawObject.setValue(value);
}

//! Get the value of the RadioButton::_sfRolloverSelectedRadioDrawObject field.
inline
UIDrawObjectCanvasPtr &RadioButtonBase::getRolloverSelectedRadioDrawObject(void)
{
    return _sfRolloverSelectedRadioDrawObject.getValue();
}

//! Get the value of the RadioButton::_sfRolloverSelectedRadioDrawObject field.
inline
const UIDrawObjectCanvasPtr &RadioButtonBase::getRolloverSelectedRadioDrawObject(void) const
{
    return _sfRolloverSelectedRadioDrawObject.getValue();
}

//! Set the value of the RadioButton::_sfRolloverSelectedRadioDrawObject field.
inline
void RadioButtonBase::setRolloverSelectedRadioDrawObject(const UIDrawObjectCanvasPtr &value)
{
    _sfRolloverSelectedRadioDrawObject.setValue(value);
}

//! Get the value of the RadioButton::_sfDisabledRadioDrawObject field.
inline
UIDrawObjectCanvasPtr &RadioButtonBase::getDisabledRadioDrawObject(void)
{
    return _sfDisabledRadioDrawObject.getValue();
}

//! Get the value of the RadioButton::_sfDisabledRadioDrawObject field.
inline
const UIDrawObjectCanvasPtr &RadioButtonBase::getDisabledRadioDrawObject(void) const
{
    return _sfDisabledRadioDrawObject.getValue();
}

//! Set the value of the RadioButton::_sfDisabledRadioDrawObject field.
inline
void RadioButtonBase::setDisabledRadioDrawObject(const UIDrawObjectCanvasPtr &value)
{
    _sfDisabledRadioDrawObject.setValue(value);
}

//! Get the value of the RadioButton::_sfDisabledSelectedRadioDrawObject field.
inline
UIDrawObjectCanvasPtr &RadioButtonBase::getDisabledSelectedRadioDrawObject(void)
{
    return _sfDisabledSelectedRadioDrawObject.getValue();
}

//! Get the value of the RadioButton::_sfDisabledSelectedRadioDrawObject field.
inline
const UIDrawObjectCanvasPtr &RadioButtonBase::getDisabledSelectedRadioDrawObject(void) const
{
    return _sfDisabledSelectedRadioDrawObject.getValue();
}

//! Set the value of the RadioButton::_sfDisabledSelectedRadioDrawObject field.
inline
void RadioButtonBase::setDisabledSelectedRadioDrawObject(const UIDrawObjectCanvasPtr &value)
{
    _sfDisabledSelectedRadioDrawObject.setValue(value);
}


OSG_END_NAMESPACE

#define OSGRADIOBUTTONBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
