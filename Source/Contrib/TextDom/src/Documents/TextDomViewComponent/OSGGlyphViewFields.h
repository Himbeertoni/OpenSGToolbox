/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: Achyuthan Vasanth (vasanth.achyuthan@gmail.com)                  *
 *          David Kabala (djkabala@gmail.com)                                *
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


#ifndef _OSGGLYPHVIEWFIELDS_H_
#define _OSGGLYPHVIEWFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribTextDomDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class GlyphView;

OSG_GEN_CONTAINERPTR(GlyphView);

/*! \ingroup GrpContribTextDomFieldTraits
    \ingroup GrpLibOSGContribTextDom
 */
template <>
struct FieldTraits<GlyphView *> :
    public FieldTraitsFCPtrBase<GlyphView *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<GlyphView *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTEXTDOM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFGlyphViewPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFGlyphViewPtr"; }
};

template<> inline
const Char8 *FieldTraits<GlyphView *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecGlyphViewPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlyphView *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecGlyphViewPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlyphView *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakGlyphViewPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlyphView *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdGlyphViewPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlyphView *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecGlyphViewPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlyphView *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecGlyphViewPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlyphView *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakGlyphViewPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlyphView *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdGlyphViewPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribTextDomFieldSFields */
typedef PointerSField<GlyphView *,
                      RecordedRefCountPolicy  > SFRecGlyphViewPtr;
/*! \ingroup GrpContribTextDomFieldSFields */
typedef PointerSField<GlyphView *,
                      UnrecordedRefCountPolicy> SFUnrecGlyphViewPtr;
/*! \ingroup GrpContribTextDomFieldSFields */
typedef PointerSField<GlyphView *,
                      WeakRefCountPolicy      > SFWeakGlyphViewPtr;
/*! \ingroup GrpContribTextDomFieldSFields */
typedef PointerSField<GlyphView *,
                      NoRefCountPolicy        > SFUncountedGlyphViewPtr;


/*! \ingroup GrpContribTextDomFieldMFields */
typedef PointerMField<GlyphView *,
                      RecordedRefCountPolicy  > MFRecGlyphViewPtr;
/*! \ingroup GrpContribTextDomFieldMFields */
typedef PointerMField<GlyphView *,
                      UnrecordedRefCountPolicy> MFUnrecGlyphViewPtr;
/*! \ingroup GrpContribTextDomFieldMFields */
typedef PointerMField<GlyphView *,
                      WeakRefCountPolicy      > MFWeakGlyphViewPtr;
/*! \ingroup GrpContribTextDomFieldMFields */
typedef PointerMField<GlyphView *,
                      NoRefCountPolicy        > MFUncountedGlyphViewPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribTextDomFieldSFields \ingroup GrpLibOSGContribTextDom */
struct SFRecGlyphViewPtr : 
    public PointerSField<GlyphView *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribTextDomFieldSFields \ingroup GrpLibOSGContribTextDom */
struct SFUnrecGlyphViewPtr : 
    public PointerSField<GlyphView *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribTextDomFieldSFields \ingroup GrpLibOSGContribTextDom */
struct SFWeakGlyphViewPtr :
    public PointerSField<GlyphView *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribTextDomFieldSFields \ingroup GrpLibOSGContribTextDom */
struct SFUncountedGlyphViewPtr :
    public PointerSField<GlyphView *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribTextDomFieldMFields \ingroup GrpLibOSGContribTextDom */
struct MFRecGlyphViewPtr :
    public PointerMField<GlyphView *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribTextDomFieldMFields \ingroup GrpLibOSGContribTextDom */
struct MFUnrecGlyphViewPtr :
    public PointerMField<GlyphView *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribTextDomFieldMFields \ingroup GrpLibOSGContribTextDom */
struct MFWeakGlyphViewPtr :
    public PointerMField<GlyphView *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribTextDomFieldMFields \ingroup GrpLibOSGContribTextDom */
struct MFUncountedGlyphViewPtr :
    public PointerMField<GlyphView *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGGLYPHVIEWFIELDS_H_ */
