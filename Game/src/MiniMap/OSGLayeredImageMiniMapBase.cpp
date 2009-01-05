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
 **     class LayeredImageMiniMap!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILELAYEREDIMAGEMINIMAPINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGLayeredImageMiniMapBase.h"
#include "OSGLayeredImageMiniMap.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  LayeredImageMiniMapBase::OverlayFieldMask = 
    (TypeTraits<BitVector>::One << LayeredImageMiniMapBase::OverlayFieldId);

const OSG::BitVector  LayeredImageMiniMapBase::LayerTexturesFieldMask = 
    (TypeTraits<BitVector>::One << LayeredImageMiniMapBase::LayerTexturesFieldId);

const OSG::BitVector  LayeredImageMiniMapBase::LayerDistancesFieldMask = 
    (TypeTraits<BitVector>::One << LayeredImageMiniMapBase::LayerDistancesFieldId);

const OSG::BitVector  LayeredImageMiniMapBase::StationaryIndicatorFieldMask = 
    (TypeTraits<BitVector>::One << LayeredImageMiniMapBase::StationaryIndicatorFieldId);

const OSG::BitVector LayeredImageMiniMapBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var MiniMapOverlayPtr LayeredImageMiniMapBase::_mfOverlay
    
*/
/*! \var TextureChunkPtr LayeredImageMiniMapBase::_mfLayerTextures
    
*/
/*! \var Real32          LayeredImageMiniMapBase::_mfLayerDistances
    
*/
/*! \var bool            LayeredImageMiniMapBase::_sfStationaryIndicator
    
*/

//! LayeredImageMiniMap description

FieldDescription *LayeredImageMiniMapBase::_desc[] = 
{
    new FieldDescription(MFMiniMapOverlayPtr::getClassType(), 
                     "Overlay", 
                     OverlayFieldId, OverlayFieldMask,
                     false,
                     (FieldAccessMethod) &LayeredImageMiniMapBase::getMFOverlay),
    new FieldDescription(MFTextureChunkPtr::getClassType(), 
                     "LayerTextures", 
                     LayerTexturesFieldId, LayerTexturesFieldMask,
                     false,
                     (FieldAccessMethod) &LayeredImageMiniMapBase::getMFLayerTextures),
    new FieldDescription(MFReal32::getClassType(), 
                     "LayerDistances", 
                     LayerDistancesFieldId, LayerDistancesFieldMask,
                     false,
                     (FieldAccessMethod) &LayeredImageMiniMapBase::getMFLayerDistances),
    new FieldDescription(SFBool::getClassType(), 
                     "StationaryIndicator", 
                     StationaryIndicatorFieldId, StationaryIndicatorFieldMask,
                     false,
                     (FieldAccessMethod) &LayeredImageMiniMapBase::getSFStationaryIndicator)
};


FieldContainerType LayeredImageMiniMapBase::_type(
    "LayeredImageMiniMap",
    "MiniMap",
    NULL,
    (PrototypeCreateF) &LayeredImageMiniMapBase::createEmpty,
    LayeredImageMiniMap::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(LayeredImageMiniMapBase, LayeredImageMiniMapPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &LayeredImageMiniMapBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &LayeredImageMiniMapBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr LayeredImageMiniMapBase::shallowCopy(void) const 
{ 
    LayeredImageMiniMapPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const LayeredImageMiniMap *>(this)); 

    return returnValue; 
}

UInt32 LayeredImageMiniMapBase::getContainerSize(void) const 
{ 
    return sizeof(LayeredImageMiniMap); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void LayeredImageMiniMapBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((LayeredImageMiniMapBase *) &other, whichField);
}
#else
void LayeredImageMiniMapBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((LayeredImageMiniMapBase *) &other, whichField, sInfo);
}
void LayeredImageMiniMapBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void LayeredImageMiniMapBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfOverlay.terminateShare(uiAspect, this->getContainerSize());
    _mfLayerTextures.terminateShare(uiAspect, this->getContainerSize());
    _mfLayerDistances.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

LayeredImageMiniMapBase::LayeredImageMiniMapBase(void) :
    _mfOverlay                (), 
    _mfLayerTextures          (), 
    _mfLayerDistances         (), 
    _sfStationaryIndicator    (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

LayeredImageMiniMapBase::LayeredImageMiniMapBase(const LayeredImageMiniMapBase &source) :
    _mfOverlay                (source._mfOverlay                ), 
    _mfLayerTextures          (source._mfLayerTextures          ), 
    _mfLayerDistances         (source._mfLayerDistances         ), 
    _sfStationaryIndicator    (source._sfStationaryIndicator    ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

LayeredImageMiniMapBase::~LayeredImageMiniMapBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 LayeredImageMiniMapBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (OverlayFieldMask & whichField))
    {
        returnValue += _mfOverlay.getBinSize();
    }

    if(FieldBits::NoField != (LayerTexturesFieldMask & whichField))
    {
        returnValue += _mfLayerTextures.getBinSize();
    }

    if(FieldBits::NoField != (LayerDistancesFieldMask & whichField))
    {
        returnValue += _mfLayerDistances.getBinSize();
    }

    if(FieldBits::NoField != (StationaryIndicatorFieldMask & whichField))
    {
        returnValue += _sfStationaryIndicator.getBinSize();
    }


    return returnValue;
}

void LayeredImageMiniMapBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (OverlayFieldMask & whichField))
    {
        _mfOverlay.copyToBin(pMem);
    }

    if(FieldBits::NoField != (LayerTexturesFieldMask & whichField))
    {
        _mfLayerTextures.copyToBin(pMem);
    }

    if(FieldBits::NoField != (LayerDistancesFieldMask & whichField))
    {
        _mfLayerDistances.copyToBin(pMem);
    }

    if(FieldBits::NoField != (StationaryIndicatorFieldMask & whichField))
    {
        _sfStationaryIndicator.copyToBin(pMem);
    }


}

void LayeredImageMiniMapBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (OverlayFieldMask & whichField))
    {
        _mfOverlay.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (LayerTexturesFieldMask & whichField))
    {
        _mfLayerTextures.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (LayerDistancesFieldMask & whichField))
    {
        _mfLayerDistances.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (StationaryIndicatorFieldMask & whichField))
    {
        _sfStationaryIndicator.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void LayeredImageMiniMapBase::executeSyncImpl(      LayeredImageMiniMapBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (OverlayFieldMask & whichField))
        _mfOverlay.syncWith(pOther->_mfOverlay);

    if(FieldBits::NoField != (LayerTexturesFieldMask & whichField))
        _mfLayerTextures.syncWith(pOther->_mfLayerTextures);

    if(FieldBits::NoField != (LayerDistancesFieldMask & whichField))
        _mfLayerDistances.syncWith(pOther->_mfLayerDistances);

    if(FieldBits::NoField != (StationaryIndicatorFieldMask & whichField))
        _sfStationaryIndicator.syncWith(pOther->_sfStationaryIndicator);


}
#else
void LayeredImageMiniMapBase::executeSyncImpl(      LayeredImageMiniMapBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (StationaryIndicatorFieldMask & whichField))
        _sfStationaryIndicator.syncWith(pOther->_sfStationaryIndicator);


    if(FieldBits::NoField != (OverlayFieldMask & whichField))
        _mfOverlay.syncWith(pOther->_mfOverlay, sInfo);

    if(FieldBits::NoField != (LayerTexturesFieldMask & whichField))
        _mfLayerTextures.syncWith(pOther->_mfLayerTextures, sInfo);

    if(FieldBits::NoField != (LayerDistancesFieldMask & whichField))
        _mfLayerDistances.syncWith(pOther->_mfLayerDistances, sInfo);


}

void LayeredImageMiniMapBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (OverlayFieldMask & whichField))
        _mfOverlay.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (LayerTexturesFieldMask & whichField))
        _mfLayerTextures.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (LayerDistancesFieldMask & whichField))
        _mfLayerDistances.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<LayeredImageMiniMapPtr>::_type("LayeredImageMiniMapPtr", "MiniMapPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(LayeredImageMiniMapPtr, OSG_GAMELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(LayeredImageMiniMapPtr, OSG_GAMELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGLAYEREDIMAGEMINIMAPBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGLAYEREDIMAGEMINIMAPBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGLAYEREDIMAGEMINIMAPFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

