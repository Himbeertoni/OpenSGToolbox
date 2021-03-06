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


#ifndef _OSGCHANGEEVENTDETAILSFIELDS_H_
#define _OSGCHANGEEVENTDETAILSFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ChangeEventDetails;

OSG_GEN_CONTAINERPTR(ChangeEventDetails);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<ChangeEventDetails *> :
    public FieldTraitsFCPtrBase<ChangeEventDetails *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ChangeEventDetails *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFChangeEventDetailsPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFChangeEventDetailsPtr"; }
};

template<> inline
const Char8 *FieldTraits<ChangeEventDetails *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChangeEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<ChangeEventDetails *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChangeEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<ChangeEventDetails *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChangeEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<ChangeEventDetails *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChangeEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<ChangeEventDetails *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecChangeEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<ChangeEventDetails *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecChangeEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<ChangeEventDetails *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakChangeEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<ChangeEventDetails *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdChangeEventDetailsPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ChangeEventDetails *,
                      RecordedRefCountPolicy  > SFRecChangeEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ChangeEventDetails *,
                      UnrecordedRefCountPolicy> SFUnrecChangeEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ChangeEventDetails *,
                      WeakRefCountPolicy      > SFWeakChangeEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ChangeEventDetails *,
                      NoRefCountPolicy        > SFUncountedChangeEventDetailsPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ChangeEventDetails *,
                      RecordedRefCountPolicy  > MFRecChangeEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ChangeEventDetails *,
                      UnrecordedRefCountPolicy> MFUnrecChangeEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ChangeEventDetails *,
                      WeakRefCountPolicy      > MFWeakChangeEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ChangeEventDetails *,
                      NoRefCountPolicy        > MFUncountedChangeEventDetailsPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecChangeEventDetailsPtr : 
    public PointerSField<ChangeEventDetails *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecChangeEventDetailsPtr : 
    public PointerSField<ChangeEventDetails *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakChangeEventDetailsPtr :
    public PointerSField<ChangeEventDetails *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedChangeEventDetailsPtr :
    public PointerSField<ChangeEventDetails *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecChangeEventDetailsPtr :
    public PointerMField<ChangeEventDetails *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecChangeEventDetailsPtr :
    public PointerMField<ChangeEventDetails *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakChangeEventDetailsPtr :
    public PointerMField<ChangeEventDetails *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedChangeEventDetailsPtr :
    public PointerMField<ChangeEventDetails *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCHANGEEVENTDETAILSFIELDS_H_ */
