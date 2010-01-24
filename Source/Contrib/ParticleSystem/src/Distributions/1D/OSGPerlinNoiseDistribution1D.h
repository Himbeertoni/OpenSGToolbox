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

#ifndef _OSGPERLINNOISEDISTRIBUTION1D_H_
#define _OSGPERLINNOISEDISTRIBUTION1D_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGPerlinNoiseDistribution1DBase.h"

OSG_BEGIN_NAMESPACE

/*! \brief PerlinNoiseDistribution1D class. See \ref
           PageContribParticleSystemPerlinNoiseDistribution1D for a description.
*/

class OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING PerlinNoiseDistribution1D : public PerlinNoiseDistribution1DBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:
    enum InterpolationType {COSINE = 1,LINEAR = 0};	

    typedef PerlinNoiseDistribution1DBase Inherited;
    typedef PerlinNoiseDistribution1D     Self;

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(ConstFieldMaskArg whichField,
                         UInt32            origin,
                         BitVector         details    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0,
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */

	Real32 generate(void) const;

	Real32 generate(Real32 t) const;

    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in PerlinNoiseDistribution1DBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    PerlinNoiseDistribution1D(void);
    PerlinNoiseDistribution1D(const PerlinNoiseDistribution1D &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PerlinNoiseDistribution1D(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class PerlinNoiseDistribution1DBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const PerlinNoiseDistribution1D &source);
};

typedef PerlinNoiseDistribution1D *PerlinNoiseDistribution1DP;

OSG_END_NAMESPACE

#include "OSGPerlinNoiseDistribution1DBase.inl"
#include "OSGPerlinNoiseDistribution1D.inl"

#endif /* _OSGPERLINNOISEDISTRIBUTION1D_H_ */
