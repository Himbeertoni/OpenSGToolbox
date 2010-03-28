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


#ifndef _OSGABSTRACTLISTMODELFIELDS_H_
#define _OSGABSTRACTLISTMODELFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class AbstractListModel;

OSG_GEN_CONTAINERPTR(AbstractListModel);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<AbstractListModel *> :
    public FieldTraitsFCPtrBase<AbstractListModel *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<AbstractListModel *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFAbstractListModelPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFAbstractListModelPtr"; }
};

template<> inline
const Char8 *FieldTraits<AbstractListModel *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecAbstractListModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractListModel *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecAbstractListModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractListModel *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakAbstractListModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractListModel *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdAbstractListModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractListModel *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecAbstractListModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractListModel *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecAbstractListModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractListModel *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakAbstractListModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractListModel *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdAbstractListModelPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractListModel *,
                      RecordedRefCountPolicy  > SFRecAbstractListModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractListModel *,
                      UnrecordedRefCountPolicy> SFUnrecAbstractListModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractListModel *,
                      WeakRefCountPolicy      > SFWeakAbstractListModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractListModel *,
                      NoRefCountPolicy        > SFUncountedAbstractListModelPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractListModel *,
                      RecordedRefCountPolicy  > MFRecAbstractListModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractListModel *,
                      UnrecordedRefCountPolicy> MFUnrecAbstractListModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractListModel *,
                      WeakRefCountPolicy      > MFWeakAbstractListModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractListModel *,
                      NoRefCountPolicy        > MFUncountedAbstractListModelPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecAbstractListModelPtr : 
    public PointerSField<AbstractListModel *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecAbstractListModelPtr : 
    public PointerSField<AbstractListModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakAbstractListModelPtr :
    public PointerSField<AbstractListModel *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedAbstractListModelPtr :
    public PointerSField<AbstractListModel *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecAbstractListModelPtr :
    public PointerMField<AbstractListModel *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecAbstractListModelPtr :
    public PointerMField<AbstractListModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakAbstractListModelPtr :
    public PointerMField<AbstractListModel *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedAbstractListModelPtr :
    public PointerMField<AbstractListModel *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGABSTRACTLISTMODELFIELDS_H_ */