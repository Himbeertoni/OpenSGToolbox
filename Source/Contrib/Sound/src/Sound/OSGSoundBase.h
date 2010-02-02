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
 **     class Sound
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSOUNDBASE_H_
#define _OSGSOUNDBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribSoundDef.h"

//#include "OSGBaseTypes.h"

#include "OSGAttachmentContainer.h" // Parent

#include "OSGVecFields.h"               // Position type
#include "OSGSysFields.h"               // Volume type
#include "OSGBoostPathFields.h"         // File type

#include "OSGSoundFields.h"

//Event Producer Headers
#include "OSGEventProducer.h"
#include "OSGEventProducerType.h"
#include "OSGMethodDescription.h"
#include "OSGEventProducerPtrType.h"

OSG_BEGIN_NAMESPACE

class Sound;

//! \brief Sound Base Class.

class OSG_CONTRIBSOUND_DLLMAPPING SoundBase : public AttachmentContainer
{
  public:

    typedef AttachmentContainer Inherited;
    typedef AttachmentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(Sound);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        PositionFieldId = Inherited::NextFieldId,
        VelocityFieldId = PositionFieldId + 1,
        VolumeFieldId = VelocityFieldId + 1,
        PanFieldId = VolumeFieldId + 1,
        FrequencyFieldId = PanFieldId + 1,
        LoopingFieldId = FrequencyFieldId + 1,
        StreamingFieldId = LoopingFieldId + 1,
        FileFieldId = StreamingFieldId + 1,
        Enable3DFieldId = FileFieldId + 1,
        EventProducerFieldId = Enable3DFieldId + 1,
        NextFieldId = EventProducerFieldId + 1
    };

    static const OSG::BitVector PositionFieldMask =
        (TypeTraits<BitVector>::One << PositionFieldId);
    static const OSG::BitVector VelocityFieldMask =
        (TypeTraits<BitVector>::One << VelocityFieldId);
    static const OSG::BitVector VolumeFieldMask =
        (TypeTraits<BitVector>::One << VolumeFieldId);
    static const OSG::BitVector PanFieldMask =
        (TypeTraits<BitVector>::One << PanFieldId);
    static const OSG::BitVector FrequencyFieldMask =
        (TypeTraits<BitVector>::One << FrequencyFieldId);
    static const OSG::BitVector LoopingFieldMask =
        (TypeTraits<BitVector>::One << LoopingFieldId);
    static const OSG::BitVector StreamingFieldMask =
        (TypeTraits<BitVector>::One << StreamingFieldId);
    static const OSG::BitVector FileFieldMask =
        (TypeTraits<BitVector>::One << FileFieldId);
    static const OSG::BitVector Enable3DFieldMask =
        (TypeTraits<BitVector>::One << Enable3DFieldId);
    static const OSG::BitVector EventProducerFieldMask =
        (TypeTraits<BitVector>::One << EventProducerFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFPnt3f           SFPositionType;
    typedef SFVec3f           SFVelocityType;
    typedef SFReal32          SFVolumeType;
    typedef SFReal32          SFPanType;
    typedef SFReal32          SFFrequencyType;
    typedef SFInt32           SFLoopingType;
    typedef SFBool            SFStreamingType;
    typedef SFBoostPath       SFFileType;
    typedef SFBool            SFEnable3DType;
    typedef SFEventProducerPtr          SFEventProducerType;

    enum
    {
        SoundPlayedMethodId = 1,
        SoundStoppedMethodId = SoundPlayedMethodId + 1,
        SoundPausedMethodId = SoundStoppedMethodId + 1,
        SoundUnpausedMethodId = SoundPausedMethodId + 1,
        SoundLoopedMethodId = SoundUnpausedMethodId + 1,
        SoundEndedMethodId = SoundLoopedMethodId + 1,
        NextProducedMethodId = SoundEndedMethodId + 1
    };

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);
    static const  EventProducerType  &getProducerClassType  (void);
    static        UInt32              getProducerClassTypeId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFPnt3f             *editSFPosition       (void);
            const SFPnt3f             *getSFPosition        (void) const;

                  SFVec3f             *editSFVelocity       (void);
            const SFVec3f             *getSFVelocity        (void) const;

                  SFReal32            *editSFVolume         (void);
            const SFReal32            *getSFVolume          (void) const;

                  SFReal32            *editSFPan            (void);
            const SFReal32            *getSFPan             (void) const;

                  SFReal32            *editSFFrequency      (void);
            const SFReal32            *getSFFrequency       (void) const;

                  SFInt32             *editSFLooping        (void);
            const SFInt32             *getSFLooping         (void) const;

                  SFBool              *editSFStreaming      (void);
            const SFBool              *getSFStreaming       (void) const;

                  SFBoostPath         *editSFFile           (void);
            const SFBoostPath         *getSFFile            (void) const;

                  SFBool              *editSFEnable3D       (void);
            const SFBool              *getSFEnable3D        (void) const;


                  Pnt3f               &editPosition       (void);
            const Pnt3f               &getPosition        (void) const;

                  Vec3f               &editVelocity       (void);
            const Vec3f               &getVelocity        (void) const;

                  Real32              &editVolume         (void);
                  Real32               getVolume          (void) const;

                  Real32              &editPan            (void);
                  Real32               getPan             (void) const;

                  Real32              &editFrequency      (void);
                  Real32               getFrequency       (void) const;

                  Int32               &editLooping        (void);
                  Int32                getLooping         (void) const;

                  bool                &editStreaming      (void);
                  bool                 getStreaming       (void) const;

                  BoostPath           &editFile           (void);
            const BoostPath           &getFile            (void) const;

                  bool                &editEnable3D       (void);
                  bool                 getEnable3D        (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setPosition       (const Pnt3f &value);
            void setVelocity       (const Vec3f &value);
            void setVolume         (const Real32 value);
            void setPan            (const Real32 value);
            void setFrequency      (const Real32 value);
            void setLooping        (const Int32 value);
            void setStreaming      (const bool value);
            void setFile           (const BoostPath &value);
            void setEnable3D       (const bool value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Method Produced Get                           */
    /*! \{                                                                 */

    virtual const EventProducerType &getProducerType(void) const; 

    EventConnection          attachActivity             (ActivityRefPtr TheActivity,
                                                         UInt32 ProducedEventId);
    bool                     isActivityAttached         (ActivityRefPtr TheActivity,
                                                         UInt32 ProducedEventId) const;
    UInt32                   getNumActivitiesAttached   (UInt32 ProducedEventId) const;
    ActivityRefPtr           getAttachedActivity        (UInt32 ProducedEventId,
                                                         UInt32 ActivityIndex) const;
    void                     detachActivity             (ActivityRefPtr TheActivity,
                                                         UInt32 ProducedEventId);
    UInt32                   getNumProducedEvents       (void) const;
    const MethodDescription *getProducedEventDescription(const std::string &ProducedEventName) const;
    const MethodDescription *getProducedEventDescription(UInt32 ProducedEventId) const;
    UInt32                   getProducedEventId         (const std::string &ProducedEventName) const;

    SFEventProducerPtr *editSFEventProducer(void);
    EventProducerPtr   &editEventProducer  (void);

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:
    /*---------------------------------------------------------------------*/
    /*! \name                    Event Producer                            */
    /*! \{                                                                 */
    EventProducer _Producer;

    /*! \}                                                                 */

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFPnt3f           _sfPosition;
    SFVec3f           _sfVelocity;
    SFReal32          _sfVolume;
    SFReal32          _sfPan;
    SFReal32          _sfFrequency;
    SFInt32           _sfLooping;
    SFBool            _sfStreaming;
    SFBoostPath       _sfFile;
    SFBool            _sfEnable3D;
    SFEventProducerPtr _sfEventProducer;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SoundBase(void);
    SoundBase(const SoundBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SoundBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandlePosition        (void) const;
    EditFieldHandlePtr editHandlePosition       (void);
    GetFieldHandlePtr  getHandleVelocity        (void) const;
    EditFieldHandlePtr editHandleVelocity       (void);
    GetFieldHandlePtr  getHandleVolume          (void) const;
    EditFieldHandlePtr editHandleVolume         (void);
    GetFieldHandlePtr  getHandlePan             (void) const;
    EditFieldHandlePtr editHandlePan            (void);
    GetFieldHandlePtr  getHandleFrequency       (void) const;
    EditFieldHandlePtr editHandleFrequency      (void);
    GetFieldHandlePtr  getHandleLooping         (void) const;
    EditFieldHandlePtr editHandleLooping        (void);
    GetFieldHandlePtr  getHandleStreaming       (void) const;
    EditFieldHandlePtr editHandleStreaming      (void);
    GetFieldHandlePtr  getHandleFile            (void) const;
    EditFieldHandlePtr editHandleFile           (void);
    GetFieldHandlePtr  getHandleEnable3D        (void) const;
    EditFieldHandlePtr editHandleEnable3D       (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      SoundBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/
    static MethodDescription   *_methodDesc[];
    static EventProducerType _producerType;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const SoundBase &source);
};

typedef SoundBase *SoundBaseP;

OSG_END_NAMESPACE

#endif /* _OSGSOUNDBASE_H_ */