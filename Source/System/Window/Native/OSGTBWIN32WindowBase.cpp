/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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
 **     class TBWIN32Window!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGWIN32Window.h"             // WIN32Window Class

#include "OSGTBWIN32WindowBase.h"
#include "OSGTBWIN32Window.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TBWIN32Window
    The class for TBWIN32 windows.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var WIN32Window *   TBWIN32WindowBase::_sfWIN32Window
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<TBWIN32Window *, nsOSG>::_type(
    "TBWIN32WindowPtr", 
    "WindowEventProducerPtr", 
    TBWIN32Window::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(TBWIN32Window *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TBWIN32Window *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TBWIN32Window *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TBWIN32WindowBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecWIN32WindowPtr::Description(
        SFUnrecWIN32WindowPtr::getClassType(),
        "WIN32Window",
        "",
        WIN32WindowFieldId, WIN32WindowFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TBWIN32Window::editHandleWIN32Window),
        static_cast<FieldGetMethodSig >(&TBWIN32Window::getHandleWIN32Window));

    oType.addInitialDesc(pDesc);
}


TBWIN32WindowBase::TypeObject TBWIN32WindowBase::_type(
    TBWIN32WindowBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&TBWIN32WindowBase::createEmptyLocal),
    TBWIN32Window::initMethod,
    TBWIN32Window::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TBWIN32Window::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"TBWIN32Window\"\n"
    "    parent=\"WindowEventProducer\"\n"
    "    library=\"WindowWIN32\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    docGroupBase=\"GrpWindowWIN32\"\n"
    "    >\n"
    "    The class for TBWIN32 windows.\n"
    "    <Field\n"
    "        name=\"WIN32Window\"\n"
    "        type=\"WIN32WindowPtr\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"NULL\"\n"
    "\t\tfieldHeader=\"OSGWIN32WindowFields.h\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "    </Field>\t\n"
    "</FieldContainer>\n",
    "The class for TBWIN32 windows.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TBWIN32WindowBase::getType(void)
{
    return _type;
}

const FieldContainerType &TBWIN32WindowBase::getType(void) const
{
    return _type;
}

UInt32 TBWIN32WindowBase::getContainerSize(void) const
{
    return sizeof(TBWIN32Window);
}

/*------------------------- decorator get ------------------------------*/


//! Get the TBWIN32Window::_sfWIN32Window field.
const SFUnrecWIN32WindowPtr *TBWIN32WindowBase::getSFWIN32Window(void) const
{
    return &_sfWIN32Window;
}

SFUnrecWIN32WindowPtr *TBWIN32WindowBase::editSFWIN32Window    (void)
{
    editSField(WIN32WindowFieldMask);

    return &_sfWIN32Window;
}





/*------------------------------ access -----------------------------------*/

SizeT TBWIN32WindowBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (WIN32WindowFieldMask & whichField))
    {
        returnValue += _sfWIN32Window.getBinSize();
    }

    return returnValue;
}

void TBWIN32WindowBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (WIN32WindowFieldMask & whichField))
    {
        _sfWIN32Window.copyToBin(pMem);
    }
}

void TBWIN32WindowBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (WIN32WindowFieldMask & whichField))
    {
        editSField(WIN32WindowFieldMask);
        _sfWIN32Window.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TBWIN32WindowTransitPtr TBWIN32WindowBase::createLocal(BitVector bFlags)
{
    TBWIN32WindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<TBWIN32Window>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
TBWIN32WindowTransitPtr TBWIN32WindowBase::createDependent(BitVector bFlags)
{
    TBWIN32WindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<TBWIN32Window>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TBWIN32WindowTransitPtr TBWIN32WindowBase::create(void)
{
    TBWIN32WindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<TBWIN32Window>(tmpPtr);
    }

    return fc;
}

TBWIN32Window *TBWIN32WindowBase::createEmptyLocal(BitVector bFlags)
{
    TBWIN32Window *returnValue;

    newPtr<TBWIN32Window>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
TBWIN32Window *TBWIN32WindowBase::createEmpty(void)
{
    TBWIN32Window *returnValue;

    newPtr<TBWIN32Window>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr TBWIN32WindowBase::shallowCopyLocal(
    BitVector bFlags) const
{
    TBWIN32Window *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TBWIN32Window *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TBWIN32WindowBase::shallowCopyDependent(
    BitVector bFlags) const
{
    TBWIN32Window *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TBWIN32Window *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr TBWIN32WindowBase::shallowCopy(void) const
{
    TBWIN32Window *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const TBWIN32Window *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

TBWIN32WindowBase::TBWIN32WindowBase(void) :
    Inherited(),
    _sfWIN32Window            (NULL)
{
}

TBWIN32WindowBase::TBWIN32WindowBase(const TBWIN32WindowBase &source) :
    Inherited(source),
    _sfWIN32Window            (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

TBWIN32WindowBase::~TBWIN32WindowBase(void)
{
}

void TBWIN32WindowBase::onCreate(const TBWIN32Window *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        TBWIN32Window *pThis = static_cast<TBWIN32Window *>(this);

        pThis->setWIN32Window(source->getWIN32Window());
    }
}

GetFieldHandlePtr TBWIN32WindowBase::getHandleWIN32Window     (void) const
{
    SFUnrecWIN32WindowPtr::GetHandlePtr returnValue(
        new  SFUnrecWIN32WindowPtr::GetHandle(
             &_sfWIN32Window,
             this->getType().getFieldDesc(WIN32WindowFieldId),
             const_cast<TBWIN32WindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TBWIN32WindowBase::editHandleWIN32Window    (void)
{
    SFUnrecWIN32WindowPtr::EditHandlePtr returnValue(
        new  SFUnrecWIN32WindowPtr::EditHandle(
             &_sfWIN32Window,
             this->getType().getFieldDesc(WIN32WindowFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&TBWIN32Window::setWIN32Window,
                    static_cast<TBWIN32Window *>(this), _1));

    editSField(WIN32WindowFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TBWIN32WindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TBWIN32Window *pThis = static_cast<TBWIN32Window *>(this);

    pThis->execSync(static_cast<TBWIN32Window *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *TBWIN32WindowBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    TBWIN32Window *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TBWIN32Window *>(pRefAspect),
                  dynamic_cast<const TBWIN32Window *>(this));

    return returnValue;
}
#endif

void TBWIN32WindowBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<TBWIN32Window *>(this)->setWIN32Window(NULL);


}


OSG_END_NAMESPACE
