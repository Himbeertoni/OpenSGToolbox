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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSEARCHWINDOWEVENTDETAILSFIELDS_H_
#define _OSGSEARCHWINDOWEVENTDETAILSFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribTextDomDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class SearchWindowEventDetails;

OSG_GEN_CONTAINERPTR(SearchWindowEventDetails);

/*! \ingroup GrpContribTextDomFieldTraits
    \ingroup GrpLibOSGContribTextDom
 */
template <>
struct FieldTraits<SearchWindowEventDetails *> :
    public FieldTraitsFCPtrBase<SearchWindowEventDetails *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<SearchWindowEventDetails *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTEXTDOM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFSearchWindowEventDetailsPtr"; }
};

template<> inline
const Char8 *FieldTraits<SearchWindowEventDetails *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecSearchWindowEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<SearchWindowEventDetails *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecSearchWindowEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<SearchWindowEventDetails *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakSearchWindowEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<SearchWindowEventDetails *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdSearchWindowEventDetailsPtr"; 
}



#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribTextDomFieldSFields */
typedef PointerSField<SearchWindowEventDetails *,
                      RecordedRefCountPolicy  > SFRecSearchWindowEventDetailsPtr;
/*! \ingroup GrpContribTextDomFieldSFields */
typedef PointerSField<SearchWindowEventDetails *,
                      UnrecordedRefCountPolicy> SFUnrecSearchWindowEventDetailsPtr;
/*! \ingroup GrpContribTextDomFieldSFields */
typedef PointerSField<SearchWindowEventDetails *,
                      WeakRefCountPolicy      > SFWeakSearchWindowEventDetailsPtr;
/*! \ingroup GrpContribTextDomFieldSFields */
typedef PointerSField<SearchWindowEventDetails *,
                      NoRefCountPolicy        > SFUncountedSearchWindowEventDetailsPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribTextDomFieldSFields \ingroup GrpLibOSGContribTextDom */
struct SFRecSearchWindowEventDetailsPtr : 
    public PointerSField<SearchWindowEventDetails *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribTextDomFieldSFields \ingroup GrpLibOSGContribTextDom */
struct SFUnrecSearchWindowEventDetailsPtr : 
    public PointerSField<SearchWindowEventDetails *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribTextDomFieldSFields \ingroup GrpLibOSGContribTextDom */
struct SFWeakSearchWindowEventDetailsPtr :
    public PointerSField<SearchWindowEventDetails *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribTextDomFieldSFields \ingroup GrpLibOSGContribTextDom */
struct SFUncountedSearchWindowEventDetailsPtr :
    public PointerSField<SearchWindowEventDetails *,
                         NoRefCountPolicy> {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSEARCHWINDOWEVENTDETAILSFIELDS_H_ */