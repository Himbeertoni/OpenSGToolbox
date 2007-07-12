/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
 **     class Button!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEBUTTONINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGButtonBase.h"
#include "OSGButton.h"

#include <Util/OSGUIDefines.h>            // VerticalAlignment default header
#include <Util/OSGUIDefines.h>            // HorizontalAlignment default header

OSG_BEGIN_NAMESPACE

const OSG::BitVector  ButtonBase::FontFieldMask = 
    (TypeTraits<BitVector>::One << ButtonBase::FontFieldId);

const OSG::BitVector  ButtonBase::TextFieldMask = 
    (TypeTraits<BitVector>::One << ButtonBase::TextFieldId);

const OSG::BitVector  ButtonBase::ActiveFieldMask = 
    (TypeTraits<BitVector>::One << ButtonBase::ActiveFieldId);

const OSG::BitVector  ButtonBase::ActiveBorderFieldMask = 
    (TypeTraits<BitVector>::One << ButtonBase::ActiveBorderFieldId);

const OSG::BitVector  ButtonBase::ActiveBackgroundFieldMask = 
    (TypeTraits<BitVector>::One << ButtonBase::ActiveBackgroundFieldId);

const OSG::BitVector  ButtonBase::ActiveForegroundColorFieldMask = 
    (TypeTraits<BitVector>::One << ButtonBase::ActiveForegroundColorFieldId);

const OSG::BitVector  ButtonBase::VerticalAlignmentFieldMask = 
    (TypeTraits<BitVector>::One << ButtonBase::VerticalAlignmentFieldId);

const OSG::BitVector  ButtonBase::HorizontalAlignmentFieldMask = 
    (TypeTraits<BitVector>::One << ButtonBase::HorizontalAlignmentFieldId);

const OSG::BitVector ButtonBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var FontPtr         ButtonBase::_sfFont
    
*/
/*! \var std::string     ButtonBase::_sfText
    
*/
/*! \var bool            ButtonBase::_sfActive
    
*/
/*! \var BorderPtr       ButtonBase::_sfActiveBorder
    
*/
/*! \var UIBackgroundPtr ButtonBase::_sfActiveBackground
    
*/
/*! \var Color4f         ButtonBase::_sfActiveForegroundColor
    
*/
/*! \var UInt32          ButtonBase::_sfVerticalAlignment
    
*/
/*! \var UInt32          ButtonBase::_sfHorizontalAlignment
    
*/

//! Button description

FieldDescription *ButtonBase::_desc[] = 
{
    new FieldDescription(SFFontPtr::getClassType(), 
                     "Font", 
                     FontFieldId, FontFieldMask,
                     false,
                     (FieldAccessMethod) &ButtonBase::getSFFont),
    new FieldDescription(SFString::getClassType(), 
                     "Text", 
                     TextFieldId, TextFieldMask,
                     false,
                     (FieldAccessMethod) &ButtonBase::getSFText),
    new FieldDescription(SFBool::getClassType(), 
                     "Active", 
                     ActiveFieldId, ActiveFieldMask,
                     false,
                     (FieldAccessMethod) &ButtonBase::getSFActive),
    new FieldDescription(SFBorderPtr::getClassType(), 
                     "ActiveBorder", 
                     ActiveBorderFieldId, ActiveBorderFieldMask,
                     false,
                     (FieldAccessMethod) &ButtonBase::getSFActiveBorder),
    new FieldDescription(SFUIBackgroundPtr::getClassType(), 
                     "ActiveBackground", 
                     ActiveBackgroundFieldId, ActiveBackgroundFieldMask,
                     false,
                     (FieldAccessMethod) &ButtonBase::getSFActiveBackground),
    new FieldDescription(SFColor4f::getClassType(), 
                     "ActiveForegroundColor", 
                     ActiveForegroundColorFieldId, ActiveForegroundColorFieldMask,
                     false,
                     (FieldAccessMethod) &ButtonBase::getSFActiveForegroundColor),
    new FieldDescription(SFUInt32::getClassType(), 
                     "VerticalAlignment", 
                     VerticalAlignmentFieldId, VerticalAlignmentFieldMask,
                     false,
                     (FieldAccessMethod) &ButtonBase::getSFVerticalAlignment),
    new FieldDescription(SFUInt32::getClassType(), 
                     "HorizontalAlignment", 
                     HorizontalAlignmentFieldId, HorizontalAlignmentFieldMask,
                     false,
                     (FieldAccessMethod) &ButtonBase::getSFHorizontalAlignment)
};


FieldContainerType ButtonBase::_type(
    "Button",
    "Component",
    NULL,
    (PrototypeCreateF) &ButtonBase::createEmpty,
    Button::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(ButtonBase, ButtonPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &ButtonBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ButtonBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr ButtonBase::shallowCopy(void) const 
{ 
    ButtonPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const Button *>(this)); 

    return returnValue; 
}

UInt32 ButtonBase::getContainerSize(void) const 
{ 
    return sizeof(Button); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void ButtonBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((ButtonBase *) &other, whichField);
}
#else
void ButtonBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((ButtonBase *) &other, whichField, sInfo);
}
void ButtonBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ButtonBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

ButtonBase::ButtonBase(void) :
    _sfFont                   (), 
    _sfText                   (), 
    _sfActive                 (bool(false)), 
    _sfActiveBorder           (), 
    _sfActiveBackground       (), 
    _sfActiveForegroundColor  (), 
    _sfVerticalAlignment      (UInt32(VERTICAL_CENTER)), 
    _sfHorizontalAlignment    (UInt32(HORIZONTAL_CENTER)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

ButtonBase::ButtonBase(const ButtonBase &source) :
    _sfFont                   (source._sfFont                   ), 
    _sfText                   (source._sfText                   ), 
    _sfActive                 (source._sfActive                 ), 
    _sfActiveBorder           (source._sfActiveBorder           ), 
    _sfActiveBackground       (source._sfActiveBackground       ), 
    _sfActiveForegroundColor  (source._sfActiveForegroundColor  ), 
    _sfVerticalAlignment      (source._sfVerticalAlignment      ), 
    _sfHorizontalAlignment    (source._sfHorizontalAlignment    ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

ButtonBase::~ButtonBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 ButtonBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FontFieldMask & whichField))
    {
        returnValue += _sfFont.getBinSize();
    }

    if(FieldBits::NoField != (TextFieldMask & whichField))
    {
        returnValue += _sfText.getBinSize();
    }

    if(FieldBits::NoField != (ActiveFieldMask & whichField))
    {
        returnValue += _sfActive.getBinSize();
    }

    if(FieldBits::NoField != (ActiveBorderFieldMask & whichField))
    {
        returnValue += _sfActiveBorder.getBinSize();
    }

    if(FieldBits::NoField != (ActiveBackgroundFieldMask & whichField))
    {
        returnValue += _sfActiveBackground.getBinSize();
    }

    if(FieldBits::NoField != (ActiveForegroundColorFieldMask & whichField))
    {
        returnValue += _sfActiveForegroundColor.getBinSize();
    }

    if(FieldBits::NoField != (VerticalAlignmentFieldMask & whichField))
    {
        returnValue += _sfVerticalAlignment.getBinSize();
    }

    if(FieldBits::NoField != (HorizontalAlignmentFieldMask & whichField))
    {
        returnValue += _sfHorizontalAlignment.getBinSize();
    }


    return returnValue;
}

void ButtonBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FontFieldMask & whichField))
    {
        _sfFont.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TextFieldMask & whichField))
    {
        _sfText.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ActiveFieldMask & whichField))
    {
        _sfActive.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ActiveBorderFieldMask & whichField))
    {
        _sfActiveBorder.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ActiveBackgroundFieldMask & whichField))
    {
        _sfActiveBackground.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ActiveForegroundColorFieldMask & whichField))
    {
        _sfActiveForegroundColor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (VerticalAlignmentFieldMask & whichField))
    {
        _sfVerticalAlignment.copyToBin(pMem);
    }

    if(FieldBits::NoField != (HorizontalAlignmentFieldMask & whichField))
    {
        _sfHorizontalAlignment.copyToBin(pMem);
    }


}

void ButtonBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FontFieldMask & whichField))
    {
        _sfFont.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TextFieldMask & whichField))
    {
        _sfText.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ActiveFieldMask & whichField))
    {
        _sfActive.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ActiveBorderFieldMask & whichField))
    {
        _sfActiveBorder.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ActiveBackgroundFieldMask & whichField))
    {
        _sfActiveBackground.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ActiveForegroundColorFieldMask & whichField))
    {
        _sfActiveForegroundColor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (VerticalAlignmentFieldMask & whichField))
    {
        _sfVerticalAlignment.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (HorizontalAlignmentFieldMask & whichField))
    {
        _sfHorizontalAlignment.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ButtonBase::executeSyncImpl(      ButtonBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (FontFieldMask & whichField))
        _sfFont.syncWith(pOther->_sfFont);

    if(FieldBits::NoField != (TextFieldMask & whichField))
        _sfText.syncWith(pOther->_sfText);

    if(FieldBits::NoField != (ActiveFieldMask & whichField))
        _sfActive.syncWith(pOther->_sfActive);

    if(FieldBits::NoField != (ActiveBorderFieldMask & whichField))
        _sfActiveBorder.syncWith(pOther->_sfActiveBorder);

    if(FieldBits::NoField != (ActiveBackgroundFieldMask & whichField))
        _sfActiveBackground.syncWith(pOther->_sfActiveBackground);

    if(FieldBits::NoField != (ActiveForegroundColorFieldMask & whichField))
        _sfActiveForegroundColor.syncWith(pOther->_sfActiveForegroundColor);

    if(FieldBits::NoField != (VerticalAlignmentFieldMask & whichField))
        _sfVerticalAlignment.syncWith(pOther->_sfVerticalAlignment);

    if(FieldBits::NoField != (HorizontalAlignmentFieldMask & whichField))
        _sfHorizontalAlignment.syncWith(pOther->_sfHorizontalAlignment);


}
#else
void ButtonBase::executeSyncImpl(      ButtonBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (FontFieldMask & whichField))
        _sfFont.syncWith(pOther->_sfFont);

    if(FieldBits::NoField != (TextFieldMask & whichField))
        _sfText.syncWith(pOther->_sfText);

    if(FieldBits::NoField != (ActiveFieldMask & whichField))
        _sfActive.syncWith(pOther->_sfActive);

    if(FieldBits::NoField != (ActiveBorderFieldMask & whichField))
        _sfActiveBorder.syncWith(pOther->_sfActiveBorder);

    if(FieldBits::NoField != (ActiveBackgroundFieldMask & whichField))
        _sfActiveBackground.syncWith(pOther->_sfActiveBackground);

    if(FieldBits::NoField != (ActiveForegroundColorFieldMask & whichField))
        _sfActiveForegroundColor.syncWith(pOther->_sfActiveForegroundColor);

    if(FieldBits::NoField != (VerticalAlignmentFieldMask & whichField))
        _sfVerticalAlignment.syncWith(pOther->_sfVerticalAlignment);

    if(FieldBits::NoField != (HorizontalAlignmentFieldMask & whichField))
        _sfHorizontalAlignment.syncWith(pOther->_sfHorizontalAlignment);



}

void ButtonBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<ButtonPtr>::_type("ButtonPtr", "ComponentPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ButtonPtr, );
OSG_DLLEXPORT_MFIELD_DEF1(ButtonPtr, );


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
    static Char8 cvsid_hpp       [] = OSGBUTTONBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGBUTTONBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGBUTTONFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

