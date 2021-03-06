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


#ifndef _OSGLISTDATAEVENTDETAILSFIELDS_H_
#define _OSGLISTDATAEVENTDETAILSFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ListDataEventDetails;

OSG_GEN_CONTAINERPTR(ListDataEventDetails);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<ListDataEventDetails *> :
    public FieldTraitsFCPtrBase<ListDataEventDetails *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ListDataEventDetails *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFListDataEventDetailsPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFListDataEventDetailsPtr"; }
};

template<> inline
const Char8 *FieldTraits<ListDataEventDetails *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecListDataEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<ListDataEventDetails *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecListDataEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<ListDataEventDetails *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakListDataEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<ListDataEventDetails *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdListDataEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<ListDataEventDetails *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecListDataEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<ListDataEventDetails *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecListDataEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<ListDataEventDetails *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakListDataEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<ListDataEventDetails *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdListDataEventDetailsPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ListDataEventDetails *,
                      RecordedRefCountPolicy  > SFRecListDataEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ListDataEventDetails *,
                      UnrecordedRefCountPolicy> SFUnrecListDataEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ListDataEventDetails *,
                      WeakRefCountPolicy      > SFWeakListDataEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ListDataEventDetails *,
                      NoRefCountPolicy        > SFUncountedListDataEventDetailsPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ListDataEventDetails *,
                      RecordedRefCountPolicy  > MFRecListDataEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ListDataEventDetails *,
                      UnrecordedRefCountPolicy> MFUnrecListDataEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ListDataEventDetails *,
                      WeakRefCountPolicy      > MFWeakListDataEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ListDataEventDetails *,
                      NoRefCountPolicy        > MFUncountedListDataEventDetailsPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecListDataEventDetailsPtr : 
    public PointerSField<ListDataEventDetails *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecListDataEventDetailsPtr : 
    public PointerSField<ListDataEventDetails *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakListDataEventDetailsPtr :
    public PointerSField<ListDataEventDetails *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedListDataEventDetailsPtr :
    public PointerSField<ListDataEventDetails *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecListDataEventDetailsPtr :
    public PointerMField<ListDataEventDetails *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecListDataEventDetailsPtr :
    public PointerMField<ListDataEventDetails *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakListDataEventDetailsPtr :
    public PointerMField<ListDataEventDetails *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedListDataEventDetailsPtr :
    public PointerMField<ListDataEventDetails *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGLISTDATAEVENTDETAILSFIELDS_H_ */
