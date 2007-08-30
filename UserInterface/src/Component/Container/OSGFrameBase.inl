/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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
 **     class Frame!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &FrameBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 FrameBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
FramePtr FrameBase::create(void) 
{
    FramePtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = FramePtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
FramePtr FrameBase::createEmpty(void) 
{ 
    FramePtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the Frame::_sfFocusedComponent field.
inline
SFComponentPtr *FrameBase::getSFFocusedComponent(void)
{
    return &_sfFocusedComponent;
}

//! Get the Frame::_sfDrawingSurface field.
inline
SFUIDrawingSurfacePtr *FrameBase::getSFDrawingSurface(void)
{
    return &_sfDrawingSurface;
}

//! Get the Frame::_mfActivePopupMenus field.
inline
MFPopupMenuPtr *FrameBase::getMFActivePopupMenus(void)
{
    return &_mfActivePopupMenus;
}

//! Get the Frame::_sfActiveToolTip field.
inline
SFToolTipPtr *FrameBase::getSFActiveToolTip(void)
{
    return &_sfActiveToolTip;
}


//! Get the value of the Frame::_sfFocusedComponent field.
inline
ComponentPtr &FrameBase::getFocusedComponent(void)
{
    return _sfFocusedComponent.getValue();
}

//! Get the value of the Frame::_sfFocusedComponent field.
inline
const ComponentPtr &FrameBase::getFocusedComponent(void) const
{
    return _sfFocusedComponent.getValue();
}

//! Set the value of the Frame::_sfFocusedComponent field.
inline
void FrameBase::setFocusedComponent(const ComponentPtr &value)
{
    _sfFocusedComponent.setValue(value);
}

//! Get the value of the Frame::_sfDrawingSurface field.
inline
UIDrawingSurfacePtr &FrameBase::getDrawingSurface(void)
{
    return _sfDrawingSurface.getValue();
}

//! Get the value of the Frame::_sfDrawingSurface field.
inline
const UIDrawingSurfacePtr &FrameBase::getDrawingSurface(void) const
{
    return _sfDrawingSurface.getValue();
}

//! Set the value of the Frame::_sfDrawingSurface field.
inline
void FrameBase::setDrawingSurface(const UIDrawingSurfacePtr &value)
{
    _sfDrawingSurface.setValue(value);
}

//! Get the value of the Frame::_sfActiveToolTip field.
inline
ToolTipPtr &FrameBase::getActiveToolTip(void)
{
    return _sfActiveToolTip.getValue();
}

//! Get the value of the Frame::_sfActiveToolTip field.
inline
const ToolTipPtr &FrameBase::getActiveToolTip(void) const
{
    return _sfActiveToolTip.getValue();
}

//! Set the value of the Frame::_sfActiveToolTip field.
inline
void FrameBase::setActiveToolTip(const ToolTipPtr &value)
{
    _sfActiveToolTip.setValue(value);
}


//! Get the value of the \a index element the Frame::_mfActivePopupMenus field.
inline
PopupMenuPtr &FrameBase::getActivePopupMenus(const UInt32 index)
{
    return _mfActivePopupMenus[index];
}

//! Get the Frame::_mfActivePopupMenus field.
inline
MFPopupMenuPtr &FrameBase::getActivePopupMenus(void)
{
    return _mfActivePopupMenus;
}

//! Get the Frame::_mfActivePopupMenus field.
inline
const MFPopupMenuPtr &FrameBase::getActivePopupMenus(void) const
{
    return _mfActivePopupMenus;
}

OSG_END_NAMESPACE

#define OSGFRAMEBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

