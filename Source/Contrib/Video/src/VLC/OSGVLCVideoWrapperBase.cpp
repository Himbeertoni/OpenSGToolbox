/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com), David Naylor               *
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
 **     class VLCVideoWrapper!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGVLCVideoWrapperBase.h"
#include "OSGVLCVideoWrapper.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::VLCVideoWrapper
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<VLCVideoWrapper *>::_type("VLCVideoWrapperPtr", "VideoWrapperPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(VLCVideoWrapper *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           VLCVideoWrapper *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           VLCVideoWrapper *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void VLCVideoWrapperBase::classDescInserter(TypeObject &oType)
{
}


VLCVideoWrapperBase::TypeObject VLCVideoWrapperBase::_type(
    VLCVideoWrapperBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&VLCVideoWrapperBase::createEmptyLocal),
    VLCVideoWrapper::initMethod,
    VLCVideoWrapper::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&VLCVideoWrapper::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"VLCVideoWrapper\"\n"
    "\tparent=\"VideoWrapper\"\n"
    "\tlibrary=\"ContribVideo\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com), David Naylor               \"\n"
    ">\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &VLCVideoWrapperBase::getType(void)
{
    return _type;
}

const FieldContainerType &VLCVideoWrapperBase::getType(void) const
{
    return _type;
}

UInt32 VLCVideoWrapperBase::getContainerSize(void) const
{
    return sizeof(VLCVideoWrapper);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 VLCVideoWrapperBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void VLCVideoWrapperBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void VLCVideoWrapperBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
VLCVideoWrapperTransitPtr VLCVideoWrapperBase::createLocal(BitVector bFlags)
{
    VLCVideoWrapperTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<VLCVideoWrapper>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
VLCVideoWrapperTransitPtr VLCVideoWrapperBase::createDependent(BitVector bFlags)
{
    VLCVideoWrapperTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<VLCVideoWrapper>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
VLCVideoWrapperTransitPtr VLCVideoWrapperBase::create(void)
{
    VLCVideoWrapperTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<VLCVideoWrapper>(tmpPtr);
    }

    return fc;
}

VLCVideoWrapper *VLCVideoWrapperBase::createEmptyLocal(BitVector bFlags)
{
    VLCVideoWrapper *returnValue;

    newPtr<VLCVideoWrapper>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
VLCVideoWrapper *VLCVideoWrapperBase::createEmpty(void)
{
    VLCVideoWrapper *returnValue;

    newPtr<VLCVideoWrapper>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr VLCVideoWrapperBase::shallowCopyLocal(
    BitVector bFlags) const
{
    VLCVideoWrapper *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const VLCVideoWrapper *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr VLCVideoWrapperBase::shallowCopyDependent(
    BitVector bFlags) const
{
    VLCVideoWrapper *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const VLCVideoWrapper *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr VLCVideoWrapperBase::shallowCopy(void) const
{
    VLCVideoWrapper *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const VLCVideoWrapper *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

VLCVideoWrapperBase::VLCVideoWrapperBase(void) :
    Inherited()
{
}

VLCVideoWrapperBase::VLCVideoWrapperBase(const VLCVideoWrapperBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

VLCVideoWrapperBase::~VLCVideoWrapperBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void VLCVideoWrapperBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    VLCVideoWrapper *pThis = static_cast<VLCVideoWrapper *>(this);

    pThis->execSync(static_cast<VLCVideoWrapper *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *VLCVideoWrapperBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    VLCVideoWrapper *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const VLCVideoWrapper *>(pRefAspect),
                  dynamic_cast<const VLCVideoWrapper *>(this));

    return returnValue;
}
#endif

void VLCVideoWrapperBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
