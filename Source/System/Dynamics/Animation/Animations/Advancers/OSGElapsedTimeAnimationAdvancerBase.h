/*---------------------------------------------------------------------------*\
 *                       OpenSG ToolBox Animation                            *
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
 **     class ElapsedTimeAnimationAdvancer
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGELAPSEDTIMEANIMATIONADVANCERBASE_H_
#define _OSGELAPSEDTIMEANIMATIONADVANCERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGAnimationDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGAnimationAdvancer.h" // Parent

#include <OpenSG/OSGReal32Fields.h> // StartTime type
#include <OpenSG/OSGReal32Fields.h> // ElpsTime type
#include <OpenSG/OSGReal32Fields.h> // PrevElpsTime type

#include "OSGElapsedTimeAnimationAdvancerFields.h"

OSG_BEGIN_NAMESPACE

class ElapsedTimeAnimationAdvancer;
class BinaryDataHandler;

//! \brief ElapsedTimeAnimationAdvancer Base Class.

class OSG_ANIMATIONLIB_DLLMAPPING ElapsedTimeAnimationAdvancerBase : public AnimationAdvancer
{
  private:

    typedef AnimationAdvancer    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef ElapsedTimeAnimationAdvancerPtr  Ptr;

    enum
    {
        StartTimeFieldId    = Inherited::NextFieldId,
        ElpsTimeFieldId     = StartTimeFieldId    + 1,
        PrevElpsTimeFieldId = ElpsTimeFieldId     + 1,
        NextFieldId         = PrevElpsTimeFieldId + 1
    };

    static const OSG::BitVector StartTimeFieldMask;
    static const OSG::BitVector ElpsTimeFieldMask;
    static const OSG::BitVector PrevElpsTimeFieldMask;


    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType  (void); 
    virtual const FieldContainerType &getType  (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFReal32            *getSFStartTime      (void);
           SFReal32            *getSFElpsTime       (void);

           Real32              &getStartTime      (void);
     const Real32              &getStartTime      (void) const;
           Real32              &getElpsTime       (void);
     const Real32              &getElpsTime       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setStartTime      ( const Real32 &value );
     void setElpsTime       ( const Real32 &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (const BitVector         &whichField);
    virtual void   copyToBin  (      BinaryDataHandler &pMem,
                               const BitVector         &whichField);
    virtual void   copyFromBin(      BinaryDataHandler &pMem,
                               const BitVector         &whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  ElapsedTimeAnimationAdvancerPtr      create          (void); 
    static  ElapsedTimeAnimationAdvancerPtr      createEmpty     (void); 

    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr     shallowCopy     (void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFReal32            _sfStartTime;
    SFReal32            _sfElpsTime;
    SFReal32            _sfPrevElpsTime;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ElapsedTimeAnimationAdvancerBase(void);
    ElapsedTimeAnimationAdvancerBase(const ElapsedTimeAnimationAdvancerBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ElapsedTimeAnimationAdvancerBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFReal32            *getSFPrevElpsTime   (void);

           Real32              &getPrevElpsTime   (void);
     const Real32              &getPrevElpsTime   (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setPrevElpsTime   (const Real32 &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      ElapsedTimeAnimationAdvancerBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      ElapsedTimeAnimationAdvancerBase *pOther,
                         const BitVector         &whichField,
                         const SyncInfo          &sInfo     );

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField,
                               const SyncInfo          &sInfo);

    virtual void execBeginEdit     (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

            void execBeginEditImpl (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

    virtual void onDestroyAspect(UInt32 uiId, UInt32 uiAspect);
#endif

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ElapsedTimeAnimationAdvancerBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef ElapsedTimeAnimationAdvancerBase *ElapsedTimeAnimationAdvancerBaseP;

typedef osgIF<ElapsedTimeAnimationAdvancerBase::isNodeCore,
              CoredNodePtr<ElapsedTimeAnimationAdvancer>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet ElapsedTimeAnimationAdvancerNodePtr;

typedef RefPtr<ElapsedTimeAnimationAdvancerPtr> ElapsedTimeAnimationAdvancerRefPtr;

OSG_END_NAMESPACE

#define OSGELAPSEDTIMEANIMATIONADVANCERBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGELAPSEDTIMEANIMATIONADVANCERBASE_H_ */


