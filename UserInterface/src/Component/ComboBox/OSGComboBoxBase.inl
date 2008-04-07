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
 **     class ComboBox!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ComboBoxBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ComboBoxBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ComboBoxPtr ComboBoxBase::create(void) 
{
    ComboBoxPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ComboBoxPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ComboBoxPtr ComboBoxBase::createEmpty(void) 
{ 
    ComboBoxPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ComboBox::_sfExpandButton field.
inline
SFToggleButtonPtr *ComboBoxBase::getSFExpandButton(void)
{
    return &_sfExpandButton;
}

//! Get the ComboBox::_sfEditor field.
inline
SFComboBoxEditorPtr *ComboBoxBase::getSFEditor(void)
{
    return &_sfEditor;
}

//! Get the ComboBox::_sfModel field.
inline
SFComboBoxModelPtr *ComboBoxBase::getSFModel(void)
{
    return &_sfModel;
}

//! Get the ComboBox::_sfCellGenerator field.
inline
SFComponentGeneratorPtr *ComboBoxBase::getSFCellGenerator(void)
{
    return &_sfCellGenerator;
}

//! Get the ComboBox::_sfComponentGeneratorSelectedItem field.
inline
SFComponentPtr *ComboBoxBase::getSFComponentGeneratorSelectedItem(void)
{
    return &_sfComponentGeneratorSelectedItem;
}

//! Get the ComboBox::_sfEditable field.
inline
SFBool *ComboBoxBase::getSFEditable(void)
{
    return &_sfEditable;
}

//! Get the ComboBox::_sfMaxRowCount field.
inline
SFUInt32 *ComboBoxBase::getSFMaxRowCount(void)
{
    return &_sfMaxRowCount;
}

//! Get the ComboBox::_sfComboListPopupMenu field.
inline
SFListGeneratedPopupMenuPtr *ComboBoxBase::getSFComboListPopupMenu(void)
{
    return &_sfComboListPopupMenu;
}


//! Get the value of the ComboBox::_sfExpandButton field.
inline
ToggleButtonPtr &ComboBoxBase::getExpandButton(void)
{
    return _sfExpandButton.getValue();
}

//! Get the value of the ComboBox::_sfExpandButton field.
inline
const ToggleButtonPtr &ComboBoxBase::getExpandButton(void) const
{
    return _sfExpandButton.getValue();
}

//! Set the value of the ComboBox::_sfExpandButton field.
inline
void ComboBoxBase::setExpandButton(const ToggleButtonPtr &value)
{
    _sfExpandButton.setValue(value);
}

//! Get the value of the ComboBox::_sfEditor field.
inline
ComboBoxEditorPtr &ComboBoxBase::getEditor(void)
{
    return _sfEditor.getValue();
}

//! Get the value of the ComboBox::_sfEditor field.
inline
const ComboBoxEditorPtr &ComboBoxBase::getEditor(void) const
{
    return _sfEditor.getValue();
}

//! Set the value of the ComboBox::_sfEditor field.
inline
void ComboBoxBase::setEditor(const ComboBoxEditorPtr &value)
{
    _sfEditor.setValue(value);
}

//! Get the value of the ComboBox::_sfModel field.
inline
ComboBoxModelPtr &ComboBoxBase::getModel(void)
{
    return _sfModel.getValue();
}

//! Get the value of the ComboBox::_sfModel field.
inline
const ComboBoxModelPtr &ComboBoxBase::getModel(void) const
{
    return _sfModel.getValue();
}

//! Set the value of the ComboBox::_sfModel field.
inline
void ComboBoxBase::setModel(const ComboBoxModelPtr &value)
{
    _sfModel.setValue(value);
}

//! Get the value of the ComboBox::_sfCellGenerator field.
inline
ComponentGeneratorPtr &ComboBoxBase::getCellGenerator(void)
{
    return _sfCellGenerator.getValue();
}

//! Get the value of the ComboBox::_sfCellGenerator field.
inline
const ComponentGeneratorPtr &ComboBoxBase::getCellGenerator(void) const
{
    return _sfCellGenerator.getValue();
}

//! Set the value of the ComboBox::_sfCellGenerator field.
inline
void ComboBoxBase::setCellGenerator(const ComponentGeneratorPtr &value)
{
    _sfCellGenerator.setValue(value);
}

//! Get the value of the ComboBox::_sfComponentGeneratorSelectedItem field.
inline
ComponentPtr &ComboBoxBase::getComponentGeneratorSelectedItem(void)
{
    return _sfComponentGeneratorSelectedItem.getValue();
}

//! Get the value of the ComboBox::_sfComponentGeneratorSelectedItem field.
inline
const ComponentPtr &ComboBoxBase::getComponentGeneratorSelectedItem(void) const
{
    return _sfComponentGeneratorSelectedItem.getValue();
}

//! Set the value of the ComboBox::_sfComponentGeneratorSelectedItem field.
inline
void ComboBoxBase::setComponentGeneratorSelectedItem(const ComponentPtr &value)
{
    _sfComponentGeneratorSelectedItem.setValue(value);
}

//! Get the value of the ComboBox::_sfEditable field.
inline
bool &ComboBoxBase::getEditable(void)
{
    return _sfEditable.getValue();
}

//! Get the value of the ComboBox::_sfEditable field.
inline
const bool &ComboBoxBase::getEditable(void) const
{
    return _sfEditable.getValue();
}

//! Set the value of the ComboBox::_sfEditable field.
inline
void ComboBoxBase::setEditable(const bool &value)
{
    _sfEditable.setValue(value);
}

//! Get the value of the ComboBox::_sfMaxRowCount field.
inline
UInt32 &ComboBoxBase::getMaxRowCount(void)
{
    return _sfMaxRowCount.getValue();
}

//! Get the value of the ComboBox::_sfMaxRowCount field.
inline
const UInt32 &ComboBoxBase::getMaxRowCount(void) const
{
    return _sfMaxRowCount.getValue();
}

//! Set the value of the ComboBox::_sfMaxRowCount field.
inline
void ComboBoxBase::setMaxRowCount(const UInt32 &value)
{
    _sfMaxRowCount.setValue(value);
}

//! Get the value of the ComboBox::_sfComboListPopupMenu field.
inline
ListGeneratedPopupMenuPtr &ComboBoxBase::getComboListPopupMenu(void)
{
    return _sfComboListPopupMenu.getValue();
}

//! Get the value of the ComboBox::_sfComboListPopupMenu field.
inline
const ListGeneratedPopupMenuPtr &ComboBoxBase::getComboListPopupMenu(void) const
{
    return _sfComboListPopupMenu.getValue();
}

//! Set the value of the ComboBox::_sfComboListPopupMenu field.
inline
void ComboBoxBase::setComboListPopupMenu(const ListGeneratedPopupMenuPtr &value)
{
    _sfComboListPopupMenu.setValue(value);
}


OSG_END_NAMESPACE

#define OSGCOMBOBOXBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

