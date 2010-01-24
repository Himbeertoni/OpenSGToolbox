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


#ifndef _OSGAIRPARTICLEAFFECTORFIELDS_H_
#define _OSGAIRPARTICLEAFFECTORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class AirParticleAffector;

OSG_GEN_CONTAINERPTR(AirParticleAffector);

/*! \ingroup GrpContribParticleSystemFieldTraits
    \ingroup GrpLibOSGContribParticleSystem
 */
template <>
struct FieldTraits<AirParticleAffector *> :
    public FieldTraitsFCPtrBase<AirParticleAffector *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<AirParticleAffector *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFAirParticleAffectorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFAirParticleAffectorPtr"; }
};

template<> inline
const Char8 *FieldTraits<AirParticleAffector *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecAirParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<AirParticleAffector *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecAirParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<AirParticleAffector *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakAirParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<AirParticleAffector *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdAirParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<AirParticleAffector *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecAirParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<AirParticleAffector *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecAirParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<AirParticleAffector *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakAirParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<AirParticleAffector *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdAirParticleAffectorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<AirParticleAffector *,
                      RecordedRefCountPolicy  > SFRecAirParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<AirParticleAffector *,
                      UnrecordedRefCountPolicy> SFUnrecAirParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<AirParticleAffector *,
                      WeakRefCountPolicy      > SFWeakAirParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<AirParticleAffector *,
                      NoRefCountPolicy        > SFUncountedAirParticleAffectorPtr;


/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<AirParticleAffector *,
                      RecordedRefCountPolicy  > MFRecAirParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<AirParticleAffector *,
                      UnrecordedRefCountPolicy> MFUnrecAirParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<AirParticleAffector *,
                      WeakRefCountPolicy      > MFWeakAirParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<AirParticleAffector *,
                      NoRefCountPolicy        > MFUncountedAirParticleAffectorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFRecAirParticleAffectorPtr : 
    public PointerSField<AirParticleAffector *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUnrecAirParticleAffectorPtr : 
    public PointerSField<AirParticleAffector *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFWeakAirParticleAffectorPtr :
    public PointerSField<AirParticleAffector *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUncountedAirParticleAffectorPtr :
    public PointerSField<AirParticleAffector *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFRecAirParticleAffectorPtr :
    public PointerMField<AirParticleAffector *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUnrecAirParticleAffectorPtr :
    public PointerMField<AirParticleAffector *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFWeakAirParticleAffectorPtr :
    public PointerMField<AirParticleAffector *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUncountedAirParticleAffectorPtr :
    public PointerMField<AirParticleAffector *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGAIRPARTICLEAFFECTORFIELDS_H_ */
