/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
 *          Achyuthan Vasanth (vasanth.achyuthan@gmail.com)                  *
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
 **     class TextAreaGutter!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGTextDomArea.h"             // TrackedArea Class
#include "OSGUIFont.h"                  // Font Class

#include "OSGTextAreaGutterBase.h"
#include "OSGTextAreaGutter.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TextAreaGutter
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var TextDomArea *   TextAreaGutterBase::_sfTrackedArea
    
*/

/*! \var Vec2f           TextAreaGutterBase::_sfAlignment
    
*/

/*! \var Color4f         TextAreaGutterBase::_sfTextColor
    
*/

/*! \var UIFont *        TextAreaGutterBase::_sfFont
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TextAreaGutter *>::_type("TextAreaGutterPtr", "ComponentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TextAreaGutter *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TextAreaGutter *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TextAreaGutter *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TextAreaGutterBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecTextDomAreaPtr::Description(
        SFUnrecTextDomAreaPtr::getClassType(),
        "TrackedArea",
        "",
        TrackedAreaFieldId, TrackedAreaFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextAreaGutter::editHandleTrackedArea),
        static_cast<FieldGetMethodSig >(&TextAreaGutter::getHandleTrackedArea));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec2f::Description(
        SFVec2f::getClassType(),
        "Alignment",
        "",
        AlignmentFieldId, AlignmentFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextAreaGutter::editHandleAlignment),
        static_cast<FieldGetMethodSig >(&TextAreaGutter::getHandleAlignment));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "TextColor",
        "",
        TextColorFieldId, TextColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextAreaGutter::editHandleTextColor),
        static_cast<FieldGetMethodSig >(&TextAreaGutter::getHandleTextColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecUIFontPtr::Description(
        SFUnrecUIFontPtr::getClassType(),
        "Font",
        "",
        FontFieldId, FontFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextAreaGutter::editHandleFont),
        static_cast<FieldGetMethodSig >(&TextAreaGutter::getHandleFont));

    oType.addInitialDesc(pDesc);
}


TextAreaGutterBase::TypeObject TextAreaGutterBase::_type(
    TextAreaGutterBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&TextAreaGutterBase::createEmptyLocal),
    TextAreaGutter::initMethod,
    TextAreaGutter::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TextAreaGutter::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TextAreaGutter\"\n"
    "\tparent=\"ComponentContainer\"\n"
    "\tlibrary=\"ContribTextDom\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"true\"\n"
    "    isNodeCore=\"false\"\n"
    "\tparentProducer=\"Component\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com),Achyuthan Vasanth (vasanth.achyuthan@gmail.com)\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"TrackedArea\"\n"
    "\t\ttype=\"TextDomArea\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Alignment\"\n"
    "\t\ttype=\"Vec2f\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.0f, 0.5f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"TextColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.0,0.0,0.0,1.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Font\"\n"
    "\t\ttype=\"UIFont\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextAreaGutterBase::getType(void)
{
    return _type;
}

const FieldContainerType &TextAreaGutterBase::getType(void) const
{
    return _type;
}

UInt32 TextAreaGutterBase::getContainerSize(void) const
{
    return sizeof(TextAreaGutter);
}

/*------------------------- decorator get ------------------------------*/


//! Get the TextAreaGutter::_sfTrackedArea field.
const SFUnrecTextDomAreaPtr *TextAreaGutterBase::getSFTrackedArea(void) const
{
    return &_sfTrackedArea;
}

SFUnrecTextDomAreaPtr *TextAreaGutterBase::editSFTrackedArea    (void)
{
    editSField(TrackedAreaFieldMask);

    return &_sfTrackedArea;
}

SFVec2f *TextAreaGutterBase::editSFAlignment(void)
{
    editSField(AlignmentFieldMask);

    return &_sfAlignment;
}

const SFVec2f *TextAreaGutterBase::getSFAlignment(void) const
{
    return &_sfAlignment;
}


SFColor4f *TextAreaGutterBase::editSFTextColor(void)
{
    editSField(TextColorFieldMask);

    return &_sfTextColor;
}

const SFColor4f *TextAreaGutterBase::getSFTextColor(void) const
{
    return &_sfTextColor;
}


//! Get the TextAreaGutter::_sfFont field.
const SFUnrecUIFontPtr *TextAreaGutterBase::getSFFont(void) const
{
    return &_sfFont;
}

SFUnrecUIFontPtr    *TextAreaGutterBase::editSFFont           (void)
{
    editSField(FontFieldMask);

    return &_sfFont;
}





/*------------------------------ access -----------------------------------*/

UInt32 TextAreaGutterBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TrackedAreaFieldMask & whichField))
    {
        returnValue += _sfTrackedArea.getBinSize();
    }
    if(FieldBits::NoField != (AlignmentFieldMask & whichField))
    {
        returnValue += _sfAlignment.getBinSize();
    }
    if(FieldBits::NoField != (TextColorFieldMask & whichField))
    {
        returnValue += _sfTextColor.getBinSize();
    }
    if(FieldBits::NoField != (FontFieldMask & whichField))
    {
        returnValue += _sfFont.getBinSize();
    }

    return returnValue;
}

void TextAreaGutterBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TrackedAreaFieldMask & whichField))
    {
        _sfTrackedArea.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AlignmentFieldMask & whichField))
    {
        _sfAlignment.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TextColorFieldMask & whichField))
    {
        _sfTextColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FontFieldMask & whichField))
    {
        _sfFont.copyToBin(pMem);
    }
}

void TextAreaGutterBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TrackedAreaFieldMask & whichField))
    {
        editSField(TrackedAreaFieldMask);
        _sfTrackedArea.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AlignmentFieldMask & whichField))
    {
        editSField(AlignmentFieldMask);
        _sfAlignment.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TextColorFieldMask & whichField))
    {
        editSField(TextColorFieldMask);
        _sfTextColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FontFieldMask & whichField))
    {
        editSField(FontFieldMask);
        _sfFont.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TextAreaGutterTransitPtr TextAreaGutterBase::createLocal(BitVector bFlags)
{
    TextAreaGutterTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<TextAreaGutter>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
TextAreaGutterTransitPtr TextAreaGutterBase::createDependent(BitVector bFlags)
{
    TextAreaGutterTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<TextAreaGutter>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TextAreaGutterTransitPtr TextAreaGutterBase::create(void)
{
    TextAreaGutterTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<TextAreaGutter>(tmpPtr);
    }

    return fc;
}

TextAreaGutter *TextAreaGutterBase::createEmptyLocal(BitVector bFlags)
{
    TextAreaGutter *returnValue;

    newPtr<TextAreaGutter>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
TextAreaGutter *TextAreaGutterBase::createEmpty(void)
{
    TextAreaGutter *returnValue;

    newPtr<TextAreaGutter>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}

FieldContainerTransitPtr TextAreaGutterBase::shallowCopyLocal(
    BitVector bFlags) const
{
    TextAreaGutter *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TextAreaGutter *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TextAreaGutterBase::shallowCopyDependent(
    BitVector bFlags) const
{
    TextAreaGutter *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TextAreaGutter *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr TextAreaGutterBase::shallowCopy(void) const
{
    TextAreaGutter *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const TextAreaGutter *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

TextAreaGutterBase::TextAreaGutterBase(void) :
    Inherited(),
    _sfTrackedArea            (NULL),
    _sfAlignment              (Vec2f(1.0f, 0.5f)),
    _sfTextColor              (Color4f(0.0,0.0,0.0,1.0)),
    _sfFont                   (NULL)
{
}

TextAreaGutterBase::TextAreaGutterBase(const TextAreaGutterBase &source) :
    Inherited(source),
    _sfTrackedArea            (NULL),
    _sfAlignment              (source._sfAlignment              ),
    _sfTextColor              (source._sfTextColor              ),
    _sfFont                   (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

TextAreaGutterBase::~TextAreaGutterBase(void)
{
}

void TextAreaGutterBase::onCreate(const TextAreaGutter *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        TextAreaGutter *pThis = static_cast<TextAreaGutter *>(this);

        pThis->setTrackedArea(source->getTrackedArea());

        pThis->setFont(source->getFont());
    }
}

GetFieldHandlePtr TextAreaGutterBase::getHandleTrackedArea     (void) const
{
    SFUnrecTextDomAreaPtr::GetHandlePtr returnValue(
        new  SFUnrecTextDomAreaPtr::GetHandle(
             &_sfTrackedArea,
             this->getType().getFieldDesc(TrackedAreaFieldId),
             const_cast<TextAreaGutterBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextAreaGutterBase::editHandleTrackedArea    (void)
{
    SFUnrecTextDomAreaPtr::EditHandlePtr returnValue(
        new  SFUnrecTextDomAreaPtr::EditHandle(
             &_sfTrackedArea,
             this->getType().getFieldDesc(TrackedAreaFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&TextAreaGutter::setTrackedArea,
                    static_cast<TextAreaGutter *>(this), _1));

    editSField(TrackedAreaFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextAreaGutterBase::getHandleAlignment       (void) const
{
    SFVec2f::GetHandlePtr returnValue(
        new  SFVec2f::GetHandle(
             &_sfAlignment,
             this->getType().getFieldDesc(AlignmentFieldId),
             const_cast<TextAreaGutterBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextAreaGutterBase::editHandleAlignment      (void)
{
    SFVec2f::EditHandlePtr returnValue(
        new  SFVec2f::EditHandle(
             &_sfAlignment,
             this->getType().getFieldDesc(AlignmentFieldId),
             this));


    editSField(AlignmentFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextAreaGutterBase::getHandleTextColor       (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfTextColor,
             this->getType().getFieldDesc(TextColorFieldId),
             const_cast<TextAreaGutterBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextAreaGutterBase::editHandleTextColor      (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfTextColor,
             this->getType().getFieldDesc(TextColorFieldId),
             this));


    editSField(TextColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextAreaGutterBase::getHandleFont            (void) const
{
    SFUnrecUIFontPtr::GetHandlePtr returnValue(
        new  SFUnrecUIFontPtr::GetHandle(
             &_sfFont,
             this->getType().getFieldDesc(FontFieldId),
             const_cast<TextAreaGutterBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextAreaGutterBase::editHandleFont           (void)
{
    SFUnrecUIFontPtr::EditHandlePtr returnValue(
        new  SFUnrecUIFontPtr::EditHandle(
             &_sfFont,
             this->getType().getFieldDesc(FontFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&TextAreaGutter::setFont,
                    static_cast<TextAreaGutter *>(this), _1));

    editSField(FontFieldMask);

    return returnValue;
}



#ifdef OSG_MT_CPTR_ASPECT
void TextAreaGutterBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TextAreaGutter *pThis = static_cast<TextAreaGutter *>(this);

    pThis->execSync(static_cast<TextAreaGutter *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *TextAreaGutterBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    TextAreaGutter *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TextAreaGutter *>(pRefAspect),
                  dynamic_cast<const TextAreaGutter *>(this));

    return returnValue;
}
#endif

void TextAreaGutterBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<TextAreaGutter *>(this)->setTrackedArea(NULL);

    static_cast<TextAreaGutter *>(this)->setFont(NULL);


}


OSG_END_NAMESPACE
