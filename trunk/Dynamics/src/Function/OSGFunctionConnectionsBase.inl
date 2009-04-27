/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Dynamics                            *
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
 **     class FunctionConnections!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &FunctionConnectionsBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 FunctionConnectionsBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
FunctionConnectionsPtr FunctionConnectionsBase::create(void) 
{
    FunctionConnectionsPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = FunctionConnectionsPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
FunctionConnectionsPtr FunctionConnectionsBase::createEmpty(void) 
{ 
    FunctionConnectionsPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the FunctionConnections::_mfFunctionOutputs field.
inline
MFFunctionPtr *FunctionConnectionsBase::getMFFunctionOutputs(void)
{
    return &_mfFunctionOutputs;
}

//! Get the FunctionConnections::_mfFunctionInputs field.
inline
MFFunctionPtr *FunctionConnectionsBase::getMFFunctionInputs(void)
{
    return &_mfFunctionInputs;
}

//! Get the FunctionConnections::_mfFunctionOutputIndex field.
inline
MFUInt32 *FunctionConnectionsBase::getMFFunctionOutputIndex(void)
{
    return &_mfFunctionOutputIndex;
}

//! Get the FunctionConnections::_mfFunctionInputIndex field.
inline
MFUInt32 *FunctionConnectionsBase::getMFFunctionInputIndex(void)
{
    return &_mfFunctionInputIndex;
}



//! Get the value of the \a index element the FunctionConnections::_mfFunctionOutputs field.
inline
FunctionPtr &FunctionConnectionsBase::getFunctionOutputs(const UInt32 index)
{
    return _mfFunctionOutputs[index];
}

//! Get the FunctionConnections::_mfFunctionOutputs field.
inline
MFFunctionPtr &FunctionConnectionsBase::getFunctionOutputs(void)
{
    return _mfFunctionOutputs;
}

//! Get the FunctionConnections::_mfFunctionOutputs field.
inline
const MFFunctionPtr &FunctionConnectionsBase::getFunctionOutputs(void) const
{
    return _mfFunctionOutputs;
}

//! Get the value of the \a index element the FunctionConnections::_mfFunctionInputs field.
inline
FunctionPtr &FunctionConnectionsBase::getFunctionInputs(const UInt32 index)
{
    return _mfFunctionInputs[index];
}

//! Get the FunctionConnections::_mfFunctionInputs field.
inline
MFFunctionPtr &FunctionConnectionsBase::getFunctionInputs(void)
{
    return _mfFunctionInputs;
}

//! Get the FunctionConnections::_mfFunctionInputs field.
inline
const MFFunctionPtr &FunctionConnectionsBase::getFunctionInputs(void) const
{
    return _mfFunctionInputs;
}

//! Get the value of the \a index element the FunctionConnections::_mfFunctionOutputIndex field.
inline
UInt32 &FunctionConnectionsBase::getFunctionOutputIndex(const UInt32 index)
{
    return _mfFunctionOutputIndex[index];
}

//! Get the FunctionConnections::_mfFunctionOutputIndex field.
inline
MFUInt32 &FunctionConnectionsBase::getFunctionOutputIndex(void)
{
    return _mfFunctionOutputIndex;
}

//! Get the FunctionConnections::_mfFunctionOutputIndex field.
inline
const MFUInt32 &FunctionConnectionsBase::getFunctionOutputIndex(void) const
{
    return _mfFunctionOutputIndex;
}

//! Get the value of the \a index element the FunctionConnections::_mfFunctionInputIndex field.
inline
UInt32 &FunctionConnectionsBase::getFunctionInputIndex(const UInt32 index)
{
    return _mfFunctionInputIndex[index];
}

//! Get the FunctionConnections::_mfFunctionInputIndex field.
inline
MFUInt32 &FunctionConnectionsBase::getFunctionInputIndex(void)
{
    return _mfFunctionInputIndex;
}

//! Get the FunctionConnections::_mfFunctionInputIndex field.
inline
const MFUInt32 &FunctionConnectionsBase::getFunctionInputIndex(void) const
{
    return _mfFunctionInputIndex;
}

OSG_END_NAMESPACE

#define OSGFUNCTIONCONNECTIONSBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
