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


#ifndef _OSGANIMATORFIELDS_H_
#define _OSGANIMATORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGTBAnimationDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class TBAnimator;

OSG_GEN_CONTAINERPTR(TBAnimator);

/*! \ingroup GrpTBAnimationFieldTraits
    \ingroup GrpLibOSGTBAnimation
 */
template <>
struct FieldTraits<TBAnimator *> :
    public FieldTraitsFCPtrBase<TBAnimator *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<TBAnimator *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_TBANIMATION_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFTBAnimatorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFTBAnimatorPtr"; }
};

template<> inline
const Char8 *FieldTraits<TBAnimator *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTBAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<TBAnimator *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTBAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<TBAnimator *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTBAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<TBAnimator *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTBAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<TBAnimator *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTBAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<TBAnimator *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTBAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<TBAnimator *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTBAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<TBAnimator *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTBAnimatorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<TBAnimator *,
                      RecordedRefCountPolicy  > SFRecTBAnimatorPtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<TBAnimator *,
                      UnrecordedRefCountPolicy> SFUnrecTBAnimatorPtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<TBAnimator *,
                      WeakRefCountPolicy      > SFWeakTBAnimatorPtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<TBAnimator *,
                      NoRefCountPolicy        > SFUncountedTBAnimatorPtr;


/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<TBAnimator *,
                      RecordedRefCountPolicy  > MFRecTBAnimatorPtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<TBAnimator *,
                      UnrecordedRefCountPolicy> MFUnrecTBAnimatorPtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<TBAnimator *,
                      WeakRefCountPolicy      > MFWeakTBAnimatorPtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<TBAnimator *,
                      NoRefCountPolicy        > MFUncountedTBAnimatorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFRecTBAnimatorPtr : 
    public PointerSField<TBAnimator *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFUnrecTBAnimatorPtr : 
    public PointerSField<TBAnimator *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFWeakAnimatorPtr :
    public PointerSField<TBAnimator *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFUncountedTBAnimatorPtr :
    public PointerSField<TBAnimator *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFRecTBAnimatorPtr :
    public PointerMField<TBAnimator *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFUnrecTBAnimatorPtr :
    public PointerMField<TBAnimator *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFWeakTBAnimatorPtr :
    public PointerMField<TBAnimator *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFUncountedTBAnimatorPtr :
    public PointerMField<TBAnimator *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGANIMATORFIELDS_H_ */
