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
 **     class MorphGeometry!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGGeometry.h"                // BaseGeometry Class
#include "OSGGeoVectorProperty.h"       // InternalWeights Class

#include "OSGMorphGeometryBase.h"
#include "OSGMorphGeometry.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MorphGeometry
    A specialized Geometry that can blend between static OSG::Geometry.

    Each possible geometry that can be blended (a morph target) must be specified.
    In addition, there is a base mesh which is used a reference or baseline for the blending operation.

    The result of a morph mesh is usually a linear combination of other meshes (whether they are static,
    skinned, or something else). These input meshes are called the morph targets. A major constraint is that
    the morph targets must all have the same set of vertices (even if they are in different positions).Therefore, all
    of the morph targets'vertices elements must have the same structure. The
    combination of the morph targets can interpolate the data of any of the vertex attributes of the base and target meshes.

    OSG::Morph is specified as a base mesh, a set of other meshes, a set of weights, and a set of vertex properties to interpolate.
    By default only the Positions attribute is interpolated.  You can add or remove vertex attributes to interpolate by changing the 
    MorphProperties field.  The MorphProperteis field uses the vertex attributes defined in OSG::Geometry.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Geometry *      MorphGeometryBase::_sfBaseGeometry
    
*/

/*! \var Geometry *      MorphGeometryBase::_mfInternalTargetGeometries
    
*/

/*! \var GeoVectorProperty * MorphGeometryBase::_sfInternalWeights
    
*/

/*! \var UInt16          MorphGeometryBase::_mfMorphProperties
    
*/

/*! \var UInt16          MorphGeometryBase::_sfBlendingMethod
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<MorphGeometry *>::_type("MorphGeometryPtr", "GeometryPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(MorphGeometry *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           MorphGeometry *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           MorphGeometry *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void MorphGeometryBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecGeometryPtr::Description(
        SFUnrecGeometryPtr::getClassType(),
        "BaseGeometry",
        "",
        BaseGeometryFieldId, BaseGeometryFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MorphGeometry::editHandleBaseGeometry),
        static_cast<FieldGetMethodSig >(&MorphGeometry::getHandleBaseGeometry));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecGeometryPtr::Description(
        MFUnrecGeometryPtr::getClassType(),
        "InternalTargetGeometries",
        "",
        InternalTargetGeometriesFieldId, InternalTargetGeometriesFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MorphGeometry::editHandleInternalTargetGeometries),
        static_cast<FieldGetMethodSig >(&MorphGeometry::getHandleInternalTargetGeometries));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecChildGeoVectorPropertyPtr::Description(
        SFUnrecChildGeoVectorPropertyPtr::getClassType(),
        "InternalWeights",
        "",
        InternalWeightsFieldId, InternalWeightsFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MorphGeometry::editHandleInternalWeights),
        static_cast<FieldGetMethodSig >(&MorphGeometry::getHandleInternalWeights));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUInt16::Description(
        MFUInt16::getClassType(),
        "MorphProperties",
        "",
        MorphPropertiesFieldId, MorphPropertiesFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MorphGeometry::editHandleMorphProperties),
        static_cast<FieldGetMethodSig >(&MorphGeometry::getHandleMorphProperties));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "BlendingMethod",
        "",
        BlendingMethodFieldId, BlendingMethodFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MorphGeometry::editHandleBlendingMethod),
        static_cast<FieldGetMethodSig >(&MorphGeometry::getHandleBlendingMethod));

    oType.addInitialDesc(pDesc);
}


MorphGeometryBase::TypeObject MorphGeometryBase::_type(
    MorphGeometryBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&MorphGeometryBase::createEmptyLocal),
    MorphGeometry::initMethod,
    MorphGeometry::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&MorphGeometry::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"MorphGeometry\"\n"
    "\tparent=\"Geometry\"\n"
    "    library=\"TBAnimation\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)\"\n"
    ">\n"
    "    A specialized Geometry that can blend between static OSG::Geometry.\n"
    "\n"
    "    Each possible geometry that can be blended (a morph target) must be specified.\n"
    "    In addition, there is a base mesh which is used a reference or baseline for the blending operation.\n"
    "\n"
    "    The result of a morph mesh is usually a linear combination of other meshes (whether they are static,\n"
    "    skinned, or something else). These input meshes are called the morph targets. A major constraint is that\n"
    "    the morph targets must all have the same set of vertices (even if they are in different positions).Therefore, all\n"
    "    of the morph targets&apos; vertices elements must have the same structure. The\n"
    "    combination of the morph targets can interpolate the data of any of the vertex attributes of the base and target meshes.\n"
    "\n"
    "    OSG::Morph is specified as a base mesh, a set of other meshes, a set of weights, and a set of vertex properties to interpolate.\n"
    "    By default only the Positions attribute is interpolated.  You can add or remove vertex attributes to interpolate by changing the \n"
    "    MorphProperties field.  The MorphProperteis field uses the vertex attributes defined in OSG::Geometry.\n"
    "\t<Field\n"
    "\t\tname=\"BaseGeometry\"\n"
    "\t\ttype=\"Geometry\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"InternalTargetGeometries\"\n"
    "\t\ttype=\"Geometry\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"InternalWeights\"\n"
    "\t\ttype=\"GeoVectorProperty\"\n"
    "        category=\"childpointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tchildParentType=\"FieldContainer\"\n"
    "\t\tlinkParentField=\"Parents\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"MorphProperties\"\n"
    "\t\ttype=\"UInt16\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"BlendingMethod\"\n"
    "\t\ttype=\"UInt16\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"MorphGeometry::Relative\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "A specialized Geometry that can blend between static OSG::Geometry.\n"
    "\n"
    "Each possible geometry that can be blended (a morph target) must be specified.\n"
    "In addition, there is a base mesh which is used a reference or baseline for the blending operation.\n"
    "\n"
    "The result of a morph mesh is usually a linear combination of other meshes (whether they are static,\n"
    "skinned, or something else). These input meshes are called the morph targets. A major constraint is that\n"
    "the morph targets must all have the same set of vertices (even if they are in different positions).Therefore, all\n"
    "of the morph targets'vertices elements must have the same structure. The\n"
    "combination of the morph targets can interpolate the data of any of the vertex attributes of the base and target meshes.\n"
    "\n"
    "OSG::Morph is specified as a base mesh, a set of other meshes, a set of weights, and a set of vertex properties to interpolate.\n"
    "By default only the Positions attribute is interpolated.  You can add or remove vertex attributes to interpolate by changing the \n"
    "MorphProperties field.  The MorphProperteis field uses the vertex attributes defined in OSG::Geometry.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MorphGeometryBase::getType(void)
{
    return _type;
}

const FieldContainerType &MorphGeometryBase::getType(void) const
{
    return _type;
}

UInt32 MorphGeometryBase::getContainerSize(void) const
{
    return sizeof(MorphGeometry);
}

/*------------------------- decorator get ------------------------------*/


//! Get the MorphGeometry::_sfBaseGeometry field.
const SFUnrecGeometryPtr *MorphGeometryBase::getSFBaseGeometry(void) const
{
    return &_sfBaseGeometry;
}

SFUnrecGeometryPtr  *MorphGeometryBase::editSFBaseGeometry   (void)
{
    editSField(BaseGeometryFieldMask);

    return &_sfBaseGeometry;
}

//! Get the MorphGeometry::_mfInternalTargetGeometries field.
const MFUnrecGeometryPtr *MorphGeometryBase::getMFInternalTargetGeometries(void) const
{
    return &_mfInternalTargetGeometries;
}

MFUnrecGeometryPtr  *MorphGeometryBase::editMFInternalTargetGeometries(void)
{
    editMField(InternalTargetGeometriesFieldMask, _mfInternalTargetGeometries);

    return &_mfInternalTargetGeometries;
}

//! Get the MorphGeometry::_sfInternalWeights field.
const SFUnrecChildGeoVectorPropertyPtr *MorphGeometryBase::getSFInternalWeights(void) const
{
    return &_sfInternalWeights;
}

SFUnrecChildGeoVectorPropertyPtr *MorphGeometryBase::editSFInternalWeights(void)
{
    editSField(InternalWeightsFieldMask);

    return &_sfInternalWeights;
}

MFUInt16 *MorphGeometryBase::editMFMorphProperties(void)
{
    editMField(MorphPropertiesFieldMask, _mfMorphProperties);

    return &_mfMorphProperties;
}

const MFUInt16 *MorphGeometryBase::getMFMorphProperties(void) const
{
    return &_mfMorphProperties;
}


SFUInt16 *MorphGeometryBase::editSFBlendingMethod(void)
{
    editSField(BlendingMethodFieldMask);

    return &_sfBlendingMethod;
}

const SFUInt16 *MorphGeometryBase::getSFBlendingMethod(void) const
{
    return &_sfBlendingMethod;
}




void MorphGeometryBase::pushToInternalTargetGeometries(Geometry * const value)
{
    editMField(InternalTargetGeometriesFieldMask, _mfInternalTargetGeometries);

    _mfInternalTargetGeometries.push_back(value);
}

void MorphGeometryBase::assignInternalTargetGeometries(const MFUnrecGeometryPtr &value)
{
    MFUnrecGeometryPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecGeometryPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<MorphGeometry *>(this)->clearInternalTargetGeometries();

    while(elemIt != elemEnd)
    {
        this->pushToInternalTargetGeometries(*elemIt);

        ++elemIt;
    }
}

void MorphGeometryBase::removeFromInternalTargetGeometries(UInt32 uiIndex)
{
    if(uiIndex < _mfInternalTargetGeometries.size())
    {
        editMField(InternalTargetGeometriesFieldMask, _mfInternalTargetGeometries);

        _mfInternalTargetGeometries.erase(uiIndex);
    }
}

void MorphGeometryBase::removeObjFromInternalTargetGeometries(Geometry * const value)
{
    Int32 iElemIdx = _mfInternalTargetGeometries.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(InternalTargetGeometriesFieldMask, _mfInternalTargetGeometries);

        _mfInternalTargetGeometries.erase(iElemIdx);
    }
}
void MorphGeometryBase::clearInternalTargetGeometries(void)
{
    editMField(InternalTargetGeometriesFieldMask, _mfInternalTargetGeometries);


    _mfInternalTargetGeometries.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 MorphGeometryBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (BaseGeometryFieldMask & whichField))
    {
        returnValue += _sfBaseGeometry.getBinSize();
    }
    if(FieldBits::NoField != (InternalTargetGeometriesFieldMask & whichField))
    {
        returnValue += _mfInternalTargetGeometries.getBinSize();
    }
    if(FieldBits::NoField != (InternalWeightsFieldMask & whichField))
    {
        returnValue += _sfInternalWeights.getBinSize();
    }
    if(FieldBits::NoField != (MorphPropertiesFieldMask & whichField))
    {
        returnValue += _mfMorphProperties.getBinSize();
    }
    if(FieldBits::NoField != (BlendingMethodFieldMask & whichField))
    {
        returnValue += _sfBlendingMethod.getBinSize();
    }

    return returnValue;
}

void MorphGeometryBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (BaseGeometryFieldMask & whichField))
    {
        _sfBaseGeometry.copyToBin(pMem);
    }
    if(FieldBits::NoField != (InternalTargetGeometriesFieldMask & whichField))
    {
        _mfInternalTargetGeometries.copyToBin(pMem);
    }
    if(FieldBits::NoField != (InternalWeightsFieldMask & whichField))
    {
        _sfInternalWeights.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MorphPropertiesFieldMask & whichField))
    {
        _mfMorphProperties.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BlendingMethodFieldMask & whichField))
    {
        _sfBlendingMethod.copyToBin(pMem);
    }
}

void MorphGeometryBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (BaseGeometryFieldMask & whichField))
    {
        editSField(BaseGeometryFieldMask);
        _sfBaseGeometry.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (InternalTargetGeometriesFieldMask & whichField))
    {
        editMField(InternalTargetGeometriesFieldMask, _mfInternalTargetGeometries);
        _mfInternalTargetGeometries.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (InternalWeightsFieldMask & whichField))
    {
        editSField(InternalWeightsFieldMask);
        _sfInternalWeights.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MorphPropertiesFieldMask & whichField))
    {
        editMField(MorphPropertiesFieldMask, _mfMorphProperties);
        _mfMorphProperties.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BlendingMethodFieldMask & whichField))
    {
        editSField(BlendingMethodFieldMask);
        _sfBlendingMethod.copyFromBin(pMem);
    }
}

//! create a new instance of the class
MorphGeometryTransitPtr MorphGeometryBase::createLocal(BitVector bFlags)
{
    MorphGeometryTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<MorphGeometry>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
MorphGeometryTransitPtr MorphGeometryBase::createDependent(BitVector bFlags)
{
    MorphGeometryTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<MorphGeometry>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
MorphGeometryTransitPtr MorphGeometryBase::create(void)
{
    MorphGeometryTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<MorphGeometry>(tmpPtr);
    }

    return fc;
}

MorphGeometry *MorphGeometryBase::createEmptyLocal(BitVector bFlags)
{
    MorphGeometry *returnValue;

    newPtr<MorphGeometry>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
MorphGeometry *MorphGeometryBase::createEmpty(void)
{
    MorphGeometry *returnValue;

    newPtr<MorphGeometry>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}

FieldContainerTransitPtr MorphGeometryBase::shallowCopyLocal(
    BitVector bFlags) const
{
    MorphGeometry *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MorphGeometry *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr MorphGeometryBase::shallowCopyDependent(
    BitVector bFlags) const
{
    MorphGeometry *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MorphGeometry *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr MorphGeometryBase::shallowCopy(void) const
{
    MorphGeometry *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const MorphGeometry *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

MorphGeometryBase::MorphGeometryBase(void) :
    Inherited(),
    _sfBaseGeometry           (NULL),
    _mfInternalTargetGeometries(),
    _sfInternalWeights        (this,
                          InternalWeightsFieldId,
                          GeoVectorProperty::ParentsFieldId),
    _mfMorphProperties        (),
    _sfBlendingMethod         (UInt16(MorphGeometry::Normalized))
{
}

MorphGeometryBase::MorphGeometryBase(const MorphGeometryBase &source) :
    Inherited(source),
    _sfBaseGeometry           (NULL),
    _mfInternalTargetGeometries(),
    _sfInternalWeights        (this,
                          InternalWeightsFieldId,
                          GeoVectorProperty::ParentsFieldId),
    _mfMorphProperties        (source._mfMorphProperties        ),
    _sfBlendingMethod         (source._sfBlendingMethod         )
{
}


/*-------------------------- destructors ----------------------------------*/

MorphGeometryBase::~MorphGeometryBase(void)
{
}

/*-------------------------------------------------------------------------*/
/* Child linking                                                           */

bool MorphGeometryBase::unlinkChild(
    FieldContainer * const pChild,
    UInt16           const childFieldId)
{
    if(childFieldId == InternalWeightsFieldId)
    {
        GeoVectorProperty * pTypedChild =
            dynamic_cast<GeoVectorProperty *>(pChild);

        if(pTypedChild != NULL)
        {
            if(_sfInternalWeights.getValue() == pTypedChild)
            {
                editSField(InternalWeightsFieldMask);

                _sfInternalWeights.setValue(NULL);

                return true;
            }

            SWARNING << "Parent (["        << this
                     << "] id ["           << this->getId()
                     << "] type ["         << this->getType().getCName()
                     << "] childFieldId [" << childFieldId
                     << "]) - Child (["    << pChild
                     << "] id ["           << pChild->getId()
                     << "] type ["         << pChild->getType().getCName()
                     << "]): link inconsistent!"
                     << std::endl;

            return false;
        }

        return false;
    }


    return Inherited::unlinkChild(pChild, childFieldId);
}

void MorphGeometryBase::onCreate(const MorphGeometry *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        MorphGeometry *pThis = static_cast<MorphGeometry *>(this);

        pThis->setBaseGeometry(source->getBaseGeometry());

        MFUnrecGeometryPtr::const_iterator InternalTargetGeometriesIt  =
            source->_mfInternalTargetGeometries.begin();
        MFUnrecGeometryPtr::const_iterator InternalTargetGeometriesEnd =
            source->_mfInternalTargetGeometries.end  ();

        while(InternalTargetGeometriesIt != InternalTargetGeometriesEnd)
        {
            pThis->pushToInternalTargetGeometries(*InternalTargetGeometriesIt);

            ++InternalTargetGeometriesIt;
        }

        pThis->setInternalWeights(source->getInternalWeights());
    }
}

GetFieldHandlePtr MorphGeometryBase::getHandleBaseGeometry    (void) const
{
    SFUnrecGeometryPtr::GetHandlePtr returnValue(
        new  SFUnrecGeometryPtr::GetHandle(
             &_sfBaseGeometry,
             this->getType().getFieldDesc(BaseGeometryFieldId),
             const_cast<MorphGeometryBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MorphGeometryBase::editHandleBaseGeometry   (void)
{
    SFUnrecGeometryPtr::EditHandlePtr returnValue(
        new  SFUnrecGeometryPtr::EditHandle(
             &_sfBaseGeometry,
             this->getType().getFieldDesc(BaseGeometryFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&MorphGeometry::setBaseGeometry,
                    static_cast<MorphGeometry *>(this), _1));

    editSField(BaseGeometryFieldMask);

    return returnValue;
}

GetFieldHandlePtr MorphGeometryBase::getHandleInternalTargetGeometries (void) const
{
    MFUnrecGeometryPtr::GetHandlePtr returnValue(
        new  MFUnrecGeometryPtr::GetHandle(
             &_mfInternalTargetGeometries,
             this->getType().getFieldDesc(InternalTargetGeometriesFieldId),
             const_cast<MorphGeometryBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MorphGeometryBase::editHandleInternalTargetGeometries(void)
{
    MFUnrecGeometryPtr::EditHandlePtr returnValue(
        new  MFUnrecGeometryPtr::EditHandle(
             &_mfInternalTargetGeometries,
             this->getType().getFieldDesc(InternalTargetGeometriesFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&MorphGeometry::pushToInternalTargetGeometries,
                    static_cast<MorphGeometry *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&MorphGeometry::removeFromInternalTargetGeometries,
                    static_cast<MorphGeometry *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&MorphGeometry::removeObjFromInternalTargetGeometries,
                    static_cast<MorphGeometry *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&MorphGeometry::clearInternalTargetGeometries,
                    static_cast<MorphGeometry *>(this)));

    editMField(InternalTargetGeometriesFieldMask, _mfInternalTargetGeometries);

    return returnValue;
}

GetFieldHandlePtr MorphGeometryBase::getHandleInternalWeights (void) const
{
    SFUnrecChildGeoVectorPropertyPtr::GetHandlePtr returnValue(
        new  SFUnrecChildGeoVectorPropertyPtr::GetHandle(
             &_sfInternalWeights,
             this->getType().getFieldDesc(InternalWeightsFieldId),
             const_cast<MorphGeometryBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MorphGeometryBase::editHandleInternalWeights(void)
{
    SFUnrecChildGeoVectorPropertyPtr::EditHandlePtr returnValue(
        new  SFUnrecChildGeoVectorPropertyPtr::EditHandle(
             &_sfInternalWeights,
             this->getType().getFieldDesc(InternalWeightsFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&MorphGeometry::setInternalWeights,
                    static_cast<MorphGeometry *>(this), _1));

    editSField(InternalWeightsFieldMask);

    return returnValue;
}

GetFieldHandlePtr MorphGeometryBase::getHandleMorphProperties (void) const
{
    MFUInt16::GetHandlePtr returnValue(
        new  MFUInt16::GetHandle(
             &_mfMorphProperties,
             this->getType().getFieldDesc(MorphPropertiesFieldId),
             const_cast<MorphGeometryBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MorphGeometryBase::editHandleMorphProperties(void)
{
    MFUInt16::EditHandlePtr returnValue(
        new  MFUInt16::EditHandle(
             &_mfMorphProperties,
             this->getType().getFieldDesc(MorphPropertiesFieldId),
             this));


    editMField(MorphPropertiesFieldMask, _mfMorphProperties);

    return returnValue;
}

GetFieldHandlePtr MorphGeometryBase::getHandleBlendingMethod  (void) const
{
    SFUInt16::GetHandlePtr returnValue(
        new  SFUInt16::GetHandle(
             &_sfBlendingMethod,
             this->getType().getFieldDesc(BlendingMethodFieldId),
             const_cast<MorphGeometryBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MorphGeometryBase::editHandleBlendingMethod (void)
{
    SFUInt16::EditHandlePtr returnValue(
        new  SFUInt16::EditHandle(
             &_sfBlendingMethod,
             this->getType().getFieldDesc(BlendingMethodFieldId),
             this));


    editSField(BlendingMethodFieldMask);

    return returnValue;
}



#ifdef OSG_MT_CPTR_ASPECT
void MorphGeometryBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    MorphGeometry *pThis = static_cast<MorphGeometry *>(this);

    pThis->execSync(static_cast<MorphGeometry *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *MorphGeometryBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    MorphGeometry *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const MorphGeometry *>(pRefAspect),
                  dynamic_cast<const MorphGeometry *>(this));

    return returnValue;
}
#endif

void MorphGeometryBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<MorphGeometry *>(this)->setBaseGeometry(NULL);

    static_cast<MorphGeometry *>(this)->clearInternalTargetGeometries();

    static_cast<MorphGeometry *>(this)->setInternalWeights(NULL);

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfMorphProperties.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE