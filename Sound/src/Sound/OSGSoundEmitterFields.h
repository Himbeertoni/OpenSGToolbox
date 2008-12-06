/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Sound                               *
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


#ifndef _OSGSOUNDEMITTERFIELDS_H_
#define _OSGSOUNDEMITTERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>

#include <OpenSG/OSGFieldContainerPtr.h>
#include <OpenSG/OSGNodeCoreFieldDataType.h>
#include "OSGSoundDef.h"

#include <OpenSG/OSGNodeCoreFields.h>

OSG_BEGIN_NAMESPACE

class SoundEmitter;

#if !defined(OSG_DO_DOC)   // created as a dummy class, remove to prevent doubles
//! SoundEmitterPtr

typedef FCPtr<NodeCorePtr, SoundEmitter> SoundEmitterPtr;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpSoundFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldDataTraits<SoundEmitterPtr> : 
    public FieldTraitsRecurseMapper<SoundEmitterPtr, true>
{
    static DataType             _type;                       

    enum                        { StringConvertable = 0x00 };
    enum                        { bHasParent        = 0x01 };

    static DataType   &getType (void) { return _type;        }

    static const char *getSName(void) { return "SFSoundEmitterPtr"; }
    static const char *getMName(void) { return "MFSoundEmitterPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsRecurseMapper<SoundEmitterPtr, true>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSoundFieldSingle */

typedef SField<SoundEmitterPtr> SFSoundEmitterPtr;
#endif

#ifndef OSG_COMPILESOUNDEMITTERINST
OSG_DLLEXPORT_DECL1(SField, SoundEmitterPtr, OSG_SOUNDLIB_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSoundFieldMulti */

typedef MField<SoundEmitterPtr> MFSoundEmitterPtr;
#endif

#ifndef OSG_COMPILESOUNDEMITTERINST
OSG_DLLEXPORT_DECL1(MField, SoundEmitterPtr, OSG_SOUNDLIB_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#define OSGSOUNDEMITTERFIELDS_HEADER_CVSID "@(#)$Id: FCFieldsTemplate_h.h,v 1.26 2006/02/20 16:55:35 dirk Exp $"

#endif /* _OSGSOUNDEMITTERFIELDS_H_ */
