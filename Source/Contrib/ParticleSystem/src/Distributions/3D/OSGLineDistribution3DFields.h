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


#ifndef _OSGLINEDISTRIBUTION3DFIELDS_H_
#define _OSGLINEDISTRIBUTION3DFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class LineDistribution3D;

OSG_GEN_CONTAINERPTR(LineDistribution3D);

/*! \ingroup GrpContribParticleSystemFieldTraits
    \ingroup GrpLibOSGContribParticleSystem
 */
template <>
struct FieldTraits<LineDistribution3D *> :
    public FieldTraitsFCPtrBase<LineDistribution3D *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<LineDistribution3D *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFLineDistribution3DPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFLineDistribution3DPtr"; }
};

template<> inline
const Char8 *FieldTraits<LineDistribution3D *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecLineDistribution3DPtr"; 
}

template<> inline
const Char8 *FieldTraits<LineDistribution3D *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecLineDistribution3DPtr"; 
}

template<> inline
const Char8 *FieldTraits<LineDistribution3D *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakLineDistribution3DPtr"; 
}

template<> inline
const Char8 *FieldTraits<LineDistribution3D *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdLineDistribution3DPtr"; 
}

template<> inline
const Char8 *FieldTraits<LineDistribution3D *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecLineDistribution3DPtr"; 
}

template<> inline
const Char8 *FieldTraits<LineDistribution3D *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecLineDistribution3DPtr"; 
}

template<> inline
const Char8 *FieldTraits<LineDistribution3D *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakLineDistribution3DPtr"; 
}

template<> inline
const Char8 *FieldTraits<LineDistribution3D *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdLineDistribution3DPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<LineDistribution3D *,
                      RecordedRefCountPolicy  > SFRecLineDistribution3DPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<LineDistribution3D *,
                      UnrecordedRefCountPolicy> SFUnrecLineDistribution3DPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<LineDistribution3D *,
                      WeakRefCountPolicy      > SFWeakLineDistribution3DPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<LineDistribution3D *,
                      NoRefCountPolicy        > SFUncountedLineDistribution3DPtr;


/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<LineDistribution3D *,
                      RecordedRefCountPolicy  > MFRecLineDistribution3DPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<LineDistribution3D *,
                      UnrecordedRefCountPolicy> MFUnrecLineDistribution3DPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<LineDistribution3D *,
                      WeakRefCountPolicy      > MFWeakLineDistribution3DPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<LineDistribution3D *,
                      NoRefCountPolicy        > MFUncountedLineDistribution3DPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFRecLineDistribution3DPtr : 
    public PointerSField<LineDistribution3D *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUnrecLineDistribution3DPtr : 
    public PointerSField<LineDistribution3D *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFWeakLineDistribution3DPtr :
    public PointerSField<LineDistribution3D *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUncountedLineDistribution3DPtr :
    public PointerSField<LineDistribution3D *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFRecLineDistribution3DPtr :
    public PointerMField<LineDistribution3D *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUnrecLineDistribution3DPtr :
    public PointerMField<LineDistribution3D *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFWeakLineDistribution3DPtr :
    public PointerMField<LineDistribution3D *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUncountedLineDistribution3DPtr :
    public PointerMField<LineDistribution3D *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGLINEDISTRIBUTION3DFIELDS_H_ */
