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
 **     class MultiParticleSystemAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGParticleSystem.h"          // Systems Class

#include "OSGMultiParticleSystemAffectorBase.h"
#include "OSGMultiParticleSystemAffector.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MultiParticleSystemAffector
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var ParticleSystem * MultiParticleSystemAffectorBase::_mfSystems
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<MultiParticleSystemAffector *>::_type("MultiParticleSystemAffectorPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(MultiParticleSystemAffector *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           MultiParticleSystemAffector *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           MultiParticleSystemAffector *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void MultiParticleSystemAffectorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecParticleSystemPtr::Description(
        MFUnrecParticleSystemPtr::getClassType(),
        "Systems",
        "",
        SystemsFieldId, SystemsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MultiParticleSystemAffector::editHandleSystems),
        static_cast<FieldGetMethodSig >(&MultiParticleSystemAffector::getHandleSystems));

    oType.addInitialDesc(pDesc);

}


MultiParticleSystemAffectorBase::TypeObject MultiParticleSystemAffectorBase::_type(
    MultiParticleSystemAffectorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    MultiParticleSystemAffector::initMethod,
    MultiParticleSystemAffector::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&MultiParticleSystemAffector::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"MultiParticleSystemAffector\"\n"
    "\tparent=\"AttachmentContainer\"\n"
    "    library=\"ContribParticleSystem\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"Systems\"\n"
    "\t\ttype=\"ParticleSystem\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );


/*------------------------------ get -----------------------------------*/

FieldContainerType &MultiParticleSystemAffectorBase::getType(void)
{
    return _type;
}

const FieldContainerType &MultiParticleSystemAffectorBase::getType(void) const
{
    return _type;
}

UInt32 MultiParticleSystemAffectorBase::getContainerSize(void) const
{
    return sizeof(MultiParticleSystemAffector);
}

/*------------------------- decorator get ------------------------------*/


//! Get the MultiParticleSystemAffector::_mfSystems field.
const MFUnrecParticleSystemPtr *MultiParticleSystemAffectorBase::getMFSystems(void) const
{
    return &_mfSystems;
}

MFUnrecParticleSystemPtr *MultiParticleSystemAffectorBase::editMFSystems        (void)
{
    editMField(SystemsFieldMask, _mfSystems);

    return &_mfSystems;
}



void MultiParticleSystemAffectorBase::pushToSystems(ParticleSystem * const value)
{
    editMField(SystemsFieldMask, _mfSystems);

    _mfSystems.push_back(value);
}

void MultiParticleSystemAffectorBase::assignSystems  (const MFUnrecParticleSystemPtr &value)
{
    MFUnrecParticleSystemPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecParticleSystemPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<MultiParticleSystemAffector *>(this)->clearSystems();

    while(elemIt != elemEnd)
    {
        this->pushToSystems(*elemIt);

        ++elemIt;
    }
}

void MultiParticleSystemAffectorBase::removeFromSystems(UInt32 uiIndex)
{
    if(uiIndex < _mfSystems.size())
    {
        editMField(SystemsFieldMask, _mfSystems);

        _mfSystems.erase(uiIndex);
    }
}

void MultiParticleSystemAffectorBase::removeObjFromSystems(ParticleSystem * const value)
{
    Int32 iElemIdx = _mfSystems.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(SystemsFieldMask, _mfSystems);

        _mfSystems.erase(iElemIdx);
    }
}
void MultiParticleSystemAffectorBase::clearSystems(void)
{
    editMField(SystemsFieldMask, _mfSystems);


    _mfSystems.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 MultiParticleSystemAffectorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SystemsFieldMask & whichField))
    {
        returnValue += _mfSystems.getBinSize();
    }

    return returnValue;
}

void MultiParticleSystemAffectorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SystemsFieldMask & whichField))
    {
        _mfSystems.copyToBin(pMem);
    }
}

void MultiParticleSystemAffectorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SystemsFieldMask & whichField))
    {
        _mfSystems.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

MultiParticleSystemAffectorBase::MultiParticleSystemAffectorBase(void) :
    Inherited(),
    _mfSystems                ()
{
}

MultiParticleSystemAffectorBase::MultiParticleSystemAffectorBase(const MultiParticleSystemAffectorBase &source) :
    Inherited(source),
    _mfSystems                ()
{
}


/*-------------------------- destructors ----------------------------------*/

MultiParticleSystemAffectorBase::~MultiParticleSystemAffectorBase(void)
{
}

void MultiParticleSystemAffectorBase::onCreate(const MultiParticleSystemAffector *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        MultiParticleSystemAffector *pThis = static_cast<MultiParticleSystemAffector *>(this);

        MFUnrecParticleSystemPtr::const_iterator SystemsIt  =
            source->_mfSystems.begin();
        MFUnrecParticleSystemPtr::const_iterator SystemsEnd =
            source->_mfSystems.end  ();

        while(SystemsIt != SystemsEnd)
        {
            pThis->pushToSystems(*SystemsIt);

            ++SystemsIt;
        }
    }
}

GetFieldHandlePtr MultiParticleSystemAffectorBase::getHandleSystems         (void) const
{
    MFUnrecParticleSystemPtr::GetHandlePtr returnValue(
        new  MFUnrecParticleSystemPtr::GetHandle(
             &_mfSystems,
             this->getType().getFieldDesc(SystemsFieldId),
             const_cast<MultiParticleSystemAffectorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MultiParticleSystemAffectorBase::editHandleSystems        (void)
{
    MFUnrecParticleSystemPtr::EditHandlePtr returnValue(
        new  MFUnrecParticleSystemPtr::EditHandle(
             &_mfSystems,
             this->getType().getFieldDesc(SystemsFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&MultiParticleSystemAffector::pushToSystems,
                    static_cast<MultiParticleSystemAffector *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&MultiParticleSystemAffector::removeFromSystems,
                    static_cast<MultiParticleSystemAffector *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&MultiParticleSystemAffector::removeObjFromSystems,
                    static_cast<MultiParticleSystemAffector *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&MultiParticleSystemAffector::clearSystems,
                    static_cast<MultiParticleSystemAffector *>(this)));

    editMField(SystemsFieldMask, _mfSystems);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void MultiParticleSystemAffectorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    MultiParticleSystemAffector *pThis = static_cast<MultiParticleSystemAffector *>(this);

    pThis->execSync(static_cast<MultiParticleSystemAffector *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void MultiParticleSystemAffectorBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<MultiParticleSystemAffector *>(this)->clearSystems();


}


OSG_END_NAMESPACE
