/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
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
 **     class BackgroundFieldContainerEditor!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGBackgroundFieldContainerEditorBase.h"
#include "OSGBackgroundFieldContainerEditor.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::BackgroundFieldContainerEditor
    FieldContainerEditor for OSG::Background
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<BackgroundFieldContainerEditor *>::_type("BackgroundFieldContainerEditorPtr", "ScenePreviewFieldContainerEditorPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(BackgroundFieldContainerEditor *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           BackgroundFieldContainerEditor *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           BackgroundFieldContainerEditor *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void BackgroundFieldContainerEditorBase::classDescInserter(TypeObject &oType)
{
}


BackgroundFieldContainerEditorBase::TypeObject BackgroundFieldContainerEditorBase::_type(
    BackgroundFieldContainerEditorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&BackgroundFieldContainerEditorBase::createEmptyLocal),
    BackgroundFieldContainerEditor::initMethod,
    BackgroundFieldContainerEditor::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&BackgroundFieldContainerEditor::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"BackgroundFieldContainerEditor\"\n"
    "\tparent=\"ScenePreviewFieldContainerEditor\"\n"
    "    library=\"ContribFieldContainerEditor\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)\"\n"
    ">\n"
    "FieldContainerEditor for OSG::Background\n"
    "</FieldContainer>\n",
    "FieldContainerEditor for OSG::Background\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &BackgroundFieldContainerEditorBase::getType(void)
{
    return _type;
}

const FieldContainerType &BackgroundFieldContainerEditorBase::getType(void) const
{
    return _type;
}

UInt32 BackgroundFieldContainerEditorBase::getContainerSize(void) const
{
    return sizeof(BackgroundFieldContainerEditor);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 BackgroundFieldContainerEditorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void BackgroundFieldContainerEditorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void BackgroundFieldContainerEditorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
BackgroundFieldContainerEditorTransitPtr BackgroundFieldContainerEditorBase::createLocal(BitVector bFlags)
{
    BackgroundFieldContainerEditorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<BackgroundFieldContainerEditor>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
BackgroundFieldContainerEditorTransitPtr BackgroundFieldContainerEditorBase::createDependent(BitVector bFlags)
{
    BackgroundFieldContainerEditorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<BackgroundFieldContainerEditor>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
BackgroundFieldContainerEditorTransitPtr BackgroundFieldContainerEditorBase::create(void)
{
    BackgroundFieldContainerEditorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<BackgroundFieldContainerEditor>(tmpPtr);
    }

    return fc;
}

BackgroundFieldContainerEditor *BackgroundFieldContainerEditorBase::createEmptyLocal(BitVector bFlags)
{
    BackgroundFieldContainerEditor *returnValue;

    newPtr<BackgroundFieldContainerEditor>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
BackgroundFieldContainerEditor *BackgroundFieldContainerEditorBase::createEmpty(void)
{
    BackgroundFieldContainerEditor *returnValue;

    newPtr<BackgroundFieldContainerEditor>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}

FieldContainerTransitPtr BackgroundFieldContainerEditorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    BackgroundFieldContainerEditor *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const BackgroundFieldContainerEditor *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr BackgroundFieldContainerEditorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    BackgroundFieldContainerEditor *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const BackgroundFieldContainerEditor *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr BackgroundFieldContainerEditorBase::shallowCopy(void) const
{
    BackgroundFieldContainerEditor *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const BackgroundFieldContainerEditor *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

BackgroundFieldContainerEditorBase::BackgroundFieldContainerEditorBase(void) :
    Inherited()
{
}

BackgroundFieldContainerEditorBase::BackgroundFieldContainerEditorBase(const BackgroundFieldContainerEditorBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

BackgroundFieldContainerEditorBase::~BackgroundFieldContainerEditorBase(void)
{
}




#ifdef OSG_MT_CPTR_ASPECT
void BackgroundFieldContainerEditorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    BackgroundFieldContainerEditor *pThis = static_cast<BackgroundFieldContainerEditor *>(this);

    pThis->execSync(static_cast<BackgroundFieldContainerEditor *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *BackgroundFieldContainerEditorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    BackgroundFieldContainerEditor *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const BackgroundFieldContainerEditor *>(pRefAspect),
                  dynamic_cast<const BackgroundFieldContainerEditor *>(this));

    return returnValue;
}
#endif

void BackgroundFieldContainerEditorBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
