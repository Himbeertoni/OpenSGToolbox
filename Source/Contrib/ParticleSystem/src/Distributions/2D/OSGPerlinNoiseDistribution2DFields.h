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


#ifndef _OSGPERLINNOISEDISTRIBUTION2DFIELDS_H_
#define _OSGPERLINNOISEDISTRIBUTION2DFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class PerlinNoiseDistribution2D;

OSG_GEN_CONTAINERPTR(PerlinNoiseDistribution2D);

/*! \ingroup GrpContribParticleSystemFieldTraits
    \ingroup GrpLibOSGContribParticleSystem
 */
template <>
struct FieldTraits<PerlinNoiseDistribution2D *> :
    public FieldTraitsFCPtrBase<PerlinNoiseDistribution2D *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<PerlinNoiseDistribution2D *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFPerlinNoiseDistribution2DPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFPerlinNoiseDistribution2DPtr"; }
};

template<> inline
const Char8 *FieldTraits<PerlinNoiseDistribution2D *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecPerlinNoiseDistribution2DPtr"; 
}

template<> inline
const Char8 *FieldTraits<PerlinNoiseDistribution2D *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecPerlinNoiseDistribution2DPtr"; 
}

template<> inline
const Char8 *FieldTraits<PerlinNoiseDistribution2D *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakPerlinNoiseDistribution2DPtr"; 
}

template<> inline
const Char8 *FieldTraits<PerlinNoiseDistribution2D *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdPerlinNoiseDistribution2DPtr"; 
}

template<> inline
const Char8 *FieldTraits<PerlinNoiseDistribution2D *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecPerlinNoiseDistribution2DPtr"; 
}

template<> inline
const Char8 *FieldTraits<PerlinNoiseDistribution2D *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecPerlinNoiseDistribution2DPtr"; 
}

template<> inline
const Char8 *FieldTraits<PerlinNoiseDistribution2D *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakPerlinNoiseDistribution2DPtr"; 
}

template<> inline
const Char8 *FieldTraits<PerlinNoiseDistribution2D *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdPerlinNoiseDistribution2DPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<PerlinNoiseDistribution2D *,
                      RecordedRefCountPolicy  > SFRecPerlinNoiseDistribution2DPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<PerlinNoiseDistribution2D *,
                      UnrecordedRefCountPolicy> SFUnrecPerlinNoiseDistribution2DPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<PerlinNoiseDistribution2D *,
                      WeakRefCountPolicy      > SFWeakPerlinNoiseDistribution2DPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<PerlinNoiseDistribution2D *,
                      NoRefCountPolicy        > SFUncountedPerlinNoiseDistribution2DPtr;


/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<PerlinNoiseDistribution2D *,
                      RecordedRefCountPolicy  > MFRecPerlinNoiseDistribution2DPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<PerlinNoiseDistribution2D *,
                      UnrecordedRefCountPolicy> MFUnrecPerlinNoiseDistribution2DPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<PerlinNoiseDistribution2D *,
                      WeakRefCountPolicy      > MFWeakPerlinNoiseDistribution2DPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<PerlinNoiseDistribution2D *,
                      NoRefCountPolicy        > MFUncountedPerlinNoiseDistribution2DPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFRecPerlinNoiseDistribution2DPtr : 
    public PointerSField<PerlinNoiseDistribution2D *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUnrecPerlinNoiseDistribution2DPtr : 
    public PointerSField<PerlinNoiseDistribution2D *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFWeakPerlinNoiseDistribution2DPtr :
    public PointerSField<PerlinNoiseDistribution2D *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUncountedPerlinNoiseDistribution2DPtr :
    public PointerSField<PerlinNoiseDistribution2D *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFRecPerlinNoiseDistribution2DPtr :
    public PointerMField<PerlinNoiseDistribution2D *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUnrecPerlinNoiseDistribution2DPtr :
    public PointerMField<PerlinNoiseDistribution2D *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFWeakPerlinNoiseDistribution2DPtr :
    public PointerMField<PerlinNoiseDistribution2D *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUncountedPerlinNoiseDistribution2DPtr :
    public PointerMField<PerlinNoiseDistribution2D *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGPERLINNOISEDISTRIBUTION2DFIELDS_H_ */
