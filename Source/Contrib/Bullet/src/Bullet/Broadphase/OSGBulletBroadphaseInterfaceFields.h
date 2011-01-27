/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
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


#ifndef _OSGBULLETBROADPHASEINTERFACEFIELDS_H_
#define _OSGBULLETBROADPHASEINTERFACEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribBulletDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class BulletBroadphaseInterface;

OSG_GEN_CONTAINERPTR(BulletBroadphaseInterface);

/*! \ingroup GrpContribBulletFieldTraits
    \ingroup GrpLibOSGContribBullet
 */
template <>
struct FieldTraits<BulletBroadphaseInterface *> :
    public FieldTraitsFCPtrBase<BulletBroadphaseInterface *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<BulletBroadphaseInterface *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBBULLET_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFBulletBroadphaseInterfacePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFBulletBroadphaseInterfacePtr"; }
};

template<> inline
const Char8 *FieldTraits<BulletBroadphaseInterface *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecBulletBroadphaseInterfacePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletBroadphaseInterface *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecBulletBroadphaseInterfacePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletBroadphaseInterface *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakBulletBroadphaseInterfacePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletBroadphaseInterface *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdBulletBroadphaseInterfacePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletBroadphaseInterface *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecBulletBroadphaseInterfacePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletBroadphaseInterface *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecBulletBroadphaseInterfacePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletBroadphaseInterface *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakBulletBroadphaseInterfacePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletBroadphaseInterface *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdBulletBroadphaseInterfacePtr"; 
}


/*! \ingroup GrpContribBulletFieldTraits
 */
template <>
struct FieldTraits<BulletBroadphaseInterface *, 1> :
    public FieldTraitsFCPtrBase<BulletBroadphaseInterface *, 1>
{
  private:

  public:
    typedef FieldTraits<BulletBroadphaseInterface *, 1>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBBULLET_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);
};

template<> inline
const Char8 *FieldTraits<BulletBroadphaseInterface *, 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChildBulletBroadphaseInterfacePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletBroadphaseInterface *, 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChildBulletBroadphaseInterfacePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletBroadphaseInterface *, 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChildBulletBroadphaseInterfacePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletBroadphaseInterface *, 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChildBulletBroadphaseInterfacePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletBroadphaseInterface *, 1>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecChildBulletBroadphaseInterfacePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletBroadphaseInterface *, 1>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecChildBulletBroadphaseInterfacePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletBroadphaseInterface *, 1>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakChildBulletBroadphaseInterfacePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletBroadphaseInterface *, 1>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdChildBulletBroadphaseInterfacePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribBulletFieldSFields */
typedef PointerSField<BulletBroadphaseInterface *,
                      RecordedRefCountPolicy  > SFRecBulletBroadphaseInterfacePtr;
/*! \ingroup GrpContribBulletFieldSFields */
typedef PointerSField<BulletBroadphaseInterface *,
                      UnrecordedRefCountPolicy> SFUnrecBulletBroadphaseInterfacePtr;
/*! \ingroup GrpContribBulletFieldSFields */
typedef PointerSField<BulletBroadphaseInterface *,
                      WeakRefCountPolicy      > SFWeakBulletBroadphaseInterfacePtr;
/*! \ingroup GrpContribBulletFieldSFields */
typedef PointerSField<BulletBroadphaseInterface *,
                      NoRefCountPolicy        > SFUncountedBulletBroadphaseInterfacePtr;


/*! \ingroup GrpContribBulletFieldMFields */
typedef PointerMField<BulletBroadphaseInterface *,
                      RecordedRefCountPolicy  > MFRecBulletBroadphaseInterfacePtr;
/*! \ingroup GrpContribBulletFieldMFields */
typedef PointerMField<BulletBroadphaseInterface *,
                      UnrecordedRefCountPolicy> MFUnrecBulletBroadphaseInterfacePtr;
/*! \ingroup GrpContribBulletFieldMFields */
typedef PointerMField<BulletBroadphaseInterface *,
                      WeakRefCountPolicy      > MFWeakBulletBroadphaseInterfacePtr;
/*! \ingroup GrpContribBulletFieldMFields */
typedef PointerMField<BulletBroadphaseInterface *,
                      NoRefCountPolicy        > MFUncountedBulletBroadphaseInterfacePtr;



/*! \ingroup GrpContribBulletFieldSFields */
typedef ChildPointerSField<
          BulletBroadphaseInterface *, 
          UnrecordedRefCountPolicy,
          1             > SFUnrecChildBulletBroadphaseInterfacePtr;



#else // these are the doxygen hacks

/*! \ingroup GrpContribBulletFieldSFields \ingroup GrpLibOSGContribBullet */
struct SFRecBulletBroadphaseInterfacePtr : 
    public PointerSField<BulletBroadphaseInterface *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribBulletFieldSFields \ingroup GrpLibOSGContribBullet */
struct SFUnrecBulletBroadphaseInterfacePtr : 
    public PointerSField<BulletBroadphaseInterface *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribBulletFieldSFields \ingroup GrpLibOSGContribBullet */
struct SFWeakBulletBroadphaseInterfacePtr :
    public PointerSField<BulletBroadphaseInterface *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribBulletFieldSFields \ingroup GrpLibOSGContribBullet */
struct SFUncountedBulletBroadphaseInterfacePtr :
    public PointerSField<BulletBroadphaseInterface *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribBulletFieldMFields \ingroup GrpLibOSGContribBullet */
struct MFRecBulletBroadphaseInterfacePtr :
    public PointerMField<BulletBroadphaseInterface *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribBulletFieldMFields \ingroup GrpLibOSGContribBullet */
struct MFUnrecBulletBroadphaseInterfacePtr :
    public PointerMField<BulletBroadphaseInterface *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribBulletFieldMFields \ingroup GrpLibOSGContribBullet */
struct MFWeakBulletBroadphaseInterfacePtr :
    public PointerMField<BulletBroadphaseInterface *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribBulletFieldMFields \ingroup GrpLibOSGContribBullet */
struct MFUncountedBulletBroadphaseInterfacePtr :
    public PointerMField<BulletBroadphaseInterface *,
                         NoRefCountPolicy        > {};



/*! \ingroup GrpContribBulletFieldSFields \ingroup GrpLibOSGContribBullet */
struct SFUnrecChildBulletBroadphaseInterfacePtr :
    public ChildPointerSField<
        BulletBroadphaseInterface *, 
        UnrecordedRefCountPolicy,
        1             > {};


#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGBULLETBROADPHASEINTERFACEFIELDS_H_ */
