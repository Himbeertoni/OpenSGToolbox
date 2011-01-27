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


#ifndef _OSGBULLETBOXSHAPEFIELDS_H_
#define _OSGBULLETBOXSHAPEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribBulletDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class BulletBoxShape;

OSG_GEN_CONTAINERPTR(BulletBoxShape);

/*! \ingroup GrpContribBulletFieldTraits
    \ingroup GrpLibOSGContribBullet
 */
template <>
struct FieldTraits<BulletBoxShape *> :
    public FieldTraitsFCPtrBase<BulletBoxShape *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<BulletBoxShape *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBBULLET_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFBulletBoxShapePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFBulletBoxShapePtr"; }
};

template<> inline
const Char8 *FieldTraits<BulletBoxShape *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecBulletBoxShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletBoxShape *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecBulletBoxShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletBoxShape *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakBulletBoxShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletBoxShape *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdBulletBoxShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletBoxShape *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecBulletBoxShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletBoxShape *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecBulletBoxShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletBoxShape *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakBulletBoxShapePtr"; 
}

template<> inline
const Char8 *FieldTraits<BulletBoxShape *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdBulletBoxShapePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribBulletFieldSFields */
typedef PointerSField<BulletBoxShape *,
                      RecordedRefCountPolicy  > SFRecBulletBoxShapePtr;
/*! \ingroup GrpContribBulletFieldSFields */
typedef PointerSField<BulletBoxShape *,
                      UnrecordedRefCountPolicy> SFUnrecBulletBoxShapePtr;
/*! \ingroup GrpContribBulletFieldSFields */
typedef PointerSField<BulletBoxShape *,
                      WeakRefCountPolicy      > SFWeakBulletBoxShapePtr;
/*! \ingroup GrpContribBulletFieldSFields */
typedef PointerSField<BulletBoxShape *,
                      NoRefCountPolicy        > SFUncountedBulletBoxShapePtr;


/*! \ingroup GrpContribBulletFieldMFields */
typedef PointerMField<BulletBoxShape *,
                      RecordedRefCountPolicy  > MFRecBulletBoxShapePtr;
/*! \ingroup GrpContribBulletFieldMFields */
typedef PointerMField<BulletBoxShape *,
                      UnrecordedRefCountPolicy> MFUnrecBulletBoxShapePtr;
/*! \ingroup GrpContribBulletFieldMFields */
typedef PointerMField<BulletBoxShape *,
                      WeakRefCountPolicy      > MFWeakBulletBoxShapePtr;
/*! \ingroup GrpContribBulletFieldMFields */
typedef PointerMField<BulletBoxShape *,
                      NoRefCountPolicy        > MFUncountedBulletBoxShapePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribBulletFieldSFields \ingroup GrpLibOSGContribBullet */
struct SFRecBulletBoxShapePtr : 
    public PointerSField<BulletBoxShape *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribBulletFieldSFields \ingroup GrpLibOSGContribBullet */
struct SFUnrecBulletBoxShapePtr : 
    public PointerSField<BulletBoxShape *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribBulletFieldSFields \ingroup GrpLibOSGContribBullet */
struct SFWeakBulletBoxShapePtr :
    public PointerSField<BulletBoxShape *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribBulletFieldSFields \ingroup GrpLibOSGContribBullet */
struct SFUncountedBulletBoxShapePtr :
    public PointerSField<BulletBoxShape *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribBulletFieldMFields \ingroup GrpLibOSGContribBullet */
struct MFRecBulletBoxShapePtr :
    public PointerMField<BulletBoxShape *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribBulletFieldMFields \ingroup GrpLibOSGContribBullet */
struct MFUnrecBulletBoxShapePtr :
    public PointerMField<BulletBoxShape *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribBulletFieldMFields \ingroup GrpLibOSGContribBullet */
struct MFWeakBulletBoxShapePtr :
    public PointerMField<BulletBoxShape *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribBulletFieldMFields \ingroup GrpLibOSGContribBullet */
struct MFUncountedBulletBoxShapePtr :
    public PointerMField<BulletBoxShape *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGBULLETBOXSHAPEFIELDS_H_ */
