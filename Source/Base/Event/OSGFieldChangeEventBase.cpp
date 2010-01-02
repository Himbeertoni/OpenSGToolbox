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
 **     class FieldChangeEvent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGFieldChangeEventBase.h"
#include "OSGFieldChangeEvent.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FieldChangeEvent
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<FieldChangeEvent *>::_type("FieldChangeEventPtr", "EventPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(FieldChangeEvent *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           FieldChangeEvent *,
                           0);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void FieldChangeEventBase::classDescInserter(TypeObject &oType)
{
}


FieldChangeEventBase::TypeObject FieldChangeEventBase::_type(
    FieldChangeEventBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&FieldChangeEventBase::createEmptyLocal),
    FieldChangeEvent::initMethod,
    FieldChangeEvent::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&FieldChangeEvent::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"FieldChangeEvent\"\n"
    "\tparent=\"Event\"\n"
    "    library=\"Base\"\n"
    "\tpointerfieldtypes=\"single\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &FieldChangeEventBase::getType(void)
{
    return _type;
}

const FieldContainerType &FieldChangeEventBase::getType(void) const
{
    return _type;
}

UInt32 FieldChangeEventBase::getContainerSize(void) const
{
    return sizeof(FieldChangeEvent);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 FieldChangeEventBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void FieldChangeEventBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void FieldChangeEventBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
FieldChangeEventTransitPtr FieldChangeEventBase::createLocal(BitVector bFlags)
{
    FieldChangeEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<FieldChangeEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
FieldChangeEventTransitPtr FieldChangeEventBase::createDependent(BitVector bFlags)
{
    FieldChangeEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<FieldChangeEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
FieldChangeEventTransitPtr FieldChangeEventBase::create(void)
{
    FieldChangeEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<FieldChangeEvent>(tmpPtr);
    }

    return fc;
}

FieldChangeEvent *FieldChangeEventBase::createEmptyLocal(BitVector bFlags)
{
    FieldChangeEvent *returnValue;

    newPtr<FieldChangeEvent>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
FieldChangeEvent *FieldChangeEventBase::createEmpty(void)
{
    FieldChangeEvent *returnValue;

    newPtr<FieldChangeEvent>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr FieldChangeEventBase::shallowCopyLocal(
    BitVector bFlags) const
{
    FieldChangeEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FieldChangeEvent *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr FieldChangeEventBase::shallowCopyDependent(
    BitVector bFlags) const
{
    FieldChangeEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FieldChangeEvent *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr FieldChangeEventBase::shallowCopy(void) const
{
    FieldChangeEvent *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const FieldChangeEvent *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

FieldChangeEventBase::FieldChangeEventBase(void) :
    Inherited()
{
}

FieldChangeEventBase::FieldChangeEventBase(const FieldChangeEventBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

FieldChangeEventBase::~FieldChangeEventBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void FieldChangeEventBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    FieldChangeEvent *pThis = static_cast<FieldChangeEvent *>(this);

    pThis->execSync(static_cast<FieldChangeEvent *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *FieldChangeEventBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    FieldChangeEvent *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const FieldChangeEvent *>(pRefAspect),
                  dynamic_cast<const FieldChangeEvent *>(this));

    return returnValue;
}
#endif

void FieldChangeEventBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE