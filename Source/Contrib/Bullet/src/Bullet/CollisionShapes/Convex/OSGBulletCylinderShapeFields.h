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


#ifndef _OSGBULLETCYLINDERSHAPEFIELDS_H_
#define _OSGBULLETCYLINDERSHAPEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribBulletDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class BulletCylinderShape;

OSG_GEN_CONTAINERPTR(BulletCylinderShape);

/*! \ingroup GrpContribBulletFieldTraits
    \ingroup GrpLibOSGContribBullet
 */
template <>
struct FieldTraits<BulletCylinderShape *> :
    public FieldTraitsFCPtrBase<BulletCylinderShape *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<BulletCylinderShape *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBBULLET_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFBulletCylinderShapePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFBulletCylinderShapePtr"; }
};

template<> inline
const Char8 *FieldTraits<BulletCylinderShape *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecBulletCylinderShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletCylinderShape *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecBulletCylinderShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletCylinderShape *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakBulletCylinderShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletCylinderShape *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdBulletCylinderShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletCylinderShape *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecBulletCylinderShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletCylinderShape *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecBulletCylinderShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletCylinderShape *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakBulletCylinderShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletCylinderShape *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdBulletCylinderShapePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribBulletFieldSFields */
typedef PointerSField<BulletCylinderShape *,
                      RecordedRefCountPolicy  > SFRecBulletCylinderShapePtr;
/*! \ingroup GrpContribBulletFieldSFields */
typedef PointerSField<BulletCylinderShape *,
                      UnrecordedRefCountPolicy> SFUnrecBulletCylinderShapePtr;
/*! \ingroup GrpContribBulletFieldSFields */
typedef PointerSField<BulletCylinderShape *,
                      WeakRefCountPolicy      > SFWeakBulletCylinderShapePtr;
/*! \ingroup GrpContribBulletFieldSFields */
typedef PointerSField<BulletCylinderShape *,
                      NoRefCountPolicy        > SFUncountedBulletCylinderShapePtr;


/*! \ingroup GrpContribBulletFieldMFields */
typedef PointerMField<BulletCylinderShape *,
                      RecordedRefCountPolicy  > MFRecBulletCylinderShapePtr;
/*! \ingroup GrpContribBulletFieldMFields */
typedef PointerMField<BulletCylinderShape *,
                      UnrecordedRefCountPolicy> MFUnrecBulletCylinderShapePtr;
/*! \ingroup GrpContribBulletFieldMFields */
typedef PointerMField<BulletCylinderShape *,
                      WeakRefCountPolicy      > MFWeakBulletCylinderShapePtr;
/*! \ingroup GrpContribBulletFieldMFields */
typedef PointerMField<BulletCylinderShape *,
                      NoRefCountPolicy        > MFUncountedBulletCylinderShapePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribBulletFieldSFields \ingroup GrpLibOSGContribBullet */
struct SFRecBulletCylinderShapePtr : 
    public PointerSField<BulletCylinderShape *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribBulletFieldSFields \ingroup GrpLibOSGContribBullet */
struct SFUnrecBulletCylinderShapePtr : 
    public PointerSField<BulletCylinderShape *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribBulletFieldSFields \ingroup GrpLibOSGContribBullet */
struct SFWeakBulletCylinderShapePtr :
    public PointerSField<BulletCylinderShape *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribBulletFieldSFields \ingroup GrpLibOSGContribBullet */
struct SFUncountedBulletCylinderShapePtr :
    public PointerSField<BulletCylinderShape *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribBulletFieldMFields \ingroup GrpLibOSGContribBullet */
struct MFRecBulletCylinderShapePtr :
    public PointerMField<BulletCylinderShape *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribBulletFieldMFields \ingroup GrpLibOSGContribBullet */
struct MFUnrecBulletCylinderShapePtr :
    public PointerMField<BulletCylinderShape *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribBulletFieldMFields \ingroup GrpLibOSGContribBullet */
struct MFWeakBulletCylinderShapePtr :
    public PointerMField<BulletCylinderShape *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribBulletFieldMFields \ingroup GrpLibOSGContribBullet */
struct MFUncountedBulletCylinderShapePtr :
    public PointerMField<BulletCylinderShape *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGBULLETCYLINDERSHAPEFIELDS_H_ */
