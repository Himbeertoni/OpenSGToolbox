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
 **     class FieldEditorComponent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGFieldContainer.h"          // EditingFC Class

#include "OSGFieldEditorComponentBase.h"
#include "OSGFieldEditorComponent.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FieldEditorComponent
    A UI Panel.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var FieldContainer * FieldEditorComponentBase::_sfEditingFC
    
*/

/*! \var UInt32          FieldEditorComponentBase::_sfEditingFieldId
    
*/

/*! \var UInt32          FieldEditorComponentBase::_sfEditingFieldIndex
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<FieldEditorComponent *>::_type("FieldEditorComponentPtr", "ComponentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(FieldEditorComponent *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           FieldEditorComponent *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           FieldEditorComponent *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void FieldEditorComponentBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecFieldContainerPtr::Description(
        SFUnrecFieldContainerPtr::getClassType(),
        "EditingFC",
        "",
        EditingFCFieldId, EditingFCFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FieldEditorComponent::editHandleEditingFC),
        static_cast<FieldGetMethodSig >(&FieldEditorComponent::getHandleEditingFC));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "EditingFieldId",
        "",
        EditingFieldIdFieldId, EditingFieldIdFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FieldEditorComponent::editHandleEditingFieldId),
        static_cast<FieldGetMethodSig >(&FieldEditorComponent::getHandleEditingFieldId));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "EditingFieldIndex",
        "",
        EditingFieldIndexFieldId, EditingFieldIndexFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FieldEditorComponent::editHandleEditingFieldIndex),
        static_cast<FieldGetMethodSig >(&FieldEditorComponent::getHandleEditingFieldIndex));

    oType.addInitialDesc(pDesc);
}


FieldEditorComponentBase::TypeObject FieldEditorComponentBase::_type(
    FieldEditorComponentBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    FieldEditorComponent::initMethod,
    FieldEditorComponent::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&FieldEditorComponent::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"FieldEditorComponent\"\n"
    "\tparent=\"ComponentContainer\"\n"
    "    library=\"ContribFieldContainerEditor\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "A UI Panel.\n"
    "\t<Field\n"
    "\t\tname=\"EditingFC\"\n"
    "\t\ttype=\"FieldContainer\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"EditingFieldId\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"EditingFieldIndex\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "A UI Panel.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &FieldEditorComponentBase::getType(void)
{
    return _type;
}

const FieldContainerType &FieldEditorComponentBase::getType(void) const
{
    return _type;
}

UInt32 FieldEditorComponentBase::getContainerSize(void) const
{
    return sizeof(FieldEditorComponent);
}

/*------------------------- decorator get ------------------------------*/


//! Get the FieldEditorComponent::_sfEditingFC field.
const SFUnrecFieldContainerPtr *FieldEditorComponentBase::getSFEditingFC(void) const
{
    return &_sfEditingFC;
}

SFUnrecFieldContainerPtr *FieldEditorComponentBase::editSFEditingFC      (void)
{
    editSField(EditingFCFieldMask);

    return &_sfEditingFC;
}

SFUInt32 *FieldEditorComponentBase::editSFEditingFieldId(void)
{
    editSField(EditingFieldIdFieldMask);

    return &_sfEditingFieldId;
}

const SFUInt32 *FieldEditorComponentBase::getSFEditingFieldId(void) const
{
    return &_sfEditingFieldId;
}


SFUInt32 *FieldEditorComponentBase::editSFEditingFieldIndex(void)
{
    editSField(EditingFieldIndexFieldMask);

    return &_sfEditingFieldIndex;
}

const SFUInt32 *FieldEditorComponentBase::getSFEditingFieldIndex(void) const
{
    return &_sfEditingFieldIndex;
}






/*------------------------------ access -----------------------------------*/

UInt32 FieldEditorComponentBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EditingFCFieldMask & whichField))
    {
        returnValue += _sfEditingFC.getBinSize();
    }
    if(FieldBits::NoField != (EditingFieldIdFieldMask & whichField))
    {
        returnValue += _sfEditingFieldId.getBinSize();
    }
    if(FieldBits::NoField != (EditingFieldIndexFieldMask & whichField))
    {
        returnValue += _sfEditingFieldIndex.getBinSize();
    }

    return returnValue;
}

void FieldEditorComponentBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EditingFCFieldMask & whichField))
    {
        _sfEditingFC.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EditingFieldIdFieldMask & whichField))
    {
        _sfEditingFieldId.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EditingFieldIndexFieldMask & whichField))
    {
        _sfEditingFieldIndex.copyToBin(pMem);
    }
}

void FieldEditorComponentBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EditingFCFieldMask & whichField))
    {
        _sfEditingFC.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EditingFieldIdFieldMask & whichField))
    {
        _sfEditingFieldId.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EditingFieldIndexFieldMask & whichField))
    {
        _sfEditingFieldIndex.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

FieldEditorComponentBase::FieldEditorComponentBase(void) :
    Inherited(),
    _sfEditingFC              (NULL),
    _sfEditingFieldId         (UInt32(0)),
    _sfEditingFieldIndex      (UInt32(0))
{
}

FieldEditorComponentBase::FieldEditorComponentBase(const FieldEditorComponentBase &source) :
    Inherited(source),
    _sfEditingFC              (NULL),
    _sfEditingFieldId         (source._sfEditingFieldId         ),
    _sfEditingFieldIndex      (source._sfEditingFieldIndex      )
{
}


/*-------------------------- destructors ----------------------------------*/

FieldEditorComponentBase::~FieldEditorComponentBase(void)
{
}

void FieldEditorComponentBase::onCreate(const FieldEditorComponent *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        FieldEditorComponent *pThis = static_cast<FieldEditorComponent *>(this);

        pThis->setEditingFC(source->getEditingFC());
    }
}

GetFieldHandlePtr FieldEditorComponentBase::getHandleEditingFC       (void) const
{
    SFUnrecFieldContainerPtr::GetHandlePtr returnValue(
        new  SFUnrecFieldContainerPtr::GetHandle(
             &_sfEditingFC,
             this->getType().getFieldDesc(EditingFCFieldId),
             const_cast<FieldEditorComponentBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FieldEditorComponentBase::editHandleEditingFC      (void)
{
    SFUnrecFieldContainerPtr::EditHandlePtr returnValue(
        new  SFUnrecFieldContainerPtr::EditHandle(
             &_sfEditingFC,
             this->getType().getFieldDesc(EditingFCFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&FieldEditorComponent::setEditingFC,
                    static_cast<FieldEditorComponent *>(this), _1));

    editSField(EditingFCFieldMask);

    return returnValue;
}

GetFieldHandlePtr FieldEditorComponentBase::getHandleEditingFieldId  (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfEditingFieldId,
             this->getType().getFieldDesc(EditingFieldIdFieldId),
             const_cast<FieldEditorComponentBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FieldEditorComponentBase::editHandleEditingFieldId (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfEditingFieldId,
             this->getType().getFieldDesc(EditingFieldIdFieldId),
             this));


    editSField(EditingFieldIdFieldMask);

    return returnValue;
}

GetFieldHandlePtr FieldEditorComponentBase::getHandleEditingFieldIndex (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfEditingFieldIndex,
             this->getType().getFieldDesc(EditingFieldIndexFieldId),
             const_cast<FieldEditorComponentBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FieldEditorComponentBase::editHandleEditingFieldIndex(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfEditingFieldIndex,
             this->getType().getFieldDesc(EditingFieldIndexFieldId),
             this));


    editSField(EditingFieldIndexFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void FieldEditorComponentBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    FieldEditorComponent *pThis = static_cast<FieldEditorComponent *>(this);

    pThis->execSync(static_cast<FieldEditorComponent *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void FieldEditorComponentBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<FieldEditorComponent *>(this)->setEditingFC(NULL);


}


OSG_END_NAMESPACE
