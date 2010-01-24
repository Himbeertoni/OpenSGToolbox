/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com), Daniel Guilliams           *
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
 **     class AgeFadeParticleAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGAgeFadeParticleAffectorBase.h"
#include "OSGAgeFadeParticleAffector.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::AgeFadeParticleAffector
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Real32          AgeFadeParticleAffectorBase::_sfFadeInTime
    
*/

/*! \var Real32          AgeFadeParticleAffectorBase::_sfFadeOutTime
    
*/

/*! \var Real32          AgeFadeParticleAffectorBase::_sfFadeToAlpha
    
*/

/*! \var Real32          AgeFadeParticleAffectorBase::_sfStartAlpha
    
*/

/*! \var Real32          AgeFadeParticleAffectorBase::_sfEndAlpha
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<AgeFadeParticleAffector *>::_type("AgeFadeParticleAffectorPtr", "ParticleAffectorPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(AgeFadeParticleAffector *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           AgeFadeParticleAffector *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           AgeFadeParticleAffector *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void AgeFadeParticleAffectorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "FadeInTime",
        "",
        FadeInTimeFieldId, FadeInTimeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&AgeFadeParticleAffector::editHandleFadeInTime),
        static_cast<FieldGetMethodSig >(&AgeFadeParticleAffector::getHandleFadeInTime));

    oType.addInitialDesc(pDesc);


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "FadeOutTime",
        "",
        FadeOutTimeFieldId, FadeOutTimeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&AgeFadeParticleAffector::editHandleFadeOutTime),
        static_cast<FieldGetMethodSig >(&AgeFadeParticleAffector::getHandleFadeOutTime));

    oType.addInitialDesc(pDesc);


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "FadeToAlpha",
        "",
        FadeToAlphaFieldId, FadeToAlphaFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&AgeFadeParticleAffector::editHandleFadeToAlpha),
        static_cast<FieldGetMethodSig >(&AgeFadeParticleAffector::getHandleFadeToAlpha));

    oType.addInitialDesc(pDesc);


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "StartAlpha",
        "",
        StartAlphaFieldId, StartAlphaFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&AgeFadeParticleAffector::editHandleStartAlpha),
        static_cast<FieldGetMethodSig >(&AgeFadeParticleAffector::getHandleStartAlpha));

    oType.addInitialDesc(pDesc);


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "EndAlpha",
        "",
        EndAlphaFieldId, EndAlphaFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&AgeFadeParticleAffector::editHandleEndAlpha),
        static_cast<FieldGetMethodSig >(&AgeFadeParticleAffector::getHandleEndAlpha));

    oType.addInitialDesc(pDesc);

}


AgeFadeParticleAffectorBase::TypeObject AgeFadeParticleAffectorBase::_type(
    AgeFadeParticleAffectorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&AgeFadeParticleAffectorBase::createEmptyLocal),
    AgeFadeParticleAffector::initMethod,
    AgeFadeParticleAffector::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&AgeFadeParticleAffector::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"AgeFadeParticleAffector\"\n"
    "\tparent=\"ParticleAffector\"\n"
    "    library=\"ContribParticleSystem\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com), Daniel Guilliams           \"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"FadeInTime\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"1.0f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"FadeOutTime\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"1.0f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"FadeToAlpha\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"1.0f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"StartAlpha\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"0.0f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"EndAlpha\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"0.0f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );


/*------------------------------ get -----------------------------------*/

FieldContainerType &AgeFadeParticleAffectorBase::getType(void)
{
    return _type;
}

const FieldContainerType &AgeFadeParticleAffectorBase::getType(void) const
{
    return _type;
}

UInt32 AgeFadeParticleAffectorBase::getContainerSize(void) const
{
    return sizeof(AgeFadeParticleAffector);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *AgeFadeParticleAffectorBase::editSFFadeInTime(void)
{
    editSField(FadeInTimeFieldMask);

    return &_sfFadeInTime;
}

const SFReal32 *AgeFadeParticleAffectorBase::getSFFadeInTime(void) const
{
    return &_sfFadeInTime;
}


SFReal32 *AgeFadeParticleAffectorBase::editSFFadeOutTime(void)
{
    editSField(FadeOutTimeFieldMask);

    return &_sfFadeOutTime;
}

const SFReal32 *AgeFadeParticleAffectorBase::getSFFadeOutTime(void) const
{
    return &_sfFadeOutTime;
}


SFReal32 *AgeFadeParticleAffectorBase::editSFFadeToAlpha(void)
{
    editSField(FadeToAlphaFieldMask);

    return &_sfFadeToAlpha;
}

const SFReal32 *AgeFadeParticleAffectorBase::getSFFadeToAlpha(void) const
{
    return &_sfFadeToAlpha;
}


SFReal32 *AgeFadeParticleAffectorBase::editSFStartAlpha(void)
{
    editSField(StartAlphaFieldMask);

    return &_sfStartAlpha;
}

const SFReal32 *AgeFadeParticleAffectorBase::getSFStartAlpha(void) const
{
    return &_sfStartAlpha;
}


SFReal32 *AgeFadeParticleAffectorBase::editSFEndAlpha(void)
{
    editSField(EndAlphaFieldMask);

    return &_sfEndAlpha;
}

const SFReal32 *AgeFadeParticleAffectorBase::getSFEndAlpha(void) const
{
    return &_sfEndAlpha;
}






/*------------------------------ access -----------------------------------*/

UInt32 AgeFadeParticleAffectorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FadeInTimeFieldMask & whichField))
    {
        returnValue += _sfFadeInTime.getBinSize();
    }
    if(FieldBits::NoField != (FadeOutTimeFieldMask & whichField))
    {
        returnValue += _sfFadeOutTime.getBinSize();
    }
    if(FieldBits::NoField != (FadeToAlphaFieldMask & whichField))
    {
        returnValue += _sfFadeToAlpha.getBinSize();
    }
    if(FieldBits::NoField != (StartAlphaFieldMask & whichField))
    {
        returnValue += _sfStartAlpha.getBinSize();
    }
    if(FieldBits::NoField != (EndAlphaFieldMask & whichField))
    {
        returnValue += _sfEndAlpha.getBinSize();
    }

    return returnValue;
}

void AgeFadeParticleAffectorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FadeInTimeFieldMask & whichField))
    {
        _sfFadeInTime.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FadeOutTimeFieldMask & whichField))
    {
        _sfFadeOutTime.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FadeToAlphaFieldMask & whichField))
    {
        _sfFadeToAlpha.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StartAlphaFieldMask & whichField))
    {
        _sfStartAlpha.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EndAlphaFieldMask & whichField))
    {
        _sfEndAlpha.copyToBin(pMem);
    }
}

void AgeFadeParticleAffectorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FadeInTimeFieldMask & whichField))
    {
        _sfFadeInTime.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FadeOutTimeFieldMask & whichField))
    {
        _sfFadeOutTime.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FadeToAlphaFieldMask & whichField))
    {
        _sfFadeToAlpha.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StartAlphaFieldMask & whichField))
    {
        _sfStartAlpha.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EndAlphaFieldMask & whichField))
    {
        _sfEndAlpha.copyFromBin(pMem);
    }
}

//! create a new instance of the class
AgeFadeParticleAffectorTransitPtr AgeFadeParticleAffectorBase::createLocal(BitVector bFlags)
{
    AgeFadeParticleAffectorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<AgeFadeParticleAffector>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
AgeFadeParticleAffectorTransitPtr AgeFadeParticleAffectorBase::createDependent(BitVector bFlags)
{
    AgeFadeParticleAffectorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<AgeFadeParticleAffector>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
AgeFadeParticleAffectorTransitPtr AgeFadeParticleAffectorBase::create(void)
{
    AgeFadeParticleAffectorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<AgeFadeParticleAffector>(tmpPtr);
    }

    return fc;
}

AgeFadeParticleAffector *AgeFadeParticleAffectorBase::createEmptyLocal(BitVector bFlags)
{
    AgeFadeParticleAffector *returnValue;

    newPtr<AgeFadeParticleAffector>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
AgeFadeParticleAffector *AgeFadeParticleAffectorBase::createEmpty(void)
{
    AgeFadeParticleAffector *returnValue;

    newPtr<AgeFadeParticleAffector>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr AgeFadeParticleAffectorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    AgeFadeParticleAffector *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AgeFadeParticleAffector *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr AgeFadeParticleAffectorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    AgeFadeParticleAffector *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AgeFadeParticleAffector *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr AgeFadeParticleAffectorBase::shallowCopy(void) const
{
    AgeFadeParticleAffector *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const AgeFadeParticleAffector *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

AgeFadeParticleAffectorBase::AgeFadeParticleAffectorBase(void) :
    Inherited(),
    _sfFadeInTime             (Real32(1.0f)),
    _sfFadeOutTime            (Real32(1.0f)),
    _sfFadeToAlpha            (Real32(1.0f)),
    _sfStartAlpha             (Real32(0.0f)),
    _sfEndAlpha               (Real32(0.0f))
{
}

AgeFadeParticleAffectorBase::AgeFadeParticleAffectorBase(const AgeFadeParticleAffectorBase &source) :
    Inherited(source),
    _sfFadeInTime             (source._sfFadeInTime             ),
    _sfFadeOutTime            (source._sfFadeOutTime            ),
    _sfFadeToAlpha            (source._sfFadeToAlpha            ),
    _sfStartAlpha             (source._sfStartAlpha             ),
    _sfEndAlpha               (source._sfEndAlpha               )
{
}


/*-------------------------- destructors ----------------------------------*/

AgeFadeParticleAffectorBase::~AgeFadeParticleAffectorBase(void)
{
}


GetFieldHandlePtr AgeFadeParticleAffectorBase::getHandleFadeInTime      (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfFadeInTime,
             this->getType().getFieldDesc(FadeInTimeFieldId),
             const_cast<AgeFadeParticleAffectorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AgeFadeParticleAffectorBase::editHandleFadeInTime     (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfFadeInTime,
             this->getType().getFieldDesc(FadeInTimeFieldId),
             this));


    editSField(FadeInTimeFieldMask);

    return returnValue;
}

GetFieldHandlePtr AgeFadeParticleAffectorBase::getHandleFadeOutTime     (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfFadeOutTime,
             this->getType().getFieldDesc(FadeOutTimeFieldId),
             const_cast<AgeFadeParticleAffectorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AgeFadeParticleAffectorBase::editHandleFadeOutTime    (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfFadeOutTime,
             this->getType().getFieldDesc(FadeOutTimeFieldId),
             this));


    editSField(FadeOutTimeFieldMask);

    return returnValue;
}

GetFieldHandlePtr AgeFadeParticleAffectorBase::getHandleFadeToAlpha     (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfFadeToAlpha,
             this->getType().getFieldDesc(FadeToAlphaFieldId),
             const_cast<AgeFadeParticleAffectorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AgeFadeParticleAffectorBase::editHandleFadeToAlpha    (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfFadeToAlpha,
             this->getType().getFieldDesc(FadeToAlphaFieldId),
             this));


    editSField(FadeToAlphaFieldMask);

    return returnValue;
}

GetFieldHandlePtr AgeFadeParticleAffectorBase::getHandleStartAlpha      (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfStartAlpha,
             this->getType().getFieldDesc(StartAlphaFieldId),
             const_cast<AgeFadeParticleAffectorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AgeFadeParticleAffectorBase::editHandleStartAlpha     (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfStartAlpha,
             this->getType().getFieldDesc(StartAlphaFieldId),
             this));


    editSField(StartAlphaFieldMask);

    return returnValue;
}

GetFieldHandlePtr AgeFadeParticleAffectorBase::getHandleEndAlpha        (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfEndAlpha,
             this->getType().getFieldDesc(EndAlphaFieldId),
             const_cast<AgeFadeParticleAffectorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AgeFadeParticleAffectorBase::editHandleEndAlpha       (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfEndAlpha,
             this->getType().getFieldDesc(EndAlphaFieldId),
             this));


    editSField(EndAlphaFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void AgeFadeParticleAffectorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    AgeFadeParticleAffector *pThis = static_cast<AgeFadeParticleAffector *>(this);

    pThis->execSync(static_cast<AgeFadeParticleAffector *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *AgeFadeParticleAffectorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    AgeFadeParticleAffector *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const AgeFadeParticleAffector *>(pRefAspect),
                  dynamic_cast<const AgeFadeParticleAffector *>(this));

    return returnValue;
}
#endif

void AgeFadeParticleAffectorBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
