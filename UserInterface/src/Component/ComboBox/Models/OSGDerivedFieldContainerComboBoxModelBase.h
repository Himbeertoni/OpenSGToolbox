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
 **     class DerivedFieldContainerComboBoxModel
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDERIVEDFIELDCONTAINERCOMBOBOXMODELBASE_H_
#define _OSGDERIVEDFIELDCONTAINERCOMBOBOXMODELBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGAbstractComboBoxModel.h" // Parent

#include <OpenSG/OSGStringFields.h> // DerivedFieldContainerTypes type
#include <OpenSG/OSGUInt32Fields.h> // InternalDerivedFieldContainerTypes type
#include <OpenSG/OSGUInt32Fields.h> // InternalFieldContainerTypes type
#include <OpenSG/OSGBoolFields.h> // IncludeAbstract type

#include "OSGDerivedFieldContainerComboBoxModelFields.h"

OSG_BEGIN_NAMESPACE

class DerivedFieldContainerComboBoxModel;
class BinaryDataHandler;

//! \brief DerivedFieldContainerComboBoxModel Base Class.

class OSG_USERINTERFACELIB_DLLMAPPING DerivedFieldContainerComboBoxModelBase : public AbstractComboBoxModel
{
  private:

    typedef AbstractComboBoxModel    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef DerivedFieldContainerComboBoxModelPtr  Ptr;

    enum
    {
        DerivedFieldContainerTypesFieldId         = Inherited::NextFieldId,
        InternalDerivedFieldContainerTypesFieldId = DerivedFieldContainerTypesFieldId         + 1,
        InternalFieldContainerTypesFieldId        = InternalDerivedFieldContainerTypesFieldId + 1,
        IncludeAbstractFieldId                    = InternalFieldContainerTypesFieldId        + 1,
        NextFieldId                               = IncludeAbstractFieldId                    + 1
    };

    static const OSG::BitVector DerivedFieldContainerTypesFieldMask;
    static const OSG::BitVector InternalDerivedFieldContainerTypesFieldMask;
    static const OSG::BitVector InternalFieldContainerTypesFieldMask;
    static const OSG::BitVector IncludeAbstractFieldMask;


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

           MFString            *getMFDerivedFieldContainerTypes(void);
           SFBool              *getSFIncludeAbstract(void);

           bool                &getIncludeAbstract(void);
     const bool                &getIncludeAbstract(void) const;
           std::string         &getDerivedFieldContainerTypes(const UInt32 index);
           MFString            &getDerivedFieldContainerTypes(void);
     const MFString            &getDerivedFieldContainerTypes(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setIncludeAbstract( const bool &value );

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

    static  DerivedFieldContainerComboBoxModelPtr      create          (void); 
    static  DerivedFieldContainerComboBoxModelPtr      createEmpty     (void); 

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

    MFString            _mfDerivedFieldContainerTypes;
    MFUInt32            _mfInternalDerivedFieldContainerTypes;
    MFUInt32            _mfInternalFieldContainerTypes;
    SFBool              _sfIncludeAbstract;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DerivedFieldContainerComboBoxModelBase(void);
    DerivedFieldContainerComboBoxModelBase(const DerivedFieldContainerComboBoxModelBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DerivedFieldContainerComboBoxModelBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           MFUInt32            *getMFInternalDerivedFieldContainerTypes(void);
           MFUInt32            *getMFInternalFieldContainerTypes(void);

           UInt32              &getInternalDerivedFieldContainerTypes(UInt32 index);
           MFUInt32            &getInternalDerivedFieldContainerTypes(void);
     const MFUInt32            &getInternalDerivedFieldContainerTypes(void) const;
           UInt32              &getInternalFieldContainerTypes(UInt32 index);
           MFUInt32            &getInternalFieldContainerTypes(void);
     const MFUInt32            &getInternalFieldContainerTypes(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      DerivedFieldContainerComboBoxModelBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      DerivedFieldContainerComboBoxModelBase *pOther,
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
    void operator =(const DerivedFieldContainerComboBoxModelBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef DerivedFieldContainerComboBoxModelBase *DerivedFieldContainerComboBoxModelBaseP;

typedef osgIF<DerivedFieldContainerComboBoxModelBase::isNodeCore,
              CoredNodePtr<DerivedFieldContainerComboBoxModel>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet DerivedFieldContainerComboBoxModelNodePtr;

typedef RefPtr<DerivedFieldContainerComboBoxModelPtr> DerivedFieldContainerComboBoxModelRefPtr;

OSG_END_NAMESPACE

#define OSGDERIVEDFIELDCONTAINERCOMBOBOXMODELBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGDERIVEDFIELDCONTAINERCOMBOBOXMODELBASE_H_ */
