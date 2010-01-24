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


#ifndef _OSGGEOVOLUMEDISTRIBUTION3DFIELDS_H_
#define _OSGGEOVOLUMEDISTRIBUTION3DFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class GeoVolumeDistribution3D;

OSG_GEN_CONTAINERPTR(GeoVolumeDistribution3D);

/*! \ingroup GrpContribParticleSystemFieldTraits
    \ingroup GrpLibOSGContribParticleSystem
 */
template <>
struct FieldTraits<GeoVolumeDistribution3D *> :
    public FieldTraitsFCPtrBase<GeoVolumeDistribution3D *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<GeoVolumeDistribution3D *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFGeoVolumeDistribution3DPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFGeoVolumeDistribution3DPtr"; }
};

template<> inline
const Char8 *FieldTraits<GeoVolumeDistribution3D *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecGeoVolumeDistribution3DPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVolumeDistribution3D *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecGeoVolumeDistribution3DPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVolumeDistribution3D *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakGeoVolumeDistribution3DPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVolumeDistribution3D *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdGeoVolumeDistribution3DPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVolumeDistribution3D *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecGeoVolumeDistribution3DPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVolumeDistribution3D *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecGeoVolumeDistribution3DPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVolumeDistribution3D *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakGeoVolumeDistribution3DPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVolumeDistribution3D *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdGeoVolumeDistribution3DPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<GeoVolumeDistribution3D *,
                      RecordedRefCountPolicy  > SFRecGeoVolumeDistribution3DPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<GeoVolumeDistribution3D *,
                      UnrecordedRefCountPolicy> SFUnrecGeoVolumeDistribution3DPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<GeoVolumeDistribution3D *,
                      WeakRefCountPolicy      > SFWeakGeoVolumeDistribution3DPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<GeoVolumeDistribution3D *,
                      NoRefCountPolicy        > SFUncountedGeoVolumeDistribution3DPtr;


/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<GeoVolumeDistribution3D *,
                      RecordedRefCountPolicy  > MFRecGeoVolumeDistribution3DPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<GeoVolumeDistribution3D *,
                      UnrecordedRefCountPolicy> MFUnrecGeoVolumeDistribution3DPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<GeoVolumeDistribution3D *,
                      WeakRefCountPolicy      > MFWeakGeoVolumeDistribution3DPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<GeoVolumeDistribution3D *,
                      NoRefCountPolicy        > MFUncountedGeoVolumeDistribution3DPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFRecGeoVolumeDistribution3DPtr : 
    public PointerSField<GeoVolumeDistribution3D *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUnrecGeoVolumeDistribution3DPtr : 
    public PointerSField<GeoVolumeDistribution3D *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFWeakGeoVolumeDistribution3DPtr :
    public PointerSField<GeoVolumeDistribution3D *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUncountedGeoVolumeDistribution3DPtr :
    public PointerSField<GeoVolumeDistribution3D *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFRecGeoVolumeDistribution3DPtr :
    public PointerMField<GeoVolumeDistribution3D *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUnrecGeoVolumeDistribution3DPtr :
    public PointerMField<GeoVolumeDistribution3D *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFWeakGeoVolumeDistribution3DPtr :
    public PointerMField<GeoVolumeDistribution3D *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUncountedGeoVolumeDistribution3DPtr :
    public PointerMField<GeoVolumeDistribution3D *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGGEOVOLUMEDISTRIBUTION3DFIELDS_H_ */
