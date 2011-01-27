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


#ifndef _OSGBULLETCONVEXHULLSHAPEFIELDS_H_
#define _OSGBULLETCONVEXHULLSHAPEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribBulletDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class BulletConvexHullShape;

OSG_GEN_CONTAINERPTR(BulletConvexHullShape);

/*! \ingroup GrpContribBulletFieldTraits
    \ingroup GrpLibOSGContribBullet
 */
template <>
struct FieldTraits<BulletConvexHullShape *> :
    public FieldTraitsFCPtrBase<BulletConvexHullShape *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<BulletConvexHullShape *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBBULLET_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFBulletConvexHullShapePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFBulletConvexHullShapePtr"; }
};

template<> inline
const Char8 *FieldTraits<BulletConvexHullShape *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecBulletConvexHullShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletConvexHullShape *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecBulletConvexHullShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletConvexHullShape *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakBulletConvexHullShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletConvexHullShape *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdBulletConvexHullShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletConvexHullShape *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecBulletConvexHullShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletConvexHullShape *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecBulletConvexHullShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletConvexHullShape *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakBulletConvexHullShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletConvexHullShape *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdBulletConvexHullShapePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribBulletFieldSFields */
typedef PointerSField<BulletConvexHullShape *,
                      RecordedRefCountPolicy  > SFRecBulletConvexHullShapePtr;
/*! \ingroup GrpContribBulletFieldSFields */
typedef PointerSField<BulletConvexHullShape *,
                      UnrecordedRefCountPolicy> SFUnrecBulletConvexHullShapePtr;
/*! \ingroup GrpContribBulletFieldSFields */
typedef PointerSField<BulletConvexHullShape *,
                      WeakRefCountPolicy      > SFWeakBulletConvexHullShapePtr;
/*! \ingroup GrpContribBulletFieldSFields */
typedef PointerSField<BulletConvexHullShape *,
                      NoRefCountPolicy        > SFUncountedBulletConvexHullShapePtr;


/*! \ingroup GrpContribBulletFieldMFields */
typedef PointerMField<BulletConvexHullShape *,
                      RecordedRefCountPolicy  > MFRecBulletConvexHullShapePtr;
/*! \ingroup GrpContribBulletFieldMFields */
typedef PointerMField<BulletConvexHullShape *,
                      UnrecordedRefCountPolicy> MFUnrecBulletConvexHullShapePtr;
/*! \ingroup GrpContribBulletFieldMFields */
typedef PointerMField<BulletConvexHullShape *,
                      WeakRefCountPolicy      > MFWeakBulletConvexHullShapePtr;
/*! \ingroup GrpContribBulletFieldMFields */
typedef PointerMField<BulletConvexHullShape *,
                      NoRefCountPolicy        > MFUncountedBulletConvexHullShapePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribBulletFieldSFields \ingroup GrpLibOSGContribBullet */
struct SFRecBulletConvexHullShapePtr : 
    public PointerSField<BulletConvexHullShape *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribBulletFieldSFields \ingroup GrpLibOSGContribBullet */
struct SFUnrecBulletConvexHullShapePtr : 
    public PointerSField<BulletConvexHullShape *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribBulletFieldSFields \ingroup GrpLibOSGContribBullet */
struct SFWeakBulletConvexHullShapePtr :
    public PointerSField<BulletConvexHullShape *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribBulletFieldSFields \ingroup GrpLibOSGContribBullet */
struct SFUncountedBulletConvexHullShapePtr :
    public PointerSField<BulletConvexHullShape *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribBulletFieldMFields \ingroup GrpLibOSGContribBullet */
struct MFRecBulletConvexHullShapePtr :
    public PointerMField<BulletConvexHullShape *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribBulletFieldMFields \ingroup GrpLibOSGContribBullet */
struct MFUnrecBulletConvexHullShapePtr :
    public PointerMField<BulletConvexHullShape *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribBulletFieldMFields \ingroup GrpLibOSGContribBullet */
struct MFWeakBulletConvexHullShapePtr :
    public PointerMField<BulletConvexHullShape *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribBulletFieldMFields \ingroup GrpLibOSGContribBullet */
struct MFUncountedBulletConvexHullShapePtr :
    public PointerMField<BulletConvexHullShape *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGBULLETCONVEXHULLSHAPEFIELDS_H_ */
