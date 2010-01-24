/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com), Daniel Guilliams           *
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


#ifndef _OSGRADIALPARTICLEAFFECTORFIELDS_H_
#define _OSGRADIALPARTICLEAFFECTORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class RadialParticleAffector;

OSG_GEN_CONTAINERPTR(RadialParticleAffector);

/*! \ingroup GrpContribParticleSystemFieldTraits
    \ingroup GrpLibOSGContribParticleSystem
 */
template <>
struct FieldTraits<RadialParticleAffector *> :
    public FieldTraitsFCPtrBase<RadialParticleAffector *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<RadialParticleAffector *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFRadialParticleAffectorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFRadialParticleAffectorPtr"; }
};

template<> inline
const Char8 *FieldTraits<RadialParticleAffector *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecRadialParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<RadialParticleAffector *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecRadialParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<RadialParticleAffector *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakRadialParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<RadialParticleAffector *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdRadialParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<RadialParticleAffector *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecRadialParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<RadialParticleAffector *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecRadialParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<RadialParticleAffector *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakRadialParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<RadialParticleAffector *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdRadialParticleAffectorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<RadialParticleAffector *,
                      RecordedRefCountPolicy  > SFRecRadialParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<RadialParticleAffector *,
                      UnrecordedRefCountPolicy> SFUnrecRadialParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<RadialParticleAffector *,
                      WeakRefCountPolicy      > SFWeakRadialParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<RadialParticleAffector *,
                      NoRefCountPolicy        > SFUncountedRadialParticleAffectorPtr;


/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<RadialParticleAffector *,
                      RecordedRefCountPolicy  > MFRecRadialParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<RadialParticleAffector *,
                      UnrecordedRefCountPolicy> MFUnrecRadialParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<RadialParticleAffector *,
                      WeakRefCountPolicy      > MFWeakRadialParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<RadialParticleAffector *,
                      NoRefCountPolicy        > MFUncountedRadialParticleAffectorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFRecRadialParticleAffectorPtr : 
    public PointerSField<RadialParticleAffector *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUnrecRadialParticleAffectorPtr : 
    public PointerSField<RadialParticleAffector *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFWeakRadialParticleAffectorPtr :
    public PointerSField<RadialParticleAffector *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUncountedRadialParticleAffectorPtr :
    public PointerSField<RadialParticleAffector *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFRecRadialParticleAffectorPtr :
    public PointerMField<RadialParticleAffector *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUnrecRadialParticleAffectorPtr :
    public PointerMField<RadialParticleAffector *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFWeakRadialParticleAffectorPtr :
    public PointerMField<RadialParticleAffector *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUncountedRadialParticleAffectorPtr :
    public PointerMField<RadialParticleAffector *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGRADIALPARTICLEAFFECTORFIELDS_H_ */
