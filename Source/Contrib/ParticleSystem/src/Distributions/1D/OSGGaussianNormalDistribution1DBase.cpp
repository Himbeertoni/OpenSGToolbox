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
 **     class GaussianNormalDistribution1D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGGaussianNormalDistribution1DBase.h"
#include "OSGGaussianNormalDistribution1D.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GaussianNormalDistribution1D
    An GaussianNormalDistribution1D.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Real32          GaussianNormalDistribution1DBase::_sfMean
    
*/

/*! \var Real32          GaussianNormalDistribution1DBase::_sfStandardDeviation
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<GaussianNormalDistribution1D *>::_type("GaussianNormalDistribution1DPtr", "Distribution1DPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(GaussianNormalDistribution1D *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           GaussianNormalDistribution1D *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           GaussianNormalDistribution1D *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void GaussianNormalDistribution1DBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "Mean",
        "",
        MeanFieldId, MeanFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&GaussianNormalDistribution1D::editHandleMean),
        static_cast<FieldGetMethodSig >(&GaussianNormalDistribution1D::getHandleMean));

    oType.addInitialDesc(pDesc);


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "StandardDeviation",
        "",
        StandardDeviationFieldId, StandardDeviationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&GaussianNormalDistribution1D::editHandleStandardDeviation),
        static_cast<FieldGetMethodSig >(&GaussianNormalDistribution1D::getHandleStandardDeviation));

    oType.addInitialDesc(pDesc);

}


GaussianNormalDistribution1DBase::TypeObject GaussianNormalDistribution1DBase::_type(
    GaussianNormalDistribution1DBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&GaussianNormalDistribution1DBase::createEmptyLocal),
    GaussianNormalDistribution1D::initMethod,
    GaussianNormalDistribution1D::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&GaussianNormalDistribution1D::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"GaussianNormalDistribution1D\"\n"
    "\tparent=\"Distribution1D\"\n"
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
    "An GaussianNormalDistribution1D.\n"
    "\t<Field\n"
    "\t\tname=\"Mean\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"StandardDeviation\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "An GaussianNormalDistribution1D.\n"
    );


/*------------------------------ get -----------------------------------*/

FieldContainerType &GaussianNormalDistribution1DBase::getType(void)
{
    return _type;
}

const FieldContainerType &GaussianNormalDistribution1DBase::getType(void) const
{
    return _type;
}

UInt32 GaussianNormalDistribution1DBase::getContainerSize(void) const
{
    return sizeof(GaussianNormalDistribution1D);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *GaussianNormalDistribution1DBase::editSFMean(void)
{
    editSField(MeanFieldMask);

    return &_sfMean;
}

const SFReal32 *GaussianNormalDistribution1DBase::getSFMean(void) const
{
    return &_sfMean;
}


SFReal32 *GaussianNormalDistribution1DBase::editSFStandardDeviation(void)
{
    editSField(StandardDeviationFieldMask);

    return &_sfStandardDeviation;
}

const SFReal32 *GaussianNormalDistribution1DBase::getSFStandardDeviation(void) const
{
    return &_sfStandardDeviation;
}






/*------------------------------ access -----------------------------------*/

UInt32 GaussianNormalDistribution1DBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MeanFieldMask & whichField))
    {
        returnValue += _sfMean.getBinSize();
    }
    if(FieldBits::NoField != (StandardDeviationFieldMask & whichField))
    {
        returnValue += _sfStandardDeviation.getBinSize();
    }

    return returnValue;
}

void GaussianNormalDistribution1DBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MeanFieldMask & whichField))
    {
        _sfMean.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StandardDeviationFieldMask & whichField))
    {
        _sfStandardDeviation.copyToBin(pMem);
    }
}

void GaussianNormalDistribution1DBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MeanFieldMask & whichField))
    {
        _sfMean.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StandardDeviationFieldMask & whichField))
    {
        _sfStandardDeviation.copyFromBin(pMem);
    }
}

//! create a new instance of the class
GaussianNormalDistribution1DTransitPtr GaussianNormalDistribution1DBase::createLocal(BitVector bFlags)
{
    GaussianNormalDistribution1DTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<GaussianNormalDistribution1D>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
GaussianNormalDistribution1DTransitPtr GaussianNormalDistribution1DBase::createDependent(BitVector bFlags)
{
    GaussianNormalDistribution1DTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<GaussianNormalDistribution1D>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
GaussianNormalDistribution1DTransitPtr GaussianNormalDistribution1DBase::create(void)
{
    GaussianNormalDistribution1DTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<GaussianNormalDistribution1D>(tmpPtr);
    }

    return fc;
}

GaussianNormalDistribution1D *GaussianNormalDistribution1DBase::createEmptyLocal(BitVector bFlags)
{
    GaussianNormalDistribution1D *returnValue;

    newPtr<GaussianNormalDistribution1D>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
GaussianNormalDistribution1D *GaussianNormalDistribution1DBase::createEmpty(void)
{
    GaussianNormalDistribution1D *returnValue;

    newPtr<GaussianNormalDistribution1D>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr GaussianNormalDistribution1DBase::shallowCopyLocal(
    BitVector bFlags) const
{
    GaussianNormalDistribution1D *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GaussianNormalDistribution1D *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr GaussianNormalDistribution1DBase::shallowCopyDependent(
    BitVector bFlags) const
{
    GaussianNormalDistribution1D *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GaussianNormalDistribution1D *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr GaussianNormalDistribution1DBase::shallowCopy(void) const
{
    GaussianNormalDistribution1D *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const GaussianNormalDistribution1D *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

GaussianNormalDistribution1DBase::GaussianNormalDistribution1DBase(void) :
    Inherited(),
    _sfMean                   (Real32(0.0)),
    _sfStandardDeviation      (Real32(1.0))
{
}

GaussianNormalDistribution1DBase::GaussianNormalDistribution1DBase(const GaussianNormalDistribution1DBase &source) :
    Inherited(source),
    _sfMean                   (source._sfMean                   ),
    _sfStandardDeviation      (source._sfStandardDeviation      )
{
}


/*-------------------------- destructors ----------------------------------*/

GaussianNormalDistribution1DBase::~GaussianNormalDistribution1DBase(void)
{
}


GetFieldHandlePtr GaussianNormalDistribution1DBase::getHandleMean            (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfMean,
             this->getType().getFieldDesc(MeanFieldId),
             const_cast<GaussianNormalDistribution1DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr GaussianNormalDistribution1DBase::editHandleMean           (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfMean,
             this->getType().getFieldDesc(MeanFieldId),
             this));


    editSField(MeanFieldMask);

    return returnValue;
}

GetFieldHandlePtr GaussianNormalDistribution1DBase::getHandleStandardDeviation (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfStandardDeviation,
             this->getType().getFieldDesc(StandardDeviationFieldId),
             const_cast<GaussianNormalDistribution1DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr GaussianNormalDistribution1DBase::editHandleStandardDeviation(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfStandardDeviation,
             this->getType().getFieldDesc(StandardDeviationFieldId),
             this));


    editSField(StandardDeviationFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void GaussianNormalDistribution1DBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    GaussianNormalDistribution1D *pThis = static_cast<GaussianNormalDistribution1D *>(this);

    pThis->execSync(static_cast<GaussianNormalDistribution1D *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *GaussianNormalDistribution1DBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    GaussianNormalDistribution1D *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const GaussianNormalDistribution1D *>(pRefAspect),
                  dynamic_cast<const GaussianNormalDistribution1D *>(this));

    return returnValue;
}
#endif

void GaussianNormalDistribution1DBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
