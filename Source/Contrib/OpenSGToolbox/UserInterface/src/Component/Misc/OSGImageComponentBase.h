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
 **     class ImageComponent
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGIMAGECOMPONENTBASE_H_
#define _OSGIMAGECOMPONENTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "Component/OSGComponent.h" // Parent

#include <OpenSG/OSGTextureChunkFields.h> // Texture type
#include <OpenSG/OSGTextureChunkFields.h> // RolloverTexture type
#include <OpenSG/OSGTextureChunkFields.h> // DisabledTexture type
#include <OpenSG/OSGTextureChunkFields.h> // FocusedTexture type
#include <OpenSG/OSGTextureTransformChunkFields.h> // Transformation type
#include <OpenSG/OSGColor4fFields.h> // Color type
#include <OpenSG/OSGUInt32Fields.h> // Scale type
#include <OpenSG/OSGVec2fFields.h> // ScaleAbsoluteSize type
#include <OpenSG/OSGVec2fFields.h> // Alignment type
#include <OpenSG/OSGVec4fFields.h> // ImageClippingOffsets type

#include "OSGImageComponentFields.h"
OSG_BEGIN_NAMESPACE

class ImageComponent;
class BinaryDataHandler;

//! \brief ImageComponent Base Class.

class OSG_USERINTERFACELIB_DLLMAPPING ImageComponentBase : public Component
{
  private:

    typedef Component    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef ImageComponentPtr  Ptr;

    enum
    {
        TextureFieldId              = Inherited::NextFieldId,
        RolloverTextureFieldId      = TextureFieldId              + 1,
        DisabledTextureFieldId      = RolloverTextureFieldId      + 1,
        FocusedTextureFieldId       = DisabledTextureFieldId      + 1,
        TransformationFieldId       = FocusedTextureFieldId       + 1,
        ColorFieldId                = TransformationFieldId       + 1,
        ScaleFieldId                = ColorFieldId                + 1,
        ScaleAbsoluteSizeFieldId    = ScaleFieldId                + 1,
        AlignmentFieldId            = ScaleAbsoluteSizeFieldId    + 1,
        ImageClippingOffsetsFieldId = AlignmentFieldId            + 1,
        NextFieldId                 = ImageClippingOffsetsFieldId + 1
    };

    static const OSG::BitVector TextureFieldMask;
    static const OSG::BitVector RolloverTextureFieldMask;
    static const OSG::BitVector DisabledTextureFieldMask;
    static const OSG::BitVector FocusedTextureFieldMask;
    static const OSG::BitVector TransformationFieldMask;
    static const OSG::BitVector ColorFieldMask;
    static const OSG::BitVector ScaleFieldMask;
    static const OSG::BitVector ScaleAbsoluteSizeFieldMask;
    static const OSG::BitVector AlignmentFieldMask;
    static const OSG::BitVector ImageClippingOffsetsFieldMask;


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


           SFTextureChunkPtr   *editSFTexture        (void);
     const SFTextureChunkPtr   *getSFTexture        (void) const;

           SFTextureChunkPtr   *editSFRolloverTexture(void);
     const SFTextureChunkPtr   *getSFRolloverTexture(void) const;

           SFTextureChunkPtr   *editSFDisabledTexture(void);
     const SFTextureChunkPtr   *getSFDisabledTexture(void) const;

           SFTextureChunkPtr   *editSFFocusedTexture (void);
     const SFTextureChunkPtr   *getSFFocusedTexture (void) const;

           SFTextureTransformChunkPtr *editSFTransformation (void);
     const SFTextureTransformChunkPtr *getSFTransformation (void) const;

           SFColor4f           *editSFColor          (void);
     const SFColor4f           *getSFColor          (void) const;

           SFUInt32            *editSFScale          (void);
     const SFUInt32            *getSFScale          (void) const;

           SFVec2f             *editSFScaleAbsoluteSize(void);
     const SFVec2f             *getSFScaleAbsoluteSize(void) const;

           SFVec2f             *editSFAlignment      (void);
     const SFVec2f             *getSFAlignment      (void) const;

           SFVec4f             *editSFImageClippingOffsets(void);
     const SFVec4f             *getSFImageClippingOffsets(void) const;


           TextureChunkPtr     &editTexture        (void);
     const TextureChunkPtr     &getTexture        (void) const;

           TextureChunkPtr     &editRolloverTexture(void);
     const TextureChunkPtr     &getRolloverTexture(void) const;

           TextureChunkPtr     &editDisabledTexture(void);
     const TextureChunkPtr     &getDisabledTexture(void) const;

           TextureChunkPtr     &editFocusedTexture (void);
     const TextureChunkPtr     &getFocusedTexture (void) const;

           TextureTransformChunkPtr &editTransformation (void);
     const TextureTransformChunkPtr &getTransformation (void) const;

           Color4f             &editColor          (void);
     const Color4f             &getColor          (void) const;

           UInt32              &editScale          (void);
     const UInt32              &getScale          (void) const;

           Vec2f               &editScaleAbsoluteSize(void);
     const Vec2f               &getScaleAbsoluteSize(void) const;

           Vec2f               &editAlignment      (void);
     const Vec2f               &getAlignment      (void) const;

           Vec4f               &editImageClippingOffsets(void);
     const Vec4f               &getImageClippingOffsets(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setTexture        ( const TextureChunkPtr &value );
     void setRolloverTexture( const TextureChunkPtr &value );
     void setDisabledTexture( const TextureChunkPtr &value );
     void setFocusedTexture ( const TextureChunkPtr &value );
     void setTransformation ( const TextureTransformChunkPtr &value );
     void setColor          ( const Color4f &value );
     void setScale          ( const UInt32 &value );
     void setScaleAbsoluteSize( const Vec2f &value );
     void setAlignment      ( const Vec2f &value );
     void setImageClippingOffsets( const Vec4f &value );

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

    static  ImageComponentPtr      create          (void); 
    static  ImageComponentPtr      createEmpty     (void); 

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

    SFTextureChunkPtr   _sfTexture;
    SFTextureChunkPtr   _sfRolloverTexture;
    SFTextureChunkPtr   _sfDisabledTexture;
    SFTextureChunkPtr   _sfFocusedTexture;
    SFTextureTransformChunkPtr   _sfTransformation;
    SFColor4f           _sfColor;
    SFUInt32            _sfScale;
    SFVec2f             _sfScaleAbsoluteSize;
    SFVec2f             _sfAlignment;
    SFVec4f             _sfImageClippingOffsets;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ImageComponentBase(void);
    ImageComponentBase(const ImageComponentBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ImageComponentBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      ImageComponentBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      ImageComponentBase *pOther,
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
    void operator =(const ImageComponentBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef ImageComponentBase *ImageComponentBaseP;

typedef osgIF<ImageComponentBase::isNodeCore,
              CoredNodePtr<ImageComponent>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet ImageComponentNodePtr;

typedef RefPtr<ImageComponentPtr> ImageComponentRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGIMAGECOMPONENTBASE_H_ */