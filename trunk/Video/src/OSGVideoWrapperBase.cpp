/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                          Authors: David Kabala                            *
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
 **     class VideoWrapper!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEVIDEOWRAPPERINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGVideoWrapperBase.h"
#include "OSGVideoWrapper.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  VideoWrapperBase::EventProducerFieldMask =
    (TypeTraits<BitVector>::One << VideoWrapperBase::EventProducerFieldId);
const OSG::BitVector VideoWrapperBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


//! VideoWrapper description

FieldDescription *VideoWrapperBase::_desc[] = 
{
    new FieldDescription(SFEventProducerPtr::getClassType(), 
                     "EventProducer", 
                     EventProducerFieldId,EventProducerFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&VideoWrapperBase::editSFEventProducer))
};


FieldContainerType VideoWrapperBase::_type(
    "VideoWrapper",
    "AttachmentContainer",
    NULL,
    NULL, 
    VideoWrapper::initMethod,
    _desc,
    sizeof(_desc));

//! VideoWrapper Produced Methods

MethodDescription *VideoWrapperBase::_methodDesc[] =
{
    new MethodDescription("VideoStarted", 
                     VideoStartedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("VideoStopped", 
                     VideoStoppedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("VideoPaused", 
                     VideoPausedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("VideoUnpaused", 
                     VideoUnpausedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("VideoEnded", 
                     VideoEndedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("VideoCycled", 
                     VideoCycledMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("VideoOpened", 
                     VideoOpenedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("VideoClosed", 
                     VideoClosedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("VideoSeeked", 
                     VideoSeekedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod())
};

EventProducerType VideoWrapperBase::_producerType(
    "VideoWrapperProducerType",
    "EventProducerType",
    NULL,
    InitEventProducerFunctor(),
    _methodDesc,
    sizeof(_methodDesc));
//OSG_FIELD_CONTAINER_DEF(VideoWrapperBase, VideoWrapperPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &VideoWrapperBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &VideoWrapperBase::getType(void) const 
{
    return _type;
} 

const EventProducerType &VideoWrapperBase::getProducerType(void) const
{
    return _producerType;
}


UInt32 VideoWrapperBase::getContainerSize(void) const 
{ 
    return sizeof(VideoWrapper); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void VideoWrapperBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<VideoWrapperBase *>(&other),
                          whichField);
}
#else
void VideoWrapperBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((VideoWrapperBase *) &other, whichField, sInfo);
}
void VideoWrapperBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void VideoWrapperBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

VideoWrapperBase::VideoWrapperBase(void) :
    _Producer(&getProducerType()),
    _sfEventProducer(&_Producer),
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

VideoWrapperBase::VideoWrapperBase(const VideoWrapperBase &source) :
    _Producer(&source.getProducerType()),
    _sfEventProducer(&_Producer),
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

VideoWrapperBase::~VideoWrapperBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 VideoWrapperBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        returnValue += _sfEventProducer.getBinSize();
    }


    return returnValue;
}

void VideoWrapperBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyToBin(pMem);
    }


}

void VideoWrapperBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void VideoWrapperBase::executeSyncImpl(      VideoWrapperBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
        _sfEventProducer.syncWith(pOther->_sfEventProducer);


}
#else
void VideoWrapperBase::executeSyncImpl(      VideoWrapperBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void VideoWrapperBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<VideoWrapperPtr>::_type("VideoWrapperPtr", "AttachmentContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(VideoWrapperPtr, OSG_VIDEOLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(VideoWrapperPtr, OSG_VIDEOLIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE

