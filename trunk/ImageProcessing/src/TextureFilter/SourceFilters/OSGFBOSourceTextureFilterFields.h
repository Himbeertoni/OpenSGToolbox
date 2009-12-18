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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGFBOSOURCETEXTUREFILTERFIELDS_H_
#define _OSGFBOSOURCETEXTUREFILTERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>

#include <OpenSG/OSGFieldContainerPtr.h>
#include <OpenSG/OSGNodeCoreFieldDataType.h>
#include "OSGImageProcessingDef.h"

#include "OSGSourceTextureFilterFields.h"

OSG_BEGIN_NAMESPACE

class FBOSourceTextureFilter;

#if !defined(OSG_DO_DOC)   // created as a dummy class, remove to prevent doubles
//! FBOSourceTextureFilterPtr

typedef FCPtr<SourceTextureFilterPtr, FBOSourceTextureFilter> FBOSourceTextureFilterPtr;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpImageProcessingFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldDataTraits<FBOSourceTextureFilterPtr> : 
    public FieldTraitsRecurseMapper<FBOSourceTextureFilterPtr, true>
{
    static DataType             _type;                       

    enum                        { StringConvertable = 0x00 };
    enum                        { bHasParent        = 0x01 };

    static DataType   &getType (void) { return _type;        }

    static const char *getSName(void) { return "SFFBOSourceTextureFilterPtr"; }
    static const char *getMName(void) { return "MFFBOSourceTextureFilterPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsRecurseMapper<FBOSourceTextureFilterPtr, true>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpImageProcessingFieldSingle */

typedef SField<FBOSourceTextureFilterPtr> SFFBOSourceTextureFilterPtr;
#endif

#ifndef OSG_COMPILEFBOSOURCETEXTUREFILTERINST
OSG_DLLEXPORT_DECL1(SField, FBOSourceTextureFilterPtr, OSG_IMAGEPROCESSINGLIB_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpImageProcessingFieldMulti */

typedef MField<FBOSourceTextureFilterPtr> MFFBOSourceTextureFilterPtr;
#endif

#ifndef OSG_COMPILEFBOSOURCETEXTUREFILTERINST
OSG_DLLEXPORT_DECL1(MField, FBOSourceTextureFilterPtr, OSG_IMAGEPROCESSINGLIB_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#endif /* _OSGFBOSOURCETEXTUREFILTERFIELDS_H_ */
