/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox Particle System                        *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                          Authors: David Kabala                            *
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
 **     Do not change this file, changes should be done in the derived      **
 **     class NodeParticleSystemCore!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &NodeParticleSystemCoreBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 NodeParticleSystemCoreBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
NodeParticleSystemCorePtr NodeParticleSystemCoreBase::create(void) 
{
    NodeParticleSystemCorePtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = NodeParticleSystemCorePtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
NodeParticleSystemCorePtr NodeParticleSystemCoreBase::createEmpty(void) 
{ 
    NodeParticleSystemCorePtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the NodeParticleSystemCore::_sfSystem field.
inline
SFParticleSystemPtr *NodeParticleSystemCoreBase::getSFSystem(void)
{
    return &_sfSystem;
}

//! Get the NodeParticleSystemCore::_sfPrototypeNode field.
inline
SFNodePtr *NodeParticleSystemCoreBase::getSFPrototypeNode(void)
{
    return &_sfPrototypeNode;
}

//! Get the NodeParticleSystemCore::_sfSizeScaling field.
inline
SFVec3f *NodeParticleSystemCoreBase::getSFSizeScaling(void)
{
    return &_sfSizeScaling;
}

//! Get the NodeParticleSystemCore::_mfParticleNodes field.
inline
MFNodePtr *NodeParticleSystemCoreBase::getMFParticleNodes(void)
{
    return &_mfParticleNodes;
}

//! Get the NodeParticleSystemCore::_sfNormalSource field.
inline
SFUInt32 *NodeParticleSystemCoreBase::getSFNormalSource(void)
{
    return &_sfNormalSource;
}

//! Get the NodeParticleSystemCore::_sfNormal field.
inline
SFVec3f *NodeParticleSystemCoreBase::getSFNormal(void)
{
    return &_sfNormal;
}

//! Get the NodeParticleSystemCore::_sfUpSource field.
inline
SFUInt32 *NodeParticleSystemCoreBase::getSFUpSource(void)
{
    return &_sfUpSource;
}

//! Get the NodeParticleSystemCore::_sfUp field.
inline
SFVec3f *NodeParticleSystemCoreBase::getSFUp(void)
{
    return &_sfUp;
}


//! Get the value of the NodeParticleSystemCore::_sfSystem field.
inline
ParticleSystemPtr &NodeParticleSystemCoreBase::getSystem(void)
{
    return _sfSystem.getValue();
}

//! Get the value of the NodeParticleSystemCore::_sfSystem field.
inline
const ParticleSystemPtr &NodeParticleSystemCoreBase::getSystem(void) const
{
    return _sfSystem.getValue();
}

//! Set the value of the NodeParticleSystemCore::_sfSystem field.
inline
void NodeParticleSystemCoreBase::setSystem(const ParticleSystemPtr &value)
{
    _sfSystem.setValue(value);
}

//! Get the value of the NodeParticleSystemCore::_sfPrototypeNode field.
inline
NodePtr &NodeParticleSystemCoreBase::getPrototypeNode(void)
{
    return _sfPrototypeNode.getValue();
}

//! Get the value of the NodeParticleSystemCore::_sfPrototypeNode field.
inline
const NodePtr &NodeParticleSystemCoreBase::getPrototypeNode(void) const
{
    return _sfPrototypeNode.getValue();
}

//! Set the value of the NodeParticleSystemCore::_sfPrototypeNode field.
inline
void NodeParticleSystemCoreBase::setPrototypeNode(const NodePtr &value)
{
    _sfPrototypeNode.setValue(value);
}

//! Get the value of the NodeParticleSystemCore::_sfSizeScaling field.
inline
Vec3f &NodeParticleSystemCoreBase::getSizeScaling(void)
{
    return _sfSizeScaling.getValue();
}

//! Get the value of the NodeParticleSystemCore::_sfSizeScaling field.
inline
const Vec3f &NodeParticleSystemCoreBase::getSizeScaling(void) const
{
    return _sfSizeScaling.getValue();
}

//! Set the value of the NodeParticleSystemCore::_sfSizeScaling field.
inline
void NodeParticleSystemCoreBase::setSizeScaling(const Vec3f &value)
{
    _sfSizeScaling.setValue(value);
}

//! Get the value of the NodeParticleSystemCore::_sfNormalSource field.
inline
UInt32 &NodeParticleSystemCoreBase::getNormalSource(void)
{
    return _sfNormalSource.getValue();
}

//! Get the value of the NodeParticleSystemCore::_sfNormalSource field.
inline
const UInt32 &NodeParticleSystemCoreBase::getNormalSource(void) const
{
    return _sfNormalSource.getValue();
}

//! Set the value of the NodeParticleSystemCore::_sfNormalSource field.
inline
void NodeParticleSystemCoreBase::setNormalSource(const UInt32 &value)
{
    _sfNormalSource.setValue(value);
}

//! Get the value of the NodeParticleSystemCore::_sfNormal field.
inline
Vec3f &NodeParticleSystemCoreBase::getNormal(void)
{
    return _sfNormal.getValue();
}

//! Get the value of the NodeParticleSystemCore::_sfNormal field.
inline
const Vec3f &NodeParticleSystemCoreBase::getNormal(void) const
{
    return _sfNormal.getValue();
}

//! Set the value of the NodeParticleSystemCore::_sfNormal field.
inline
void NodeParticleSystemCoreBase::setNormal(const Vec3f &value)
{
    _sfNormal.setValue(value);
}

//! Get the value of the NodeParticleSystemCore::_sfUpSource field.
inline
UInt32 &NodeParticleSystemCoreBase::getUpSource(void)
{
    return _sfUpSource.getValue();
}

//! Get the value of the NodeParticleSystemCore::_sfUpSource field.
inline
const UInt32 &NodeParticleSystemCoreBase::getUpSource(void) const
{
    return _sfUpSource.getValue();
}

//! Set the value of the NodeParticleSystemCore::_sfUpSource field.
inline
void NodeParticleSystemCoreBase::setUpSource(const UInt32 &value)
{
    _sfUpSource.setValue(value);
}

//! Get the value of the NodeParticleSystemCore::_sfUp field.
inline
Vec3f &NodeParticleSystemCoreBase::getUp(void)
{
    return _sfUp.getValue();
}

//! Get the value of the NodeParticleSystemCore::_sfUp field.
inline
const Vec3f &NodeParticleSystemCoreBase::getUp(void) const
{
    return _sfUp.getValue();
}

//! Set the value of the NodeParticleSystemCore::_sfUp field.
inline
void NodeParticleSystemCoreBase::setUp(const Vec3f &value)
{
    _sfUp.setValue(value);
}


//! Get the value of the \a index element the NodeParticleSystemCore::_mfParticleNodes field.
inline
NodePtr &NodeParticleSystemCoreBase::getParticleNodes(const UInt32 index)
{
    return _mfParticleNodes[index];
}

//! Get the NodeParticleSystemCore::_mfParticleNodes field.
inline
MFNodePtr &NodeParticleSystemCoreBase::getParticleNodes(void)
{
    return _mfParticleNodes;
}

//! Get the NodeParticleSystemCore::_mfParticleNodes field.
inline
const MFNodePtr &NodeParticleSystemCoreBase::getParticleNodes(void) const
{
    return _mfParticleNodes;
}

OSG_END_NAMESPACE

#define OSGNODEPARTICLESYSTEMCOREBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
