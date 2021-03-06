/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class Animation!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include "OSGAnimationEventDetails.h"

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TBAnimationBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 TBAnimationBase::getClassTypeId(void)
{
    return _type.getId();
}
//! access the producer type of the class
inline
const EventProducerType &TBAnimationBase::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 TBAnimationBase::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

inline
OSG::UInt16 TBAnimationBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the Animation::_sfCycling field.

inline
Int32 &TBAnimationBase::editCycling(void)
{
    editSField(CyclingFieldMask);

    return _sfCycling.getValue();
}

//! Get the value of the Animation::_sfCycling field.
inline
      Int32  TBAnimationBase::getCycling(void) const
{
    return _sfCycling.getValue();
}

//! Set the value of the Animation::_sfCycling field.
inline
void TBAnimationBase::setCycling(const Int32 value)
{
    editSField(CyclingFieldMask);

    _sfCycling.setValue(value);
}
//! Get the value of the Animation::_sfScale field.

inline
Real32 &TBAnimationBase::editScale(void)
{
    editSField(ScaleFieldMask);

    return _sfScale.getValue();
}

//! Get the value of the Animation::_sfScale field.
inline
      Real32  TBAnimationBase::getScale(void) const
{
    return _sfScale.getValue();
}

//! Set the value of the Animation::_sfScale field.
inline
void TBAnimationBase::setScale(const Real32 value)
{
    editSField(ScaleFieldMask);

    _sfScale.setValue(value);
}
//! Get the value of the Animation::_sfOffset field.

inline
Real32 &TBAnimationBase::editOffset(void)
{
    editSField(OffsetFieldMask);

    return _sfOffset.getValue();
}

//! Get the value of the Animation::_sfOffset field.
inline
      Real32  TBAnimationBase::getOffset(void) const
{
    return _sfOffset.getValue();
}

//! Set the value of the Animation::_sfOffset field.
inline
void TBAnimationBase::setOffset(const Real32 value)
{
    editSField(OffsetFieldMask);

    _sfOffset.setValue(value);
}
//! Get the value of the Animation::_sfSpan field.

inline
Real32 &TBAnimationBase::editSpan(void)
{
    editSField(SpanFieldMask);

    return _sfSpan.getValue();
}

//! Get the value of the Animation::_sfSpan field.
inline
      Real32  TBAnimationBase::getSpan(void) const
{
    return _sfSpan.getValue();
}

//! Set the value of the Animation::_sfSpan field.
inline
void TBAnimationBase::setSpan(const Real32 value)
{
    editSField(SpanFieldMask);

    _sfSpan.setValue(value);
}
//! Get the value of the Animation::_sfCycles field.

inline
Real32 &TBAnimationBase::editCycles(void)
{
    editSField(CyclesFieldMask);

    return _sfCycles.getValue();
}

//! Get the value of the Animation::_sfCycles field.
inline
      Real32  TBAnimationBase::getCycles(void) const
{
    return _sfCycles.getValue();
}

//! Set the value of the Animation::_sfCycles field.
inline
void TBAnimationBase::setCycles(const Real32 value)
{
    editSField(CyclesFieldMask);

    _sfCycles.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void TBAnimationBase::execSync (      TBAnimationBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (CyclingFieldMask & whichField))
        _sfCycling.syncWith(pFrom->_sfCycling);

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
        _sfScale.syncWith(pFrom->_sfScale);

    if(FieldBits::NoField != (OffsetFieldMask & whichField))
        _sfOffset.syncWith(pFrom->_sfOffset);

    if(FieldBits::NoField != (SpanFieldMask & whichField))
        _sfSpan.syncWith(pFrom->_sfSpan);

    if(FieldBits::NoField != (CyclesFieldMask & whichField))
        _sfCycles.syncWith(pFrom->_sfCycles);
}
#endif


inline
const Char8 *TBAnimationBase::getClassname(void)
{
    return "TBAnimation";
}

inline
UInt32 TBAnimationBase::getNumProducedEvents(void) const
{
    return getProducerType().getNumEventDescs();
}

inline
const EventDescription *TBAnimationBase::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return getProducerType().findEventDescription(ProducedEventName);
}

inline
const EventDescription *TBAnimationBase::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return getProducerType().getEventDescription(ProducedEventId);
}

inline
UInt32 TBAnimationBase::getProducedEventId(const std::string &ProducedEventName) const
{
    return getProducerType().getProducedEventId(ProducedEventName);
}

inline
boost::signals2::connection  TBAnimationBase::connectAnimationStarted(const AnimationStartedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _AnimationStartedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TBAnimationBase::connectAnimationStarted(const AnimationStartedEventType::group_type &group,
                                                    const AnimationStartedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _AnimationStartedEvent.connect(group, listener, at);
}

inline
void  TBAnimationBase::disconnectAnimationStarted(const AnimationStartedEventType::group_type &group)
{
    _AnimationStartedEvent.disconnect(group);
}

inline
void  TBAnimationBase::disconnectAllSlotsAnimationStarted(void)
{
    _AnimationStartedEvent.disconnect_all_slots();
}

inline
bool  TBAnimationBase::isEmptyAnimationStarted(void) const
{
    return _AnimationStartedEvent.empty();
}

inline
UInt32  TBAnimationBase::numSlotsAnimationStarted(void) const
{
    return _AnimationStartedEvent.num_slots();
}

inline
void TBAnimationBase::produceAnimationStarted(AnimationStartedEventDetailsType* const e)
{
    produceEvent(AnimationStartedEventId, e);
}

inline
boost::signals2::connection  TBAnimationBase::connectAnimationStopped(const AnimationStoppedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _AnimationStoppedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TBAnimationBase::connectAnimationStopped(const AnimationStoppedEventType::group_type &group,
                                                    const AnimationStoppedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _AnimationStoppedEvent.connect(group, listener, at);
}

inline
void  TBAnimationBase::disconnectAnimationStopped(const AnimationStoppedEventType::group_type &group)
{
    _AnimationStoppedEvent.disconnect(group);
}

inline
void  TBAnimationBase::disconnectAllSlotsAnimationStopped(void)
{
    _AnimationStoppedEvent.disconnect_all_slots();
}

inline
bool  TBAnimationBase::isEmptyAnimationStopped(void) const
{
    return _AnimationStoppedEvent.empty();
}

inline
UInt32  TBAnimationBase::numSlotsAnimationStopped(void) const
{
    return _AnimationStoppedEvent.num_slots();
}

inline
void TBAnimationBase::produceAnimationStopped(AnimationStoppedEventDetailsType* const e)
{
    produceEvent(AnimationStoppedEventId, e);
}

inline
boost::signals2::connection  TBAnimationBase::connectAnimationPaused(const AnimationPausedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _AnimationPausedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TBAnimationBase::connectAnimationPaused(const AnimationPausedEventType::group_type &group,
                                                    const AnimationPausedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _AnimationPausedEvent.connect(group, listener, at);
}

inline
void  TBAnimationBase::disconnectAnimationPaused(const AnimationPausedEventType::group_type &group)
{
    _AnimationPausedEvent.disconnect(group);
}

inline
void  TBAnimationBase::disconnectAllSlotsAnimationPaused(void)
{
    _AnimationPausedEvent.disconnect_all_slots();
}

inline
bool  TBAnimationBase::isEmptyAnimationPaused(void) const
{
    return _AnimationPausedEvent.empty();
}

inline
UInt32  TBAnimationBase::numSlotsAnimationPaused(void) const
{
    return _AnimationPausedEvent.num_slots();
}

inline
void TBAnimationBase::produceAnimationPaused(AnimationPausedEventDetailsType* const e)
{
    produceEvent(AnimationPausedEventId, e);
}

inline
boost::signals2::connection  TBAnimationBase::connectAnimationUnpaused(const AnimationUnpausedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _AnimationUnpausedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TBAnimationBase::connectAnimationUnpaused(const AnimationUnpausedEventType::group_type &group,
                                                    const AnimationUnpausedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _AnimationUnpausedEvent.connect(group, listener, at);
}

inline
void  TBAnimationBase::disconnectAnimationUnpaused(const AnimationUnpausedEventType::group_type &group)
{
    _AnimationUnpausedEvent.disconnect(group);
}

inline
void  TBAnimationBase::disconnectAllSlotsAnimationUnpaused(void)
{
    _AnimationUnpausedEvent.disconnect_all_slots();
}

inline
bool  TBAnimationBase::isEmptyAnimationUnpaused(void) const
{
    return _AnimationUnpausedEvent.empty();
}

inline
UInt32  TBAnimationBase::numSlotsAnimationUnpaused(void) const
{
    return _AnimationUnpausedEvent.num_slots();
}

inline
void TBAnimationBase::produceAnimationUnpaused(AnimationUnpausedEventDetailsType* const e)
{
    produceEvent(AnimationUnpausedEventId, e);
}

inline
boost::signals2::connection  TBAnimationBase::connectAnimationEnded(const AnimationEndedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _AnimationEndedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TBAnimationBase::connectAnimationEnded(const AnimationEndedEventType::group_type &group,
                                                    const AnimationEndedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _AnimationEndedEvent.connect(group, listener, at);
}

inline
void  TBAnimationBase::disconnectAnimationEnded(const AnimationEndedEventType::group_type &group)
{
    _AnimationEndedEvent.disconnect(group);
}

inline
void  TBAnimationBase::disconnectAllSlotsAnimationEnded(void)
{
    _AnimationEndedEvent.disconnect_all_slots();
}

inline
bool  TBAnimationBase::isEmptyAnimationEnded(void) const
{
    return _AnimationEndedEvent.empty();
}

inline
UInt32  TBAnimationBase::numSlotsAnimationEnded(void) const
{
    return _AnimationEndedEvent.num_slots();
}

inline
void TBAnimationBase::produceAnimationEnded(AnimationEndedEventDetailsType* const e)
{
    produceEvent(AnimationEndedEventId, e);
}

inline
boost::signals2::connection  TBAnimationBase::connectAnimationCycled(const AnimationCycledEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _AnimationCycledEvent.connect(listener, at);
}

inline
boost::signals2::connection  TBAnimationBase::connectAnimationCycled(const AnimationCycledEventType::group_type &group,
                                                    const AnimationCycledEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _AnimationCycledEvent.connect(group, listener, at);
}

inline
void  TBAnimationBase::disconnectAnimationCycled(const AnimationCycledEventType::group_type &group)
{
    _AnimationCycledEvent.disconnect(group);
}

inline
void  TBAnimationBase::disconnectAllSlotsAnimationCycled(void)
{
    _AnimationCycledEvent.disconnect_all_slots();
}

inline
bool  TBAnimationBase::isEmptyAnimationCycled(void) const
{
    return _AnimationCycledEvent.empty();
}

inline
UInt32  TBAnimationBase::numSlotsAnimationCycled(void) const
{
    return _AnimationCycledEvent.num_slots();
}

inline
void TBAnimationBase::produceAnimationCycled(AnimationCycledEventDetailsType* const e)
{
    produceEvent(AnimationCycledEventId, e);
}

OSG_GEN_CONTAINERPTR(TBAnimation);

OSG_END_NAMESPACE

