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


#ifndef _OSGTREESELECTIONEVENTDETAILSFIELDS_H_
#define _OSGTREESELECTIONEVENTDETAILSFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class TreeSelectionEventDetails;

OSG_GEN_CONTAINERPTR(TreeSelectionEventDetails);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<TreeSelectionEventDetails *> :
    public FieldTraitsFCPtrBase<TreeSelectionEventDetails *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<TreeSelectionEventDetails *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFTreeSelectionEventDetailsPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFTreeSelectionEventDetailsPtr"; }
};

template<> inline
const Char8 *FieldTraits<TreeSelectionEventDetails *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTreeSelectionEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<TreeSelectionEventDetails *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTreeSelectionEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<TreeSelectionEventDetails *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTreeSelectionEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<TreeSelectionEventDetails *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTreeSelectionEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<TreeSelectionEventDetails *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTreeSelectionEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<TreeSelectionEventDetails *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTreeSelectionEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<TreeSelectionEventDetails *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTreeSelectionEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<TreeSelectionEventDetails *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTreeSelectionEventDetailsPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TreeSelectionEventDetails *,
                      RecordedRefCountPolicy  > SFRecTreeSelectionEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TreeSelectionEventDetails *,
                      UnrecordedRefCountPolicy> SFUnrecTreeSelectionEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TreeSelectionEventDetails *,
                      WeakRefCountPolicy      > SFWeakTreeSelectionEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TreeSelectionEventDetails *,
                      NoRefCountPolicy        > SFUncountedTreeSelectionEventDetailsPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TreeSelectionEventDetails *,
                      RecordedRefCountPolicy  > MFRecTreeSelectionEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TreeSelectionEventDetails *,
                      UnrecordedRefCountPolicy> MFUnrecTreeSelectionEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TreeSelectionEventDetails *,
                      WeakRefCountPolicy      > MFWeakTreeSelectionEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TreeSelectionEventDetails *,
                      NoRefCountPolicy        > MFUncountedTreeSelectionEventDetailsPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecTreeSelectionEventDetailsPtr : 
    public PointerSField<TreeSelectionEventDetails *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecTreeSelectionEventDetailsPtr : 
    public PointerSField<TreeSelectionEventDetails *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakTreeSelectionEventDetailsPtr :
    public PointerSField<TreeSelectionEventDetails *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedTreeSelectionEventDetailsPtr :
    public PointerSField<TreeSelectionEventDetails *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecTreeSelectionEventDetailsPtr :
    public PointerMField<TreeSelectionEventDetails *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecTreeSelectionEventDetailsPtr :
    public PointerMField<TreeSelectionEventDetails *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakTreeSelectionEventDetailsPtr :
    public PointerMField<TreeSelectionEventDetails *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedTreeSelectionEventDetailsPtr :
    public PointerMField<TreeSelectionEventDetails *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGTREESELECTIONEVENTDETAILSFIELDS_H_ */