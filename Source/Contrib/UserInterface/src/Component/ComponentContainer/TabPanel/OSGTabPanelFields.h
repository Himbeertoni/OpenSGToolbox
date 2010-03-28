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


#ifndef _OSGTABPANELFIELDS_H_
#define _OSGTABPANELFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class TabPanel;

OSG_GEN_CONTAINERPTR(TabPanel);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<TabPanel *> :
    public FieldTraitsFCPtrBase<TabPanel *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<TabPanel *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFTabPanelPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFTabPanelPtr"; }
};

template<> inline
const Char8 *FieldTraits<TabPanel *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTabPanelPtr"; 
}

template<> inline
const Char8 *FieldTraits<TabPanel *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTabPanelPtr"; 
}

template<> inline
const Char8 *FieldTraits<TabPanel *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTabPanelPtr"; 
}

template<> inline
const Char8 *FieldTraits<TabPanel *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTabPanelPtr"; 
}

template<> inline
const Char8 *FieldTraits<TabPanel *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTabPanelPtr"; 
}

template<> inline
const Char8 *FieldTraits<TabPanel *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTabPanelPtr"; 
}

template<> inline
const Char8 *FieldTraits<TabPanel *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTabPanelPtr"; 
}

template<> inline
const Char8 *FieldTraits<TabPanel *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTabPanelPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TabPanel *,
                      RecordedRefCountPolicy  > SFRecTabPanelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TabPanel *,
                      UnrecordedRefCountPolicy> SFUnrecTabPanelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TabPanel *,
                      WeakRefCountPolicy      > SFWeakTabPanelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TabPanel *,
                      NoRefCountPolicy        > SFUncountedTabPanelPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TabPanel *,
                      RecordedRefCountPolicy  > MFRecTabPanelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TabPanel *,
                      UnrecordedRefCountPolicy> MFUnrecTabPanelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TabPanel *,
                      WeakRefCountPolicy      > MFWeakTabPanelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TabPanel *,
                      NoRefCountPolicy        > MFUncountedTabPanelPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecTabPanelPtr : 
    public PointerSField<TabPanel *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecTabPanelPtr : 
    public PointerSField<TabPanel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakTabPanelPtr :
    public PointerSField<TabPanel *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedTabPanelPtr :
    public PointerSField<TabPanel *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecTabPanelPtr :
    public PointerMField<TabPanel *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecTabPanelPtr :
    public PointerMField<TabPanel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakTabPanelPtr :
    public PointerMField<TabPanel *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedTabPanelPtr :
    public PointerMField<TabPanel *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGTABPANELFIELDS_H_ */