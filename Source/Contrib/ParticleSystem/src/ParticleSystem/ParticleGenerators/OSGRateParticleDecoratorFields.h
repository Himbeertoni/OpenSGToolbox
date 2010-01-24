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


#ifndef _OSGRATEPARTICLEDECORATORFIELDS_H_
#define _OSGRATEPARTICLEDECORATORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class RateParticleDecorator;

OSG_GEN_CONTAINERPTR(RateParticleDecorator);

/*! \ingroup GrpContribParticleSystemFieldTraits
    \ingroup GrpLibOSGContribParticleSystem
 */
template <>
struct FieldTraits<RateParticleDecorator *> :
    public FieldTraitsFCPtrBase<RateParticleDecorator *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<RateParticleDecorator *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFRateParticleDecoratorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFRateParticleDecoratorPtr"; }
};

template<> inline
const Char8 *FieldTraits<RateParticleDecorator *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecRateParticleDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<RateParticleDecorator *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecRateParticleDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<RateParticleDecorator *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakRateParticleDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<RateParticleDecorator *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdRateParticleDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<RateParticleDecorator *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecRateParticleDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<RateParticleDecorator *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecRateParticleDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<RateParticleDecorator *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakRateParticleDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<RateParticleDecorator *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdRateParticleDecoratorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<RateParticleDecorator *,
                      RecordedRefCountPolicy  > SFRecRateParticleDecoratorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<RateParticleDecorator *,
                      UnrecordedRefCountPolicy> SFUnrecRateParticleDecoratorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<RateParticleDecorator *,
                      WeakRefCountPolicy      > SFWeakRateParticleDecoratorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<RateParticleDecorator *,
                      NoRefCountPolicy        > SFUncountedRateParticleDecoratorPtr;


/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<RateParticleDecorator *,
                      RecordedRefCountPolicy  > MFRecRateParticleDecoratorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<RateParticleDecorator *,
                      UnrecordedRefCountPolicy> MFUnrecRateParticleDecoratorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<RateParticleDecorator *,
                      WeakRefCountPolicy      > MFWeakRateParticleDecoratorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<RateParticleDecorator *,
                      NoRefCountPolicy        > MFUncountedRateParticleDecoratorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFRecRateParticleDecoratorPtr : 
    public PointerSField<RateParticleDecorator *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUnrecRateParticleDecoratorPtr : 
    public PointerSField<RateParticleDecorator *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFWeakRateParticleDecoratorPtr :
    public PointerSField<RateParticleDecorator *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUncountedRateParticleDecoratorPtr :
    public PointerSField<RateParticleDecorator *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFRecRateParticleDecoratorPtr :
    public PointerMField<RateParticleDecorator *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUnrecRateParticleDecoratorPtr :
    public PointerMField<RateParticleDecorator *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFWeakRateParticleDecoratorPtr :
    public PointerMField<RateParticleDecorator *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUncountedRateParticleDecoratorPtr :
    public PointerMField<RateParticleDecorator *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGRATEPARTICLEDECORATORFIELDS_H_ */
