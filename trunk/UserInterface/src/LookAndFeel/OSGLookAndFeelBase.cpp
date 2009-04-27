/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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
 **     class LookAndFeel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILELOOKANDFEELINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGLookAndFeelBase.h"
#include "OSGLookAndFeel.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  LookAndFeelBase::PrototypesFieldMask = 
    (TypeTraits<BitVector>::One << LookAndFeelBase::PrototypesFieldId);

const OSG::BitVector  LookAndFeelBase::TextCaretRateFieldMask = 
    (TypeTraits<BitVector>::One << LookAndFeelBase::TextCaretRateFieldId);

const OSG::BitVector  LookAndFeelBase::ToolTipPopupTimeFieldMask = 
    (TypeTraits<BitVector>::One << LookAndFeelBase::ToolTipPopupTimeFieldId);

const OSG::BitVector  LookAndFeelBase::SubMenuPopupTimeFieldMask = 
    (TypeTraits<BitVector>::One << LookAndFeelBase::SubMenuPopupTimeFieldId);

const OSG::BitVector  LookAndFeelBase::KeyAcceleratorMenuFlashTimeFieldMask = 
    (TypeTraits<BitVector>::One << LookAndFeelBase::KeyAcceleratorMenuFlashTimeFieldId);

const OSG::BitVector LookAndFeelBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var FieldContainerPtr LookAndFeelBase::_mfPrototypes
    
*/
/*! \var Time            LookAndFeelBase::_sfTextCaretRate
    
*/
/*! \var Time            LookAndFeelBase::_sfToolTipPopupTime
    
*/
/*! \var Time            LookAndFeelBase::_sfSubMenuPopupTime
    
*/
/*! \var Time            LookAndFeelBase::_sfKeyAcceleratorMenuFlashTime
    
*/

//! LookAndFeel description

FieldDescription *LookAndFeelBase::_desc[] = 
{
    new FieldDescription(MFFieldContainerPtr::getClassType(), 
                     "Prototypes", 
                     PrototypesFieldId, PrototypesFieldMask,
                     false,
                     (FieldAccessMethod) &LookAndFeelBase::getMFPrototypes),
    new FieldDescription(SFTime::getClassType(), 
                     "TextCaretRate", 
                     TextCaretRateFieldId, TextCaretRateFieldMask,
                     false,
                     (FieldAccessMethod) &LookAndFeelBase::getSFTextCaretRate),
    new FieldDescription(SFTime::getClassType(), 
                     "ToolTipPopupTime", 
                     ToolTipPopupTimeFieldId, ToolTipPopupTimeFieldMask,
                     false,
                     (FieldAccessMethod) &LookAndFeelBase::getSFToolTipPopupTime),
    new FieldDescription(SFTime::getClassType(), 
                     "SubMenuPopupTime", 
                     SubMenuPopupTimeFieldId, SubMenuPopupTimeFieldMask,
                     false,
                     (FieldAccessMethod) &LookAndFeelBase::getSFSubMenuPopupTime),
    new FieldDescription(SFTime::getClassType(), 
                     "KeyAcceleratorMenuFlashTime", 
                     KeyAcceleratorMenuFlashTimeFieldId, KeyAcceleratorMenuFlashTimeFieldMask,
                     false,
                     (FieldAccessMethod) &LookAndFeelBase::getSFKeyAcceleratorMenuFlashTime)
};


FieldContainerType LookAndFeelBase::_type(
    "LookAndFeel",
    "FieldContainer",
    NULL,
    NULL, 
    LookAndFeel::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(LookAndFeelBase, LookAndFeelPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &LookAndFeelBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &LookAndFeelBase::getType(void) const 
{
    return _type;
} 


UInt32 LookAndFeelBase::getContainerSize(void) const 
{ 
    return sizeof(LookAndFeel); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void LookAndFeelBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((LookAndFeelBase *) &other, whichField);
}
#else
void LookAndFeelBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((LookAndFeelBase *) &other, whichField, sInfo);
}
void LookAndFeelBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void LookAndFeelBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfPrototypes.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

LookAndFeelBase::LookAndFeelBase(void) :
    _mfPrototypes             (), 
    _sfTextCaretRate          (Time(1.0)), 
    _sfToolTipPopupTime       (Time(1.5)), 
    _sfSubMenuPopupTime       (Time(0.25)), 
    _sfKeyAcceleratorMenuFlashTime(Time(0.15)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

LookAndFeelBase::LookAndFeelBase(const LookAndFeelBase &source) :
    _mfPrototypes             (source._mfPrototypes             ), 
    _sfTextCaretRate          (source._sfTextCaretRate          ), 
    _sfToolTipPopupTime       (source._sfToolTipPopupTime       ), 
    _sfSubMenuPopupTime       (source._sfSubMenuPopupTime       ), 
    _sfKeyAcceleratorMenuFlashTime(source._sfKeyAcceleratorMenuFlashTime), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

LookAndFeelBase::~LookAndFeelBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 LookAndFeelBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PrototypesFieldMask & whichField))
    {
        returnValue += _mfPrototypes.getBinSize();
    }

    if(FieldBits::NoField != (TextCaretRateFieldMask & whichField))
    {
        returnValue += _sfTextCaretRate.getBinSize();
    }

    if(FieldBits::NoField != (ToolTipPopupTimeFieldMask & whichField))
    {
        returnValue += _sfToolTipPopupTime.getBinSize();
    }

    if(FieldBits::NoField != (SubMenuPopupTimeFieldMask & whichField))
    {
        returnValue += _sfSubMenuPopupTime.getBinSize();
    }

    if(FieldBits::NoField != (KeyAcceleratorMenuFlashTimeFieldMask & whichField))
    {
        returnValue += _sfKeyAcceleratorMenuFlashTime.getBinSize();
    }


    return returnValue;
}

void LookAndFeelBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PrototypesFieldMask & whichField))
    {
        _mfPrototypes.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TextCaretRateFieldMask & whichField))
    {
        _sfTextCaretRate.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ToolTipPopupTimeFieldMask & whichField))
    {
        _sfToolTipPopupTime.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SubMenuPopupTimeFieldMask & whichField))
    {
        _sfSubMenuPopupTime.copyToBin(pMem);
    }

    if(FieldBits::NoField != (KeyAcceleratorMenuFlashTimeFieldMask & whichField))
    {
        _sfKeyAcceleratorMenuFlashTime.copyToBin(pMem);
    }


}

void LookAndFeelBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PrototypesFieldMask & whichField))
    {
        _mfPrototypes.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TextCaretRateFieldMask & whichField))
    {
        _sfTextCaretRate.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ToolTipPopupTimeFieldMask & whichField))
    {
        _sfToolTipPopupTime.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SubMenuPopupTimeFieldMask & whichField))
    {
        _sfSubMenuPopupTime.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (KeyAcceleratorMenuFlashTimeFieldMask & whichField))
    {
        _sfKeyAcceleratorMenuFlashTime.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void LookAndFeelBase::executeSyncImpl(      LookAndFeelBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (PrototypesFieldMask & whichField))
        _mfPrototypes.syncWith(pOther->_mfPrototypes);

    if(FieldBits::NoField != (TextCaretRateFieldMask & whichField))
        _sfTextCaretRate.syncWith(pOther->_sfTextCaretRate);

    if(FieldBits::NoField != (ToolTipPopupTimeFieldMask & whichField))
        _sfToolTipPopupTime.syncWith(pOther->_sfToolTipPopupTime);

    if(FieldBits::NoField != (SubMenuPopupTimeFieldMask & whichField))
        _sfSubMenuPopupTime.syncWith(pOther->_sfSubMenuPopupTime);

    if(FieldBits::NoField != (KeyAcceleratorMenuFlashTimeFieldMask & whichField))
        _sfKeyAcceleratorMenuFlashTime.syncWith(pOther->_sfKeyAcceleratorMenuFlashTime);


}
#else
void LookAndFeelBase::executeSyncImpl(      LookAndFeelBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (TextCaretRateFieldMask & whichField))
        _sfTextCaretRate.syncWith(pOther->_sfTextCaretRate);

    if(FieldBits::NoField != (ToolTipPopupTimeFieldMask & whichField))
        _sfToolTipPopupTime.syncWith(pOther->_sfToolTipPopupTime);

    if(FieldBits::NoField != (SubMenuPopupTimeFieldMask & whichField))
        _sfSubMenuPopupTime.syncWith(pOther->_sfSubMenuPopupTime);

    if(FieldBits::NoField != (KeyAcceleratorMenuFlashTimeFieldMask & whichField))
        _sfKeyAcceleratorMenuFlashTime.syncWith(pOther->_sfKeyAcceleratorMenuFlashTime);


    if(FieldBits::NoField != (PrototypesFieldMask & whichField))
        _mfPrototypes.syncWith(pOther->_mfPrototypes, sInfo);


}

void LookAndFeelBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (PrototypesFieldMask & whichField))
        _mfPrototypes.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<LookAndFeelPtr>::_type("LookAndFeelPtr", "FieldContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(LookAndFeelPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(LookAndFeelPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.47 2006/03/17 17:03:19 pdaehne Exp $";
    static Char8 cvsid_hpp       [] = OSGLOOKANDFEELBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGLOOKANDFEELBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGLOOKANDFEELFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
