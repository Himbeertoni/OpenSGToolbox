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
 **     class ComboBox!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECOMBOBOXINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGComboBoxBase.h"
#include "OSGComboBox.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  ComboBoxBase::ExpandButtonFieldMask = 
    (TypeTraits<BitVector>::One << ComboBoxBase::ExpandButtonFieldId);

const OSG::BitVector  ComboBoxBase::EditorFieldMask = 
    (TypeTraits<BitVector>::One << ComboBoxBase::EditorFieldId);

const OSG::BitVector  ComboBoxBase::ModelFieldMask = 
    (TypeTraits<BitVector>::One << ComboBoxBase::ModelFieldId);

const OSG::BitVector  ComboBoxBase::CellGeneratorFieldMask = 
    (TypeTraits<BitVector>::One << ComboBoxBase::CellGeneratorFieldId);

const OSG::BitVector  ComboBoxBase::ComponentGeneratorSelectedItemFieldMask = 
    (TypeTraits<BitVector>::One << ComboBoxBase::ComponentGeneratorSelectedItemFieldId);

const OSG::BitVector  ComboBoxBase::EditableFieldMask = 
    (TypeTraits<BitVector>::One << ComboBoxBase::EditableFieldId);

const OSG::BitVector  ComboBoxBase::MaxRowCountFieldMask = 
    (TypeTraits<BitVector>::One << ComboBoxBase::MaxRowCountFieldId);

const OSG::BitVector  ComboBoxBase::ComboListPopupMenuFieldMask = 
    (TypeTraits<BitVector>::One << ComboBoxBase::ComboListPopupMenuFieldId);

const OSG::BitVector ComboBoxBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var ToggleButtonPtr ComboBoxBase::_sfExpandButton
    
*/
/*! \var ComboBoxEditorPtr ComboBoxBase::_sfEditor
    
*/
/*! \var ComboBoxModelPtr ComboBoxBase::_sfModel
    
*/
/*! \var ComponentGeneratorPtr ComboBoxBase::_sfCellGenerator
    
*/
/*! \var ComponentPtr    ComboBoxBase::_sfComponentGeneratorSelectedItem
    
*/
/*! \var bool            ComboBoxBase::_sfEditable
    
*/
/*! \var UInt32          ComboBoxBase::_sfMaxRowCount
    
*/
/*! \var ListGeneratedPopupMenuPtr ComboBoxBase::_sfComboListPopupMenu
    
*/

//! ComboBox description

FieldDescription *ComboBoxBase::_desc[] = 
{
    new FieldDescription(SFToggleButtonPtr::getClassType(), 
                     "ExpandButton", 
                     ExpandButtonFieldId, ExpandButtonFieldMask,
                     false,
                     (FieldAccessMethod) &ComboBoxBase::getSFExpandButton),
    new FieldDescription(SFComboBoxEditorPtr::getClassType(), 
                     "Editor", 
                     EditorFieldId, EditorFieldMask,
                     false,
                     (FieldAccessMethod) &ComboBoxBase::getSFEditor),
    new FieldDescription(SFComboBoxModelPtr::getClassType(), 
                     "Model", 
                     ModelFieldId, ModelFieldMask,
                     false,
                     (FieldAccessMethod) &ComboBoxBase::getSFModel),
    new FieldDescription(SFComponentGeneratorPtr::getClassType(), 
                     "CellGenerator", 
                     CellGeneratorFieldId, CellGeneratorFieldMask,
                     false,
                     (FieldAccessMethod) &ComboBoxBase::getSFCellGenerator),
    new FieldDescription(SFComponentPtr::getClassType(), 
                     "ComponentGeneratorSelectedItem", 
                     ComponentGeneratorSelectedItemFieldId, ComponentGeneratorSelectedItemFieldMask,
                     false,
                     (FieldAccessMethod) &ComboBoxBase::getSFComponentGeneratorSelectedItem),
    new FieldDescription(SFBool::getClassType(), 
                     "Editable", 
                     EditableFieldId, EditableFieldMask,
                     false,
                     (FieldAccessMethod) &ComboBoxBase::getSFEditable),
    new FieldDescription(SFUInt32::getClassType(), 
                     "MaxRowCount", 
                     MaxRowCountFieldId, MaxRowCountFieldMask,
                     false,
                     (FieldAccessMethod) &ComboBoxBase::getSFMaxRowCount),
    new FieldDescription(SFListGeneratedPopupMenuPtr::getClassType(), 
                     "ComboListPopupMenu", 
                     ComboListPopupMenuFieldId, ComboListPopupMenuFieldMask,
                     false,
                     (FieldAccessMethod) &ComboBoxBase::getSFComboListPopupMenu)
};


FieldContainerType ComboBoxBase::_type(
    "ComboBox",
    "Container",
    NULL,
    (PrototypeCreateF) &ComboBoxBase::createEmpty,
    ComboBox::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(ComboBoxBase, ComboBoxPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &ComboBoxBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ComboBoxBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr ComboBoxBase::shallowCopy(void) const 
{ 
    ComboBoxPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const ComboBox *>(this)); 

    return returnValue; 
}

UInt32 ComboBoxBase::getContainerSize(void) const 
{ 
    return sizeof(ComboBox); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void ComboBoxBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((ComboBoxBase *) &other, whichField);
}
#else
void ComboBoxBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((ComboBoxBase *) &other, whichField, sInfo);
}
void ComboBoxBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ComboBoxBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

ComboBoxBase::ComboBoxBase(void) :
    _sfExpandButton           (ToggleButtonPtr(NullFC)), 
    _sfEditor                 (ComboBoxEditorPtr(NullFC)), 
    _sfModel                  (ComboBoxModelPtr(NullFC)), 
    _sfCellGenerator          (ComponentGeneratorPtr(NullFC)), 
    _sfComponentGeneratorSelectedItem(ComponentPtr(NullFC)), 
    _sfEditable               (bool(true)), 
    _sfMaxRowCount            (UInt32(5)), 
    _sfComboListPopupMenu     (ListGeneratedPopupMenuPtr(NullFC)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

ComboBoxBase::ComboBoxBase(const ComboBoxBase &source) :
    _sfExpandButton           (source._sfExpandButton           ), 
    _sfEditor                 (source._sfEditor                 ), 
    _sfModel                  (source._sfModel                  ), 
    _sfCellGenerator          (source._sfCellGenerator          ), 
    _sfComponentGeneratorSelectedItem(source._sfComponentGeneratorSelectedItem), 
    _sfEditable               (source._sfEditable               ), 
    _sfMaxRowCount            (source._sfMaxRowCount            ), 
    _sfComboListPopupMenu     (source._sfComboListPopupMenu     ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

ComboBoxBase::~ComboBoxBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 ComboBoxBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ExpandButtonFieldMask & whichField))
    {
        returnValue += _sfExpandButton.getBinSize();
    }

    if(FieldBits::NoField != (EditorFieldMask & whichField))
    {
        returnValue += _sfEditor.getBinSize();
    }

    if(FieldBits::NoField != (ModelFieldMask & whichField))
    {
        returnValue += _sfModel.getBinSize();
    }

    if(FieldBits::NoField != (CellGeneratorFieldMask & whichField))
    {
        returnValue += _sfCellGenerator.getBinSize();
    }

    if(FieldBits::NoField != (ComponentGeneratorSelectedItemFieldMask & whichField))
    {
        returnValue += _sfComponentGeneratorSelectedItem.getBinSize();
    }

    if(FieldBits::NoField != (EditableFieldMask & whichField))
    {
        returnValue += _sfEditable.getBinSize();
    }

    if(FieldBits::NoField != (MaxRowCountFieldMask & whichField))
    {
        returnValue += _sfMaxRowCount.getBinSize();
    }

    if(FieldBits::NoField != (ComboListPopupMenuFieldMask & whichField))
    {
        returnValue += _sfComboListPopupMenu.getBinSize();
    }


    return returnValue;
}

void ComboBoxBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ExpandButtonFieldMask & whichField))
    {
        _sfExpandButton.copyToBin(pMem);
    }

    if(FieldBits::NoField != (EditorFieldMask & whichField))
    {
        _sfEditor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ModelFieldMask & whichField))
    {
        _sfModel.copyToBin(pMem);
    }

    if(FieldBits::NoField != (CellGeneratorFieldMask & whichField))
    {
        _sfCellGenerator.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ComponentGeneratorSelectedItemFieldMask & whichField))
    {
        _sfComponentGeneratorSelectedItem.copyToBin(pMem);
    }

    if(FieldBits::NoField != (EditableFieldMask & whichField))
    {
        _sfEditable.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MaxRowCountFieldMask & whichField))
    {
        _sfMaxRowCount.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ComboListPopupMenuFieldMask & whichField))
    {
        _sfComboListPopupMenu.copyToBin(pMem);
    }


}

void ComboBoxBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ExpandButtonFieldMask & whichField))
    {
        _sfExpandButton.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (EditorFieldMask & whichField))
    {
        _sfEditor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ModelFieldMask & whichField))
    {
        _sfModel.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (CellGeneratorFieldMask & whichField))
    {
        _sfCellGenerator.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ComponentGeneratorSelectedItemFieldMask & whichField))
    {
        _sfComponentGeneratorSelectedItem.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (EditableFieldMask & whichField))
    {
        _sfEditable.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MaxRowCountFieldMask & whichField))
    {
        _sfMaxRowCount.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ComboListPopupMenuFieldMask & whichField))
    {
        _sfComboListPopupMenu.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ComboBoxBase::executeSyncImpl(      ComboBoxBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ExpandButtonFieldMask & whichField))
        _sfExpandButton.syncWith(pOther->_sfExpandButton);

    if(FieldBits::NoField != (EditorFieldMask & whichField))
        _sfEditor.syncWith(pOther->_sfEditor);

    if(FieldBits::NoField != (ModelFieldMask & whichField))
        _sfModel.syncWith(pOther->_sfModel);

    if(FieldBits::NoField != (CellGeneratorFieldMask & whichField))
        _sfCellGenerator.syncWith(pOther->_sfCellGenerator);

    if(FieldBits::NoField != (ComponentGeneratorSelectedItemFieldMask & whichField))
        _sfComponentGeneratorSelectedItem.syncWith(pOther->_sfComponentGeneratorSelectedItem);

    if(FieldBits::NoField != (EditableFieldMask & whichField))
        _sfEditable.syncWith(pOther->_sfEditable);

    if(FieldBits::NoField != (MaxRowCountFieldMask & whichField))
        _sfMaxRowCount.syncWith(pOther->_sfMaxRowCount);

    if(FieldBits::NoField != (ComboListPopupMenuFieldMask & whichField))
        _sfComboListPopupMenu.syncWith(pOther->_sfComboListPopupMenu);


}
#else
void ComboBoxBase::executeSyncImpl(      ComboBoxBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ExpandButtonFieldMask & whichField))
        _sfExpandButton.syncWith(pOther->_sfExpandButton);

    if(FieldBits::NoField != (EditorFieldMask & whichField))
        _sfEditor.syncWith(pOther->_sfEditor);

    if(FieldBits::NoField != (ModelFieldMask & whichField))
        _sfModel.syncWith(pOther->_sfModel);

    if(FieldBits::NoField != (CellGeneratorFieldMask & whichField))
        _sfCellGenerator.syncWith(pOther->_sfCellGenerator);

    if(FieldBits::NoField != (ComponentGeneratorSelectedItemFieldMask & whichField))
        _sfComponentGeneratorSelectedItem.syncWith(pOther->_sfComponentGeneratorSelectedItem);

    if(FieldBits::NoField != (EditableFieldMask & whichField))
        _sfEditable.syncWith(pOther->_sfEditable);

    if(FieldBits::NoField != (MaxRowCountFieldMask & whichField))
        _sfMaxRowCount.syncWith(pOther->_sfMaxRowCount);

    if(FieldBits::NoField != (ComboListPopupMenuFieldMask & whichField))
        _sfComboListPopupMenu.syncWith(pOther->_sfComboListPopupMenu);



}

void ComboBoxBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<ComboBoxPtr>::_type("ComboBoxPtr", "ContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ComboBoxPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(ComboBoxPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGCOMBOBOXBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGCOMBOBOXBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGCOMBOBOXFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

