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
 **     class ParticleCollisionEvent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGParticleSystem.h"          // PrimarySystem Class

#include "OSGParticleCollisionEventBase.h"
#include "OSGParticleCollisionEvent.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ParticleCollisionEvent
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var ParticleSystem * ParticleCollisionEventBase::_sfPrimarySystem
    
*/

/*! \var UInt32          ParticleCollisionEventBase::_sfPrimaryParticleIndex
    
*/

/*! \var ParticleSystem * ParticleCollisionEventBase::_sfSecondarySystem
    
*/

/*! \var UInt32          ParticleCollisionEventBase::_sfSecondaryParticleIndex
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ParticleCollisionEvent *>::_type("ParticleCollisionEventPtr", "EventPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ParticleCollisionEvent *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ParticleCollisionEvent *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ParticleCollisionEvent *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ParticleCollisionEventBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecParticleSystemPtr::Description(
        SFUnrecParticleSystemPtr::getClassType(),
        "PrimarySystem",
        "",
        PrimarySystemFieldId, PrimarySystemFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ParticleCollisionEvent::editHandlePrimarySystem),
        static_cast<FieldGetMethodSig >(&ParticleCollisionEvent::getHandlePrimarySystem));

    oType.addInitialDesc(pDesc);


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "PrimaryParticleIndex",
        "",
        PrimaryParticleIndexFieldId, PrimaryParticleIndexFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ParticleCollisionEvent::editHandlePrimaryParticleIndex),
        static_cast<FieldGetMethodSig >(&ParticleCollisionEvent::getHandlePrimaryParticleIndex));

    oType.addInitialDesc(pDesc);


    pDesc = new SFUnrecParticleSystemPtr::Description(
        SFUnrecParticleSystemPtr::getClassType(),
        "SecondarySystem",
        "",
        SecondarySystemFieldId, SecondarySystemFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ParticleCollisionEvent::editHandleSecondarySystem),
        static_cast<FieldGetMethodSig >(&ParticleCollisionEvent::getHandleSecondarySystem));

    oType.addInitialDesc(pDesc);


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "SecondaryParticleIndex",
        "",
        SecondaryParticleIndexFieldId, SecondaryParticleIndexFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ParticleCollisionEvent::editHandleSecondaryParticleIndex),
        static_cast<FieldGetMethodSig >(&ParticleCollisionEvent::getHandleSecondaryParticleIndex));

    oType.addInitialDesc(pDesc);

}


ParticleCollisionEventBase::TypeObject ParticleCollisionEventBase::_type(
    ParticleCollisionEventBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ParticleCollisionEventBase::createEmptyLocal),
    ParticleCollisionEvent::initMethod,
    ParticleCollisionEvent::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ParticleCollisionEvent::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ParticleCollisionEvent\"\n"
    "\tparent=\"Event\"\n"
    "    library=\"ContribParticleSystem\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"PrimarySystem\"\n"
    "\t\ttype=\"ParticleSystem\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "        defaultValue=\"NULL\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"PrimaryParticleIndex\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "        defaultValue=\"0\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"SecondarySystem\"\n"
    "\t\ttype=\"ParticleSystem\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "        defaultValue=\"NULL\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"SecondaryParticleIndex\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "        defaultValue=\"0\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );


/*------------------------------ get -----------------------------------*/

FieldContainerType &ParticleCollisionEventBase::getType(void)
{
    return _type;
}

const FieldContainerType &ParticleCollisionEventBase::getType(void) const
{
    return _type;
}

UInt32 ParticleCollisionEventBase::getContainerSize(void) const
{
    return sizeof(ParticleCollisionEvent);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ParticleCollisionEvent::_sfPrimarySystem field.
const SFUnrecParticleSystemPtr *ParticleCollisionEventBase::getSFPrimarySystem(void) const
{
    return &_sfPrimarySystem;
}

SFUnrecParticleSystemPtr *ParticleCollisionEventBase::editSFPrimarySystem  (void)
{
    editSField(PrimarySystemFieldMask);

    return &_sfPrimarySystem;
}

SFUInt32 *ParticleCollisionEventBase::editSFPrimaryParticleIndex(void)
{
    editSField(PrimaryParticleIndexFieldMask);

    return &_sfPrimaryParticleIndex;
}

const SFUInt32 *ParticleCollisionEventBase::getSFPrimaryParticleIndex(void) const
{
    return &_sfPrimaryParticleIndex;
}


//! Get the ParticleCollisionEvent::_sfSecondarySystem field.
const SFUnrecParticleSystemPtr *ParticleCollisionEventBase::getSFSecondarySystem(void) const
{
    return &_sfSecondarySystem;
}

SFUnrecParticleSystemPtr *ParticleCollisionEventBase::editSFSecondarySystem(void)
{
    editSField(SecondarySystemFieldMask);

    return &_sfSecondarySystem;
}

SFUInt32 *ParticleCollisionEventBase::editSFSecondaryParticleIndex(void)
{
    editSField(SecondaryParticleIndexFieldMask);

    return &_sfSecondaryParticleIndex;
}

const SFUInt32 *ParticleCollisionEventBase::getSFSecondaryParticleIndex(void) const
{
    return &_sfSecondaryParticleIndex;
}






/*------------------------------ access -----------------------------------*/

UInt32 ParticleCollisionEventBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PrimarySystemFieldMask & whichField))
    {
        returnValue += _sfPrimarySystem.getBinSize();
    }
    if(FieldBits::NoField != (PrimaryParticleIndexFieldMask & whichField))
    {
        returnValue += _sfPrimaryParticleIndex.getBinSize();
    }
    if(FieldBits::NoField != (SecondarySystemFieldMask & whichField))
    {
        returnValue += _sfSecondarySystem.getBinSize();
    }
    if(FieldBits::NoField != (SecondaryParticleIndexFieldMask & whichField))
    {
        returnValue += _sfSecondaryParticleIndex.getBinSize();
    }

    return returnValue;
}

void ParticleCollisionEventBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PrimarySystemFieldMask & whichField))
    {
        _sfPrimarySystem.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PrimaryParticleIndexFieldMask & whichField))
    {
        _sfPrimaryParticleIndex.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SecondarySystemFieldMask & whichField))
    {
        _sfSecondarySystem.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SecondaryParticleIndexFieldMask & whichField))
    {
        _sfSecondaryParticleIndex.copyToBin(pMem);
    }
}

void ParticleCollisionEventBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PrimarySystemFieldMask & whichField))
    {
        _sfPrimarySystem.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PrimaryParticleIndexFieldMask & whichField))
    {
        _sfPrimaryParticleIndex.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SecondarySystemFieldMask & whichField))
    {
        _sfSecondarySystem.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SecondaryParticleIndexFieldMask & whichField))
    {
        _sfSecondaryParticleIndex.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ParticleCollisionEventTransitPtr ParticleCollisionEventBase::createLocal(BitVector bFlags)
{
    ParticleCollisionEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ParticleCollisionEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ParticleCollisionEventTransitPtr ParticleCollisionEventBase::createDependent(BitVector bFlags)
{
    ParticleCollisionEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ParticleCollisionEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ParticleCollisionEventTransitPtr ParticleCollisionEventBase::create(void)
{
    ParticleCollisionEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ParticleCollisionEvent>(tmpPtr);
    }

    return fc;
}

ParticleCollisionEvent *ParticleCollisionEventBase::createEmptyLocal(BitVector bFlags)
{
    ParticleCollisionEvent *returnValue;

    newPtr<ParticleCollisionEvent>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ParticleCollisionEvent *ParticleCollisionEventBase::createEmpty(void)
{
    ParticleCollisionEvent *returnValue;

    newPtr<ParticleCollisionEvent>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ParticleCollisionEventBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ParticleCollisionEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ParticleCollisionEvent *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ParticleCollisionEventBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ParticleCollisionEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ParticleCollisionEvent *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ParticleCollisionEventBase::shallowCopy(void) const
{
    ParticleCollisionEvent *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ParticleCollisionEvent *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ParticleCollisionEventBase::ParticleCollisionEventBase(void) :
    Inherited(),
    _sfPrimarySystem          (NULL),
    _sfPrimaryParticleIndex   (UInt32(0)),
    _sfSecondarySystem        (NULL),
    _sfSecondaryParticleIndex (UInt32(0))
{
}

ParticleCollisionEventBase::ParticleCollisionEventBase(const ParticleCollisionEventBase &source) :
    Inherited(source),
    _sfPrimarySystem          (NULL),
    _sfPrimaryParticleIndex   (source._sfPrimaryParticleIndex   ),
    _sfSecondarySystem        (NULL),
    _sfSecondaryParticleIndex (source._sfSecondaryParticleIndex )
{
}


/*-------------------------- destructors ----------------------------------*/

ParticleCollisionEventBase::~ParticleCollisionEventBase(void)
{
}

void ParticleCollisionEventBase::onCreate(const ParticleCollisionEvent *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ParticleCollisionEvent *pThis = static_cast<ParticleCollisionEvent *>(this);

        pThis->setPrimarySystem(source->getPrimarySystem());

        pThis->setSecondarySystem(source->getSecondarySystem());
    }
}

GetFieldHandlePtr ParticleCollisionEventBase::getHandlePrimarySystem   (void) const
{
    SFUnrecParticleSystemPtr::GetHandlePtr returnValue(
        new  SFUnrecParticleSystemPtr::GetHandle(
             &_sfPrimarySystem,
             this->getType().getFieldDesc(PrimarySystemFieldId),
             const_cast<ParticleCollisionEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ParticleCollisionEventBase::editHandlePrimarySystem  (void)
{
    SFUnrecParticleSystemPtr::EditHandlePtr returnValue(
        new  SFUnrecParticleSystemPtr::EditHandle(
             &_sfPrimarySystem,
             this->getType().getFieldDesc(PrimarySystemFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ParticleCollisionEvent::setPrimarySystem,
                    static_cast<ParticleCollisionEvent *>(this), _1));

    editSField(PrimarySystemFieldMask);

    return returnValue;
}

GetFieldHandlePtr ParticleCollisionEventBase::getHandlePrimaryParticleIndex (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfPrimaryParticleIndex,
             this->getType().getFieldDesc(PrimaryParticleIndexFieldId),
             const_cast<ParticleCollisionEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ParticleCollisionEventBase::editHandlePrimaryParticleIndex(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfPrimaryParticleIndex,
             this->getType().getFieldDesc(PrimaryParticleIndexFieldId),
             this));


    editSField(PrimaryParticleIndexFieldMask);

    return returnValue;
}

GetFieldHandlePtr ParticleCollisionEventBase::getHandleSecondarySystem (void) const
{
    SFUnrecParticleSystemPtr::GetHandlePtr returnValue(
        new  SFUnrecParticleSystemPtr::GetHandle(
             &_sfSecondarySystem,
             this->getType().getFieldDesc(SecondarySystemFieldId),
             const_cast<ParticleCollisionEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ParticleCollisionEventBase::editHandleSecondarySystem(void)
{
    SFUnrecParticleSystemPtr::EditHandlePtr returnValue(
        new  SFUnrecParticleSystemPtr::EditHandle(
             &_sfSecondarySystem,
             this->getType().getFieldDesc(SecondarySystemFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ParticleCollisionEvent::setSecondarySystem,
                    static_cast<ParticleCollisionEvent *>(this), _1));

    editSField(SecondarySystemFieldMask);

    return returnValue;
}

GetFieldHandlePtr ParticleCollisionEventBase::getHandleSecondaryParticleIndex (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfSecondaryParticleIndex,
             this->getType().getFieldDesc(SecondaryParticleIndexFieldId),
             const_cast<ParticleCollisionEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ParticleCollisionEventBase::editHandleSecondaryParticleIndex(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfSecondaryParticleIndex,
             this->getType().getFieldDesc(SecondaryParticleIndexFieldId),
             this));


    editSField(SecondaryParticleIndexFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ParticleCollisionEventBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ParticleCollisionEvent *pThis = static_cast<ParticleCollisionEvent *>(this);

    pThis->execSync(static_cast<ParticleCollisionEvent *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ParticleCollisionEventBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ParticleCollisionEvent *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ParticleCollisionEvent *>(pRefAspect),
                  dynamic_cast<const ParticleCollisionEvent *>(this));

    return returnValue;
}
#endif

void ParticleCollisionEventBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ParticleCollisionEvent *>(this)->setPrimarySystem(NULL);

    static_cast<ParticleCollisionEvent *>(this)->setSecondarySystem(NULL);


}


OSG_END_NAMESPACE
