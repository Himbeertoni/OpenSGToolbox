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
 **     class SingleFieldEditorComponent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGSingleFieldEditorComponentBase.h"
#include "OSGSingleFieldEditorComponent.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SingleFieldEditorComponent
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UInt32          SingleFieldEditorComponentBase::_sfEditingFieldIndex
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SingleFieldEditorComponent *>::_type("SingleFieldEditorComponentPtr", "FieldEditorComponentPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(SingleFieldEditorComponent *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           SingleFieldEditorComponent *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           SingleFieldEditorComponent *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void SingleFieldEditorComponentBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "EditingFieldIndex",
        "",
        EditingFieldIndexFieldId, EditingFieldIndexFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SingleFieldEditorComponent::editHandleEditingFieldIndex),
        static_cast<FieldGetMethodSig >(&SingleFieldEditorComponent::getHandleEditingFieldIndex));

    oType.addInitialDesc(pDesc);
}


SingleFieldEditorComponentBase::TypeObject SingleFieldEditorComponentBase::_type(
    SingleFieldEditorComponentBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    SingleFieldEditorComponent::initMethod,
    SingleFieldEditorComponent::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&SingleFieldEditorComponent::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"SingleFieldEditorComponent\"\n"
    "\tparent=\"FieldEditorComponent\"\n"
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
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SingleFieldEditorComponentBase::getType(void)
{
    return _type;
}

const FieldContainerType &SingleFieldEditorComponentBase::getType(void) const
{
    return _type;
}

UInt32 SingleFieldEditorComponentBase::getContainerSize(void) const
{
    return sizeof(SingleFieldEditorComponent);
}

/*------------------------- decorator get ------------------------------*/


SFUInt32 *SingleFieldEditorComponentBase::editSFEditingFieldIndex(void)
{
    editSField(EditingFieldIndexFieldMask);

    return &_sfEditingFieldIndex;
}

const SFUInt32 *SingleFieldEditorComponentBase::getSFEditingFieldIndex(void) const
{
    return &_sfEditingFieldIndex;
}






/*------------------------------ access -----------------------------------*/

UInt32 SingleFieldEditorComponentBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EditingFieldIndexFieldMask & whichField))
    {
        returnValue += _sfEditingFieldIndex.getBinSize();
    }

    return returnValue;
}

void SingleFieldEditorComponentBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EditingFieldIndexFieldMask & whichField))
    {
        _sfEditingFieldIndex.copyToBin(pMem);
    }
}

void SingleFieldEditorComponentBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EditingFieldIndexFieldMask & whichField))
    {
        _sfEditingFieldIndex.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

SingleFieldEditorComponentBase::SingleFieldEditorComponentBase(void) :
    Inherited(),
    _sfEditingFieldIndex      (UInt32(0))
{
}

SingleFieldEditorComponentBase::SingleFieldEditorComponentBase(const SingleFieldEditorComponentBase &source) :
    Inherited(source),
    _sfEditingFieldIndex      (source._sfEditingFieldIndex      )
{
}


/*-------------------------- destructors ----------------------------------*/

SingleFieldEditorComponentBase::~SingleFieldEditorComponentBase(void)
{
}


GetFieldHandlePtr SingleFieldEditorComponentBase::getHandleEditingFieldIndex (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfEditingFieldIndex,
             this->getType().getFieldDesc(EditingFieldIndexFieldId),
             const_cast<SingleFieldEditorComponentBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SingleFieldEditorComponentBase::editHandleEditingFieldIndex(void)
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
void SingleFieldEditorComponentBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    SingleFieldEditorComponent *pThis = static_cast<SingleFieldEditorComponent *>(this);

    pThis->execSync(static_cast<SingleFieldEditorComponent *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void SingleFieldEditorComponentBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
