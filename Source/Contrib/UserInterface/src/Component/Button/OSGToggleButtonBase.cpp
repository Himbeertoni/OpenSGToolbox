/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
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
 **     class ToggleButton!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGToggleButtonBase.h"
#include "OSGToggleButton.h"

#include <boost/bind.hpp>

#include "OSGEvent.h"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ToggleButton
    A UI Toggle Button.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var bool            ToggleButtonBase::_sfSelected
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ToggleButton *>::_type("ToggleButtonPtr", "ButtonPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ToggleButton *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ToggleButton *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ToggleButton *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ToggleButtonBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "Selected",
        "",
        SelectedFieldId, SelectedFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ToggleButton::editHandleSelected),
        static_cast<FieldGetMethodSig >(&ToggleButton::getHandleSelected));

    oType.addInitialDesc(pDesc);
}


ToggleButtonBase::TypeObject ToggleButtonBase::_type(
    ToggleButtonBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ToggleButtonBase::createEmptyLocal),
    ToggleButton::initMethod,
    ToggleButton::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ToggleButton::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ToggleButton\"\n"
    "\tparent=\"Button\"\n"
    "    library=\"ContribUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    "    parentProducer=\"Button\"\n"
    ">\n"
    "A UI Toggle Button.\n"
    "\t<Field\n"
    "\t\tname=\"Selected\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"ButtonSelected\"\n"
    "\t\ttype=\"ButtonSelectedEventPtr\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"ButtonDeselected\"\n"
    "\t\ttype=\"ButtonSelectedEventPtr\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "</FieldContainer>\n",
    "A UI Toggle Button.\n"
    );

//! ToggleButton Produced Methods

MethodDescription *ToggleButtonBase::_methodDesc[] =
{
    new MethodDescription("ButtonSelected", 
                    "",
                     ButtonSelectedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("ButtonDeselected", 
                    "",
                     ButtonDeselectedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod())
};

EventProducerType ToggleButtonBase::_producerType(
    "ToggleButtonProducerType",
    "ButtonProducerType",
    "",
    InitEventProducerFunctor(),
    _methodDesc,
    sizeof(_methodDesc));

/*------------------------------ get -----------------------------------*/

FieldContainerType &ToggleButtonBase::getType(void)
{
    return _type;
}

const FieldContainerType &ToggleButtonBase::getType(void) const
{
    return _type;
}

const EventProducerType &ToggleButtonBase::getProducerType(void) const
{
    return _producerType;
}

UInt32 ToggleButtonBase::getContainerSize(void) const
{
    return sizeof(ToggleButton);
}

/*------------------------- decorator get ------------------------------*/


SFBool *ToggleButtonBase::editSFSelected(void)
{
    editSField(SelectedFieldMask);

    return &_sfSelected;
}

const SFBool *ToggleButtonBase::getSFSelected(void) const
{
    return &_sfSelected;
}






/*------------------------------ access -----------------------------------*/

UInt32 ToggleButtonBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SelectedFieldMask & whichField))
    {
        returnValue += _sfSelected.getBinSize();
    }

    return returnValue;
}

void ToggleButtonBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SelectedFieldMask & whichField))
    {
        _sfSelected.copyToBin(pMem);
    }
}

void ToggleButtonBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SelectedFieldMask & whichField))
    {
        _sfSelected.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ToggleButtonTransitPtr ToggleButtonBase::createLocal(BitVector bFlags)
{
    ToggleButtonTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ToggleButton>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ToggleButtonTransitPtr ToggleButtonBase::createDependent(BitVector bFlags)
{
    ToggleButtonTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ToggleButton>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ToggleButtonTransitPtr ToggleButtonBase::create(void)
{
    ToggleButtonTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ToggleButton>(tmpPtr);
    }

    return fc;
}

ToggleButton *ToggleButtonBase::createEmptyLocal(BitVector bFlags)
{
    ToggleButton *returnValue;

    newPtr<ToggleButton>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ToggleButton *ToggleButtonBase::createEmpty(void)
{
    ToggleButton *returnValue;

    newPtr<ToggleButton>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ToggleButtonBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ToggleButton *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ToggleButton *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ToggleButtonBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ToggleButton *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ToggleButton *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ToggleButtonBase::shallowCopy(void) const
{
    ToggleButton *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ToggleButton *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ToggleButtonBase::ToggleButtonBase(void) :
    Inherited(),
    _sfSelected               (bool(false))
{
    _Producer.setType(&_producerType);
}

ToggleButtonBase::ToggleButtonBase(const ToggleButtonBase &source) :
    Inherited(source),
    _sfSelected               (source._sfSelected               )
{
}


/*-------------------------- destructors ----------------------------------*/

ToggleButtonBase::~ToggleButtonBase(void)
{
}


GetFieldHandlePtr ToggleButtonBase::getHandleSelected        (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfSelected,
             this->getType().getFieldDesc(SelectedFieldId),
             const_cast<ToggleButtonBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ToggleButtonBase::editHandleSelected       (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfSelected,
             this->getType().getFieldDesc(SelectedFieldId),
             this));


    editSField(SelectedFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ToggleButtonBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ToggleButton *pThis = static_cast<ToggleButton *>(this);

    pThis->execSync(static_cast<ToggleButton *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ToggleButtonBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ToggleButton *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ToggleButton *>(pRefAspect),
                  dynamic_cast<const ToggleButton *>(this));

    return returnValue;
}
#endif

void ToggleButtonBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE