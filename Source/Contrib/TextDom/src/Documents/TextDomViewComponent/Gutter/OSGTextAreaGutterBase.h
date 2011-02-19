/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
 *          Achyuthan Vasanth (vasanth.achyuthan@gmail.com)                  *
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
 **     class TextAreaGutter
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTEXTAREAGUTTERBASE_H_
#define _OSGTEXTAREAGUTTERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribTextDomDef.h"

//#include "OSGBaseTypes.h"

#include "OSGComponentContainer.h" // Parent

#include "OSGTextDomAreaFields.h"       // TrackedArea type
#include "OSGVecFields.h"               // Alignment type
#include "OSGBaseFields.h"              // TextColor type
#include "OSGUIFontFields.h"            // Font type

#include "OSGTextAreaGutterFields.h"

OSG_BEGIN_NAMESPACE

class TextAreaGutter;

//! \brief TextAreaGutter Base Class.

class OSG_CONTRIBTEXTDOM_DLLMAPPING TextAreaGutterBase : public ComponentContainer
{
  public:

    typedef ComponentContainer Inherited;
    typedef ComponentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(TextAreaGutter);
    
    

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        TrackedAreaFieldId = Inherited::NextFieldId,
        AlignmentFieldId = TrackedAreaFieldId + 1,
        TextColorFieldId = AlignmentFieldId + 1,
        FontFieldId = TextColorFieldId + 1,
        NextFieldId = FontFieldId + 1
    };

    static const OSG::BitVector TrackedAreaFieldMask =
        (TypeTraits<BitVector>::One << TrackedAreaFieldId);
    static const OSG::BitVector AlignmentFieldMask =
        (TypeTraits<BitVector>::One << AlignmentFieldId);
    static const OSG::BitVector TextColorFieldMask =
        (TypeTraits<BitVector>::One << TextColorFieldId);
    static const OSG::BitVector FontFieldMask =
        (TypeTraits<BitVector>::One << FontFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecTextDomAreaPtr SFTrackedAreaType;
    typedef SFVec2f           SFAlignmentType;
    typedef SFColor4f         SFTextColorType;
    typedef SFUnrecUIFontPtr  SFFontType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

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

            const SFUnrecTextDomAreaPtr *getSFTrackedArea    (void) const;
                  SFUnrecTextDomAreaPtr *editSFTrackedArea    (void);

                  SFVec2f             *editSFAlignment      (void);
            const SFVec2f             *getSFAlignment       (void) const;

                  SFColor4f           *editSFTextColor      (void);
            const SFColor4f           *getSFTextColor       (void) const;
            const SFUnrecUIFontPtr    *getSFFont           (void) const;
                  SFUnrecUIFontPtr    *editSFFont           (void);


                  TextDomArea * getTrackedArea    (void) const;

                  Vec2f               &editAlignment      (void);
            const Vec2f               &getAlignment       (void) const;

                  Color4f             &editTextColor      (void);
            const Color4f             &getTextColor       (void) const;

                  UIFont * getFont           (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setTrackedArea    (TextDomArea * const value);
            void setAlignment      (const Vec2f &value);
            void setTextColor      (const Color4f &value);
            void setFont           (UIFont * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

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
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  TextAreaGutterTransitPtr  create          (void);
    static  TextAreaGutter           *createEmpty     (void);

    static  TextAreaGutterTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  TextAreaGutter            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  TextAreaGutterTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUnrecTextDomAreaPtr _sfTrackedArea;
    SFVec2f           _sfAlignment;
    SFColor4f         _sfTextColor;
    SFUnrecUIFontPtr  _sfFont;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TextAreaGutterBase(void);
    TextAreaGutterBase(const TextAreaGutterBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TextAreaGutterBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const TextAreaGutter *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleTrackedArea     (void) const;
    EditFieldHandlePtr editHandleTrackedArea    (void);
    GetFieldHandlePtr  getHandleAlignment       (void) const;
    EditFieldHandlePtr editHandleAlignment      (void);
    GetFieldHandlePtr  getHandleTextColor       (void) const;
    EditFieldHandlePtr editHandleTextColor      (void);
    GetFieldHandlePtr  getHandleFont            (void) const;
    EditFieldHandlePtr editHandleFont           (void);

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

            void execSync (      TextAreaGutterBase *pFrom,
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

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

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

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TextAreaGutterBase &source);
};

typedef TextAreaGutterBase *TextAreaGutterBaseP;

OSG_END_NAMESPACE

#endif /* _OSGTEXTAREAGUTTERBASE_H_ */
