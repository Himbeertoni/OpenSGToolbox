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
 **     class Real32ConstantFunction!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &Real32ConstantFunctionBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 Real32ConstantFunctionBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
Real32ConstantFunctionPtr Real32ConstantFunctionBase::create(void) 
{
    Real32ConstantFunctionPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = Real32ConstantFunctionPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
Real32ConstantFunctionPtr Real32ConstantFunctionBase::createEmpty(void) 
{ 
    Real32ConstantFunctionPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the Real32ConstantFunction::_sfValue field.
inline
SFReal32 *Real32ConstantFunctionBase::getSFValue(void)
{
    return &_sfValue;
}


//! Get the value of the Real32ConstantFunction::_sfValue field.
inline
Real32 &Real32ConstantFunctionBase::getValue(void)
{
    return _sfValue.getValue();
}

//! Get the value of the Real32ConstantFunction::_sfValue field.
inline
const Real32 &Real32ConstantFunctionBase::getValue(void) const
{
    return _sfValue.getValue();
}

//! Set the value of the Real32ConstantFunction::_sfValue field.
inline
void Real32ConstantFunctionBase::setValue(const Real32 &value)
{
    _sfValue.setValue(value);
}


OSG_END_NAMESPACE

#define OSGREAL32CONSTANTFUNCTIONBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
