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


#ifndef _OSGKEYFRAMENUMBERSEQUENCEFIELDS_H_
#define _OSGKEYFRAMENUMBERSEQUENCEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDynamicsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class KeyframeNumberSequence;

OSG_GEN_CONTAINERPTR(KeyframeNumberSequence);

/*! \ingroup GrpDynamicsFieldTraits
    \ingroup GrpLibOSGDynamics
 */
template <>
struct FieldTraits<KeyframeNumberSequence *> :
    public FieldTraitsFCPtrBase<KeyframeNumberSequence *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<KeyframeNumberSequence *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DYNAMICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFKeyframeNumberSequencePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFKeyframeNumberSequencePtr"; }
};

template<> inline
const Char8 *FieldTraits<KeyframeNumberSequence *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecKeyframeNumberSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeNumberSequence *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecKeyframeNumberSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeNumberSequence *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakKeyframeNumberSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeNumberSequence *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdKeyframeNumberSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeNumberSequence *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecKeyframeNumberSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeNumberSequence *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecKeyframeNumberSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeNumberSequence *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakKeyframeNumberSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeNumberSequence *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdKeyframeNumberSequencePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<KeyframeNumberSequence *,
                      RecordedRefCountPolicy  > SFRecKeyframeNumberSequencePtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<KeyframeNumberSequence *,
                      UnrecordedRefCountPolicy> SFUnrecKeyframeNumberSequencePtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<KeyframeNumberSequence *,
                      WeakRefCountPolicy      > SFWeakKeyframeNumberSequencePtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<KeyframeNumberSequence *,
                      NoRefCountPolicy        > SFUncountedKeyframeNumberSequencePtr;


/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<KeyframeNumberSequence *,
                      RecordedRefCountPolicy  > MFRecKeyframeNumberSequencePtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<KeyframeNumberSequence *,
                      UnrecordedRefCountPolicy> MFUnrecKeyframeNumberSequencePtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<KeyframeNumberSequence *,
                      WeakRefCountPolicy      > MFWeakKeyframeNumberSequencePtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<KeyframeNumberSequence *,
                      NoRefCountPolicy        > MFUncountedKeyframeNumberSequencePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFRecKeyframeNumberSequencePtr : 
    public PointerSField<KeyframeNumberSequence *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUnrecKeyframeNumberSequencePtr : 
    public PointerSField<KeyframeNumberSequence *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFWeakKeyframeNumberSequencePtr :
    public PointerSField<KeyframeNumberSequence *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUncountedKeyframeNumberSequencePtr :
    public PointerSField<KeyframeNumberSequence *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFRecKeyframeNumberSequencePtr :
    public PointerMField<KeyframeNumberSequence *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUnrecKeyframeNumberSequencePtr :
    public PointerMField<KeyframeNumberSequence *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFWeakKeyframeNumberSequencePtr :
    public PointerMField<KeyframeNumberSequence *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUncountedKeyframeNumberSequencePtr :
    public PointerMField<KeyframeNumberSequence *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGKEYFRAMENUMBERSEQUENCEFIELDS_H_ */
