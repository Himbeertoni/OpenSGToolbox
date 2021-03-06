/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala, Dan Guilliams (djkabala/dan.guilliams@gmail.com)*
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
 **     class AgeParticleFunction!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGAgeParticleFunctionBase.h"
#include "OSGAgeParticleFunction.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::AgeParticleFunction
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Real32          AgeParticleFunctionBase::_sfSequenceTime
    The length of time that each image will be used in the sequence.
*/

/*! \var Int32           AgeParticleFunctionBase::_sfSequenceOrder
    The order in which to use images.
    CYCLE: Starts at 0, iterates through each image, then starts back over at 0.
    REVERSE_CYCLE: Same as CYCLE, but reversed. Starts at the last image in the sequence.
    CUSTOM: User defined ordering, as defined by the custom sequence field.
*/

/*! \var UInt32          AgeParticleFunctionBase::_mfCustomSequence
    Used to specify the sequence in which the individual sprites should be 
    drawn in. Any value greater than the number of available sprites will be
    "wrapped around".  For example, if there are 4 sprites in the sequence, 
    and a value in CustomSequence is 6, then the 2nd sprite will be used.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<AgeParticleFunction *>::_type("AgeParticleFunctionPtr", "ParticleFunctionPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(AgeParticleFunction *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           AgeParticleFunction *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           AgeParticleFunction *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void AgeParticleFunctionBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "SequenceTime",
        "The length of time that each image will be used in the sequence.\n",
        SequenceTimeFieldId, SequenceTimeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&AgeParticleFunction::editHandleSequenceTime),
        static_cast<FieldGetMethodSig >(&AgeParticleFunction::getHandleSequenceTime));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "SequenceOrder",
        "The order in which to use images.\n"
        "CYCLE: Starts at 0, iterates through each image, then starts back over at 0.\n"
        "REVERSE_CYCLE: Same as CYCLE, but reversed. Starts at the last image in the sequence.\n"
        "CUSTOM: User defined ordering, as defined by the custom sequence field.\n",
        SequenceOrderFieldId, SequenceOrderFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&AgeParticleFunction::editHandleSequenceOrder),
        static_cast<FieldGetMethodSig >(&AgeParticleFunction::getHandleSequenceOrder));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUInt32::Description(
        MFUInt32::getClassType(),
        "CustomSequence",
        "Used to specify the sequence in which the individual sprites should be \n"
        "drawn in. Any value greater than the number of available sprites will be\n"
        "\"wrapped around\".  For example, if there are 4 sprites in the sequence, \n"
        "and a value in CustomSequence is 6, then the 2nd sprite will be used.\n",
        CustomSequenceFieldId, CustomSequenceFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&AgeParticleFunction::editHandleCustomSequence),
        static_cast<FieldGetMethodSig >(&AgeParticleFunction::getHandleCustomSequence));

    oType.addInitialDesc(pDesc);
}


AgeParticleFunctionBase::TypeObject AgeParticleFunctionBase::_type(
    AgeParticleFunctionBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&AgeParticleFunctionBase::createEmptyLocal),
    AgeParticleFunction::initMethod,
    AgeParticleFunction::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&AgeParticleFunction::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"AgeParticleFunction\"\n"
    "    parent=\"ParticleFunction\"\n"
    "    library=\"ContribParticleSystem\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala, Dan Guilliams (djkabala/dan.guilliams@gmail.com)\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"SequenceTime\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.5f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe length of time that each image will be used in the sequence.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"SequenceOrder\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"AgeParticleFunction::CYCLE\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe order in which to use images.\n"
    "\tCYCLE: Starts at 0, iterates through each image, then starts back over at 0.\n"
    "\tREVERSE_CYCLE: Same as CYCLE, but reversed. Starts at the last image in the sequence.\n"
    "\tCUSTOM: User defined ordering, as defined by the custom sequence field.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"CustomSequence\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tUsed to specify the sequence in which the individual sprites should be \n"
    "\tdrawn in. Any value greater than the number of available sprites will be\n"
    "\t\"wrapped around\".  For example, if there are 4 sprites in the sequence, \n"
    "\tand a value in CustomSequence is 6, then the 2nd sprite will be used.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &AgeParticleFunctionBase::getType(void)
{
    return _type;
}

const FieldContainerType &AgeParticleFunctionBase::getType(void) const
{
    return _type;
}

UInt32 AgeParticleFunctionBase::getContainerSize(void) const
{
    return sizeof(AgeParticleFunction);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *AgeParticleFunctionBase::editSFSequenceTime(void)
{
    editSField(SequenceTimeFieldMask);

    return &_sfSequenceTime;
}

const SFReal32 *AgeParticleFunctionBase::getSFSequenceTime(void) const
{
    return &_sfSequenceTime;
}


SFInt32 *AgeParticleFunctionBase::editSFSequenceOrder(void)
{
    editSField(SequenceOrderFieldMask);

    return &_sfSequenceOrder;
}

const SFInt32 *AgeParticleFunctionBase::getSFSequenceOrder(void) const
{
    return &_sfSequenceOrder;
}


MFUInt32 *AgeParticleFunctionBase::editMFCustomSequence(void)
{
    editMField(CustomSequenceFieldMask, _mfCustomSequence);

    return &_mfCustomSequence;
}

const MFUInt32 *AgeParticleFunctionBase::getMFCustomSequence(void) const
{
    return &_mfCustomSequence;
}






/*------------------------------ access -----------------------------------*/

UInt32 AgeParticleFunctionBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SequenceTimeFieldMask & whichField))
    {
        returnValue += _sfSequenceTime.getBinSize();
    }
    if(FieldBits::NoField != (SequenceOrderFieldMask & whichField))
    {
        returnValue += _sfSequenceOrder.getBinSize();
    }
    if(FieldBits::NoField != (CustomSequenceFieldMask & whichField))
    {
        returnValue += _mfCustomSequence.getBinSize();
    }

    return returnValue;
}

void AgeParticleFunctionBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SequenceTimeFieldMask & whichField))
    {
        _sfSequenceTime.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SequenceOrderFieldMask & whichField))
    {
        _sfSequenceOrder.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CustomSequenceFieldMask & whichField))
    {
        _mfCustomSequence.copyToBin(pMem);
    }
}

void AgeParticleFunctionBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SequenceTimeFieldMask & whichField))
    {
        _sfSequenceTime.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SequenceOrderFieldMask & whichField))
    {
        _sfSequenceOrder.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CustomSequenceFieldMask & whichField))
    {
        _mfCustomSequence.copyFromBin(pMem);
    }
}

//! create a new instance of the class
AgeParticleFunctionTransitPtr AgeParticleFunctionBase::createLocal(BitVector bFlags)
{
    AgeParticleFunctionTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<AgeParticleFunction>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
AgeParticleFunctionTransitPtr AgeParticleFunctionBase::createDependent(BitVector bFlags)
{
    AgeParticleFunctionTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<AgeParticleFunction>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
AgeParticleFunctionTransitPtr AgeParticleFunctionBase::create(void)
{
    AgeParticleFunctionTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<AgeParticleFunction>(tmpPtr);
    }

    return fc;
}

AgeParticleFunction *AgeParticleFunctionBase::createEmptyLocal(BitVector bFlags)
{
    AgeParticleFunction *returnValue;

    newPtr<AgeParticleFunction>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
AgeParticleFunction *AgeParticleFunctionBase::createEmpty(void)
{
    AgeParticleFunction *returnValue;

    newPtr<AgeParticleFunction>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr AgeParticleFunctionBase::shallowCopyLocal(
    BitVector bFlags) const
{
    AgeParticleFunction *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AgeParticleFunction *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr AgeParticleFunctionBase::shallowCopyDependent(
    BitVector bFlags) const
{
    AgeParticleFunction *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AgeParticleFunction *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr AgeParticleFunctionBase::shallowCopy(void) const
{
    AgeParticleFunction *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const AgeParticleFunction *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

AgeParticleFunctionBase::AgeParticleFunctionBase(void) :
    Inherited(),
    _sfSequenceTime           (Real32(0.5f)),
    _sfSequenceOrder          (Int32(AgeParticleFunction::CYCLE)),
    _mfCustomSequence         ()
{
}

AgeParticleFunctionBase::AgeParticleFunctionBase(const AgeParticleFunctionBase &source) :
    Inherited(source),
    _sfSequenceTime           (source._sfSequenceTime           ),
    _sfSequenceOrder          (source._sfSequenceOrder          ),
    _mfCustomSequence         (source._mfCustomSequence         )
{
}


/*-------------------------- destructors ----------------------------------*/

AgeParticleFunctionBase::~AgeParticleFunctionBase(void)
{
}


GetFieldHandlePtr AgeParticleFunctionBase::getHandleSequenceTime    (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfSequenceTime,
             this->getType().getFieldDesc(SequenceTimeFieldId),
             const_cast<AgeParticleFunctionBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AgeParticleFunctionBase::editHandleSequenceTime   (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfSequenceTime,
             this->getType().getFieldDesc(SequenceTimeFieldId),
             this));


    editSField(SequenceTimeFieldMask);

    return returnValue;
}

GetFieldHandlePtr AgeParticleFunctionBase::getHandleSequenceOrder   (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfSequenceOrder,
             this->getType().getFieldDesc(SequenceOrderFieldId),
             const_cast<AgeParticleFunctionBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AgeParticleFunctionBase::editHandleSequenceOrder  (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfSequenceOrder,
             this->getType().getFieldDesc(SequenceOrderFieldId),
             this));


    editSField(SequenceOrderFieldMask);

    return returnValue;
}

GetFieldHandlePtr AgeParticleFunctionBase::getHandleCustomSequence  (void) const
{
    MFUInt32::GetHandlePtr returnValue(
        new  MFUInt32::GetHandle(
             &_mfCustomSequence,
             this->getType().getFieldDesc(CustomSequenceFieldId),
             const_cast<AgeParticleFunctionBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AgeParticleFunctionBase::editHandleCustomSequence (void)
{
    MFUInt32::EditHandlePtr returnValue(
        new  MFUInt32::EditHandle(
             &_mfCustomSequence,
             this->getType().getFieldDesc(CustomSequenceFieldId),
             this));


    editMField(CustomSequenceFieldMask, _mfCustomSequence);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void AgeParticleFunctionBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    AgeParticleFunction *pThis = static_cast<AgeParticleFunction *>(this);

    pThis->execSync(static_cast<AgeParticleFunction *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *AgeParticleFunctionBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    AgeParticleFunction *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const AgeParticleFunction *>(pRefAspect),
                  dynamic_cast<const AgeParticleFunction *>(this));

    return returnValue;
}
#endif

void AgeParticleFunctionBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfCustomSequence.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
