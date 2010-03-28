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
 **     class FieldContainerComboBoxModel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGFieldContainerComboBoxModelBase.h"
#include "OSGFieldContainerComboBoxModel.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FieldContainerComboBoxModel
    A UI FieldContainerComboBoxModel.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var std::string     FieldContainerComboBoxModelBase::_mfFieldContainerTypes
    
*/

/*! \var UInt32          FieldContainerComboBoxModelBase::_mfInternalFieldContainerTypes
    
*/

/*! \var bool            FieldContainerComboBoxModelBase::_sfIncludeAbstract
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<FieldContainerComboBoxModel *>::_type("FieldContainerComboBoxModelPtr", "AbstractComboBoxModelPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(FieldContainerComboBoxModel *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           FieldContainerComboBoxModel *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           FieldContainerComboBoxModel *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void FieldContainerComboBoxModelBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFString::Description(
        MFString::getClassType(),
        "FieldContainerTypes",
        "",
        FieldContainerTypesFieldId, FieldContainerTypesFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FieldContainerComboBoxModel::editHandleFieldContainerTypes),
        static_cast<FieldGetMethodSig >(&FieldContainerComboBoxModel::getHandleFieldContainerTypes));

    oType.addInitialDesc(pDesc);


    pDesc = new MFUInt32::Description(
        MFUInt32::getClassType(),
        "InternalFieldContainerTypes",
        "",
        InternalFieldContainerTypesFieldId, InternalFieldContainerTypesFieldMask,
        true,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FieldContainerComboBoxModel::editHandleInternalFieldContainerTypes),
        static_cast<FieldGetMethodSig >(&FieldContainerComboBoxModel::getHandleInternalFieldContainerTypes));

    oType.addInitialDesc(pDesc);


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "IncludeAbstract",
        "",
        IncludeAbstractFieldId, IncludeAbstractFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FieldContainerComboBoxModel::editHandleIncludeAbstract),
        static_cast<FieldGetMethodSig >(&FieldContainerComboBoxModel::getHandleIncludeAbstract));

    oType.addInitialDesc(pDesc);

}


FieldContainerComboBoxModelBase::TypeObject FieldContainerComboBoxModelBase::_type(
    FieldContainerComboBoxModelBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&FieldContainerComboBoxModelBase::createEmptyLocal),
    FieldContainerComboBoxModel::initMethod,
    FieldContainerComboBoxModel::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&FieldContainerComboBoxModel::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"FieldContainerComboBoxModel\"\n"
    "\tparent=\"AbstractComboBoxModel\"\n"
    "    library=\"ContribUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "A UI FieldContainerComboBoxModel.\n"
    "\t<Field\n"
    "\t\tname=\"FieldContainerTypes\"\n"
    "\t\ttype=\"std::string\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"InternalFieldContainerTypes\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"IncludeAbstract\"\n"
    "\t\ttype=\"bool\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "A UI FieldContainerComboBoxModel.\n"
    );


/*------------------------------ get -----------------------------------*/

FieldContainerType &FieldContainerComboBoxModelBase::getType(void)
{
    return _type;
}

const FieldContainerType &FieldContainerComboBoxModelBase::getType(void) const
{
    return _type;
}

UInt32 FieldContainerComboBoxModelBase::getContainerSize(void) const
{
    return sizeof(FieldContainerComboBoxModel);
}

/*------------------------- decorator get ------------------------------*/


MFString *FieldContainerComboBoxModelBase::editMFFieldContainerTypes(void)
{
    editMField(FieldContainerTypesFieldMask, _mfFieldContainerTypes);

    return &_mfFieldContainerTypes;
}

const MFString *FieldContainerComboBoxModelBase::getMFFieldContainerTypes(void) const
{
    return &_mfFieldContainerTypes;
}


MFUInt32 *FieldContainerComboBoxModelBase::editMFInternalFieldContainerTypes(void)
{
    editMField(InternalFieldContainerTypesFieldMask, _mfInternalFieldContainerTypes);

    return &_mfInternalFieldContainerTypes;
}

const MFUInt32 *FieldContainerComboBoxModelBase::getMFInternalFieldContainerTypes(void) const
{
    return &_mfInternalFieldContainerTypes;
}


SFBool *FieldContainerComboBoxModelBase::editSFIncludeAbstract(void)
{
    editSField(IncludeAbstractFieldMask);

    return &_sfIncludeAbstract;
}

const SFBool *FieldContainerComboBoxModelBase::getSFIncludeAbstract(void) const
{
    return &_sfIncludeAbstract;
}






/*------------------------------ access -----------------------------------*/

UInt32 FieldContainerComboBoxModelBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FieldContainerTypesFieldMask & whichField))
    {
        returnValue += _mfFieldContainerTypes.getBinSize();
    }
    if(FieldBits::NoField != (InternalFieldContainerTypesFieldMask & whichField))
    {
        returnValue += _mfInternalFieldContainerTypes.getBinSize();
    }
    if(FieldBits::NoField != (IncludeAbstractFieldMask & whichField))
    {
        returnValue += _sfIncludeAbstract.getBinSize();
    }

    return returnValue;
}

void FieldContainerComboBoxModelBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FieldContainerTypesFieldMask & whichField))
    {
        _mfFieldContainerTypes.copyToBin(pMem);
    }
    if(FieldBits::NoField != (InternalFieldContainerTypesFieldMask & whichField))
    {
        _mfInternalFieldContainerTypes.copyToBin(pMem);
    }
    if(FieldBits::NoField != (IncludeAbstractFieldMask & whichField))
    {
        _sfIncludeAbstract.copyToBin(pMem);
    }
}

void FieldContainerComboBoxModelBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FieldContainerTypesFieldMask & whichField))
    {
        _mfFieldContainerTypes.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (InternalFieldContainerTypesFieldMask & whichField))
    {
        _mfInternalFieldContainerTypes.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (IncludeAbstractFieldMask & whichField))
    {
        _sfIncludeAbstract.copyFromBin(pMem);
    }
}

//! create a new instance of the class
FieldContainerComboBoxModelTransitPtr FieldContainerComboBoxModelBase::createLocal(BitVector bFlags)
{
    FieldContainerComboBoxModelTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<FieldContainerComboBoxModel>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
FieldContainerComboBoxModelTransitPtr FieldContainerComboBoxModelBase::createDependent(BitVector bFlags)
{
    FieldContainerComboBoxModelTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<FieldContainerComboBoxModel>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
FieldContainerComboBoxModelTransitPtr FieldContainerComboBoxModelBase::create(void)
{
    FieldContainerComboBoxModelTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<FieldContainerComboBoxModel>(tmpPtr);
    }

    return fc;
}

FieldContainerComboBoxModel *FieldContainerComboBoxModelBase::createEmptyLocal(BitVector bFlags)
{
    FieldContainerComboBoxModel *returnValue;

    newPtr<FieldContainerComboBoxModel>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
FieldContainerComboBoxModel *FieldContainerComboBoxModelBase::createEmpty(void)
{
    FieldContainerComboBoxModel *returnValue;

    newPtr<FieldContainerComboBoxModel>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr FieldContainerComboBoxModelBase::shallowCopyLocal(
    BitVector bFlags) const
{
    FieldContainerComboBoxModel *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FieldContainerComboBoxModel *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr FieldContainerComboBoxModelBase::shallowCopyDependent(
    BitVector bFlags) const
{
    FieldContainerComboBoxModel *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FieldContainerComboBoxModel *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr FieldContainerComboBoxModelBase::shallowCopy(void) const
{
    FieldContainerComboBoxModel *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const FieldContainerComboBoxModel *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

FieldContainerComboBoxModelBase::FieldContainerComboBoxModelBase(void) :
    Inherited(),
    _mfFieldContainerTypes    (),
    _mfInternalFieldContainerTypes(),
    _sfIncludeAbstract        (bool(true))
{
}

FieldContainerComboBoxModelBase::FieldContainerComboBoxModelBase(const FieldContainerComboBoxModelBase &source) :
    Inherited(source),
    _mfFieldContainerTypes    (source._mfFieldContainerTypes    ),
    _mfInternalFieldContainerTypes(source._mfInternalFieldContainerTypes),
    _sfIncludeAbstract        (source._sfIncludeAbstract        )
{
}


/*-------------------------- destructors ----------------------------------*/

FieldContainerComboBoxModelBase::~FieldContainerComboBoxModelBase(void)
{
}


GetFieldHandlePtr FieldContainerComboBoxModelBase::getHandleFieldContainerTypes (void) const
{
    MFString::GetHandlePtr returnValue(
        new  MFString::GetHandle(
             &_mfFieldContainerTypes,
             this->getType().getFieldDesc(FieldContainerTypesFieldId),
             const_cast<FieldContainerComboBoxModelBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FieldContainerComboBoxModelBase::editHandleFieldContainerTypes(void)
{
    MFString::EditHandlePtr returnValue(
        new  MFString::EditHandle(
             &_mfFieldContainerTypes,
             this->getType().getFieldDesc(FieldContainerTypesFieldId),
             this));


    editMField(FieldContainerTypesFieldMask, _mfFieldContainerTypes);

    return returnValue;
}

GetFieldHandlePtr FieldContainerComboBoxModelBase::getHandleInternalFieldContainerTypes (void) const
{
    MFUInt32::GetHandlePtr returnValue(
        new  MFUInt32::GetHandle(
             &_mfInternalFieldContainerTypes,
             this->getType().getFieldDesc(InternalFieldContainerTypesFieldId),
             const_cast<FieldContainerComboBoxModelBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FieldContainerComboBoxModelBase::editHandleInternalFieldContainerTypes(void)
{
    MFUInt32::EditHandlePtr returnValue(
        new  MFUInt32::EditHandle(
             &_mfInternalFieldContainerTypes,
             this->getType().getFieldDesc(InternalFieldContainerTypesFieldId),
             this));


    editMField(InternalFieldContainerTypesFieldMask, _mfInternalFieldContainerTypes);

    return returnValue;
}

GetFieldHandlePtr FieldContainerComboBoxModelBase::getHandleIncludeAbstract (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfIncludeAbstract,
             this->getType().getFieldDesc(IncludeAbstractFieldId),
             const_cast<FieldContainerComboBoxModelBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FieldContainerComboBoxModelBase::editHandleIncludeAbstract(void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfIncludeAbstract,
             this->getType().getFieldDesc(IncludeAbstractFieldId),
             this));


    editSField(IncludeAbstractFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void FieldContainerComboBoxModelBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    FieldContainerComboBoxModel *pThis = static_cast<FieldContainerComboBoxModel *>(this);

    pThis->execSync(static_cast<FieldContainerComboBoxModel *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *FieldContainerComboBoxModelBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    FieldContainerComboBoxModel *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const FieldContainerComboBoxModel *>(pRefAspect),
                  dynamic_cast<const FieldContainerComboBoxModel *>(this));

    return returnValue;
}
#endif

void FieldContainerComboBoxModelBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfFieldContainerTypes.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfInternalFieldContainerTypes.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE