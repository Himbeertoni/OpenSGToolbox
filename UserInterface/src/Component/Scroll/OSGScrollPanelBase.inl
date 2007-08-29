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
 **     class ScrollPanel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ScrollPanelBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ScrollPanelBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ScrollPanelPtr ScrollPanelBase::create(void) 
{
    ScrollPanelPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ScrollPanelPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ScrollPanelPtr ScrollPanelBase::createEmpty(void) 
{ 
    ScrollPanelPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ScrollPanel::_sfScrollPosition field.
inline
SFPnt2s *ScrollPanelBase::getSFScrollPosition(void)
{
    return &_sfScrollPosition;
}

//! Get the ScrollPanel::_sfVerticalScrollBar field.
inline
SFScrollBarPtr *ScrollPanelBase::getSFVerticalScrollBar(void)
{
    return &_sfVerticalScrollBar;
}

//! Get the ScrollPanel::_sfHorizontalScrollBar field.
inline
SFScrollBarPtr *ScrollPanelBase::getSFHorizontalScrollBar(void)
{
    return &_sfHorizontalScrollBar;
}

//! Get the ScrollPanel::_sfVerticalScrollBarDisplayPolicy field.
inline
SFUInt32 *ScrollPanelBase::getSFVerticalScrollBarDisplayPolicy(void)
{
    return &_sfVerticalScrollBarDisplayPolicy;
}

//! Get the ScrollPanel::_sfHorizontalScrollBarDisplayPolicy field.
inline
SFUInt32 *ScrollPanelBase::getSFHorizontalScrollBarDisplayPolicy(void)
{
    return &_sfHorizontalScrollBarDisplayPolicy;
}


//! Get the value of the ScrollPanel::_sfScrollPosition field.
inline
Pnt2s &ScrollPanelBase::getScrollPosition(void)
{
    return _sfScrollPosition.getValue();
}

//! Get the value of the ScrollPanel::_sfScrollPosition field.
inline
const Pnt2s &ScrollPanelBase::getScrollPosition(void) const
{
    return _sfScrollPosition.getValue();
}

//! Set the value of the ScrollPanel::_sfScrollPosition field.
inline
void ScrollPanelBase::setScrollPosition(const Pnt2s &value)
{
    _sfScrollPosition.setValue(value);
}

//! Get the value of the ScrollPanel::_sfVerticalScrollBar field.
inline
ScrollBarPtr &ScrollPanelBase::getVerticalScrollBar(void)
{
    return _sfVerticalScrollBar.getValue();
}

//! Get the value of the ScrollPanel::_sfVerticalScrollBar field.
inline
const ScrollBarPtr &ScrollPanelBase::getVerticalScrollBar(void) const
{
    return _sfVerticalScrollBar.getValue();
}

//! Set the value of the ScrollPanel::_sfVerticalScrollBar field.
inline
void ScrollPanelBase::setVerticalScrollBar(const ScrollBarPtr &value)
{
    _sfVerticalScrollBar.setValue(value);
}

//! Get the value of the ScrollPanel::_sfHorizontalScrollBar field.
inline
ScrollBarPtr &ScrollPanelBase::getHorizontalScrollBar(void)
{
    return _sfHorizontalScrollBar.getValue();
}

//! Get the value of the ScrollPanel::_sfHorizontalScrollBar field.
inline
const ScrollBarPtr &ScrollPanelBase::getHorizontalScrollBar(void) const
{
    return _sfHorizontalScrollBar.getValue();
}

//! Set the value of the ScrollPanel::_sfHorizontalScrollBar field.
inline
void ScrollPanelBase::setHorizontalScrollBar(const ScrollBarPtr &value)
{
    _sfHorizontalScrollBar.setValue(value);
}

//! Get the value of the ScrollPanel::_sfVerticalScrollBarDisplayPolicy field.
inline
UInt32 &ScrollPanelBase::getVerticalScrollBarDisplayPolicy(void)
{
    return _sfVerticalScrollBarDisplayPolicy.getValue();
}

//! Get the value of the ScrollPanel::_sfVerticalScrollBarDisplayPolicy field.
inline
const UInt32 &ScrollPanelBase::getVerticalScrollBarDisplayPolicy(void) const
{
    return _sfVerticalScrollBarDisplayPolicy.getValue();
}

//! Set the value of the ScrollPanel::_sfVerticalScrollBarDisplayPolicy field.
inline
void ScrollPanelBase::setVerticalScrollBarDisplayPolicy(const UInt32 &value)
{
    _sfVerticalScrollBarDisplayPolicy.setValue(value);
}

//! Get the value of the ScrollPanel::_sfHorizontalScrollBarDisplayPolicy field.
inline
UInt32 &ScrollPanelBase::getHorizontalScrollBarDisplayPolicy(void)
{
    return _sfHorizontalScrollBarDisplayPolicy.getValue();
}

//! Get the value of the ScrollPanel::_sfHorizontalScrollBarDisplayPolicy field.
inline
const UInt32 &ScrollPanelBase::getHorizontalScrollBarDisplayPolicy(void) const
{
    return _sfHorizontalScrollBarDisplayPolicy.getValue();
}

//! Set the value of the ScrollPanel::_sfHorizontalScrollBarDisplayPolicy field.
inline
void ScrollPanelBase::setHorizontalScrollBarDisplayPolicy(const UInt32 &value)
{
    _sfHorizontalScrollBarDisplayPolicy.setValue(value);
}


OSG_END_NAMESPACE

#define OSGSCROLLPANELBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
