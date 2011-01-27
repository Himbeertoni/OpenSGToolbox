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


#ifndef _OSGBULLETCONESHAPEFIELDS_H_
#define _OSGBULLETCONESHAPEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribBulletDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class BulletConeShape;

OSG_GEN_CONTAINERPTR(BulletConeShape);

/*! \ingroup GrpContribBulletFieldTraits
    \ingroup GrpLibOSGContribBullet
 */
template <>
struct FieldTraits<BulletConeShape *> :
    public FieldTraitsFCPtrBase<BulletConeShape *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<BulletConeShape *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBBULLET_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFBulletConeShapePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFBulletConeShapePtr"; }
};

template<> inline
const Char8 *FieldTraits<BulletConeShape *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecBulletConeShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletConeShape *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecBulletConeShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletConeShape *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakBulletConeShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletConeShape *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdBulletConeShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletConeShape *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecBulletConeShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletConeShape *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecBulletConeShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletConeShape *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakBulletConeShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletConeShape *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdBulletConeShapePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribBulletFieldSFields */
typedef PointerSField<BulletConeShape *,
                      RecordedRefCountPolicy  > SFRecBulletConeShapePtr;
/*! \ingroup GrpContribBulletFieldSFields */
typedef PointerSField<BulletConeShape *,
                      UnrecordedRefCountPolicy> SFUnrecBulletConeShapePtr;
/*! \ingroup GrpContribBulletFieldSFields */
typedef PointerSField<BulletConeShape *,
                      WeakRefCountPolicy      > SFWeakBulletConeShapePtr;
/*! \ingroup GrpContribBulletFieldSFields */
typedef PointerSField<BulletConeShape *,
                      NoRefCountPolicy        > SFUncountedBulletConeShapePtr;


/*! \ingroup GrpContribBulletFieldMFields */
typedef PointerMField<BulletConeShape *,
                      RecordedRefCountPolicy  > MFRecBulletConeShapePtr;
/*! \ingroup GrpContribBulletFieldMFields */
typedef PointerMField<BulletConeShape *,
                      UnrecordedRefCountPolicy> MFUnrecBulletConeShapePtr;
/*! \ingroup GrpContribBulletFieldMFields */
typedef PointerMField<BulletConeShape *,
                      WeakRefCountPolicy      > MFWeakBulletConeShapePtr;
/*! \ingroup GrpContribBulletFieldMFields */
typedef PointerMField<BulletConeShape *,
                      NoRefCountPolicy        > MFUncountedBulletConeShapePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribBulletFieldSFields \ingroup GrpLibOSGContribBullet */
struct SFRecBulletConeShapePtr : 
    public PointerSField<BulletConeShape *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribBulletFieldSFields \ingroup GrpLibOSGContribBullet */
struct SFUnrecBulletConeShapePtr : 
    public PointerSField<BulletConeShape *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribBulletFieldSFields \ingroup GrpLibOSGContribBullet */
struct SFWeakBulletConeShapePtr :
    public PointerSField<BulletConeShape *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribBulletFieldSFields \ingroup GrpLibOSGContribBullet */
struct SFUncountedBulletConeShapePtr :
    public PointerSField<BulletConeShape *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribBulletFieldMFields \ingroup GrpLibOSGContribBullet */
struct MFRecBulletConeShapePtr :
    public PointerMField<BulletConeShape *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribBulletFieldMFields \ingroup GrpLibOSGContribBullet */
struct MFUnrecBulletConeShapePtr :
    public PointerMField<BulletConeShape *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribBulletFieldMFields \ingroup GrpLibOSGContribBullet */
struct MFWeakBulletConeShapePtr :
    public PointerMField<BulletConeShape *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribBulletFieldMFields \ingroup GrpLibOSGContribBullet */
struct MFUncountedBulletConeShapePtr :
    public PointerMField<BulletConeShape *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGBULLETCONESHAPEFIELDS_H_ */
