/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGBorderLayout.h"
#include "OSGBorderLayoutConstraints.h"

#include "Component/Container/OSGContainer.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::BorderLayout
A UI BorderLayout. 
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void BorderLayout::initMethod (void)
{
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

void BorderLayout::updateLayout(const MFComponentPtr Components,const ComponentPtr ParentComponent) const
{
	Pnt2f borderTopLeft, borderBottomRight;
	Container::Ptr::dcast(ParentComponent)->getInsideInsetsBounds(borderTopLeft, borderBottomRight);
	Vec2f borderSize(borderBottomRight-borderTopLeft);

	Real32 NorthHeight(0);
	Real32 SouthHeight(0);
	Real32 WestWidth(0);
	Real32 EastWidth(0);
	Vec2f size;
	Vec2f offset;

	// the first pass through gets some crucial dimensions to determine
	// the sizes of the buttons
	for(UInt32 i = 0 ; i<Components.size(); ++i)
    {
		if(Components[i]->getConstraints() != NullFC)
		{
			switch (BorderLayoutConstraintsPtr::dcast(Components[i]->getConstraints())->getRegion()) {
				// don't need to do anything with the center quite yet
				case BorderLayoutConstraints::BORDER_NORTH:
					NorthHeight = Components[i]->getPreferredSize().y();
					break;
				case BorderLayoutConstraints::BORDER_EAST:
					EastWidth = Components[i]->getPreferredSize().x();
					break;
				case BorderLayoutConstraints::BORDER_SOUTH:
					SouthHeight = Components[i]->getPreferredSize().y();
					break;
				case BorderLayoutConstraints::BORDER_WEST:
					WestWidth = Components[i]->getPreferredSize().x();
					break;
				default:
					break; 
			}
		}
	}
	// this second pass sets its size and draws them
	for(UInt32 i = 0 ; i<Components.size(); ++i)
    {
		// Find its region and draw it accordingly
		if(Components[i]->getConstraints() != NullFC)
		{
			switch (BorderLayoutConstraintsPtr::dcast(Components[i]->getConstraints())->getRegion()) {
				case BorderLayoutConstraints::BORDER_CENTER: 
					// set up the size of the button and its extra displacement
					if (Components[i]->getMaxSize().x() < borderSize.x()-(WestWidth+EastWidth))
					{
						size[0] = Components[i]->getMaxSize().x();
						offset[0] = (borderSize.x()-(WestWidth+EastWidth)-size[0])/2 + WestWidth;
					}
					else
					{
						size[0] = borderSize.x()-(WestWidth+EastWidth);
						offset[0] = WestWidth;
					}
					if (Components[i]->getMaxSize().y() < borderSize.y()-(NorthHeight+SouthHeight))
					{
						size[1] = Components[i]->getMaxSize().y();
						offset[1] = (borderSize.y()-(NorthHeight+SouthHeight)-size[1])/2 + NorthHeight;
					}
					else
					{
						size[1] = borderSize.y()-(NorthHeight+SouthHeight);
						offset[1] = NorthHeight;
					}
					break;
				case BorderLayoutConstraints::BORDER_NORTH:
					// set up the size of the button and its extra displacement
					size[1] = Components[i]->getPreferredSize().y();
					offset[1] = 0;
					if (Components[i]->getMaxSize().x() < borderSize.x())
					{
						size[0] = Components[i]->getMaxSize().x();
						offset[0] = (borderSize.x()-size[0])/2;
					}
					else
					{
						size[0] = borderSize.x();
						offset[0] = 0;
					}
					break;
				case BorderLayoutConstraints::BORDER_EAST:
					// set up the size of the button and its extra displacement
					size[0] = Components[i]->getPreferredSize().x();
					offset[0] = borderSize.x()-size.x();
					if (Components[i]->getMaxSize().y() < borderSize.y()-(NorthHeight+SouthHeight))
					{
						size[1] = Components[i]->getMaxSize().y();
						offset[1] = (borderSize.y()-size[1]-(NorthHeight+SouthHeight))/2+NorthHeight;
					}
					else
					{
						size[1] = borderSize.y()-(NorthHeight+SouthHeight);
						offset[1] = NorthHeight;
					}
					break;
				case BorderLayoutConstraints::BORDER_SOUTH:
					// set up the size of the button and its extra displacement
					size[1] = Components[i]->getPreferredSize().y();
					offset[1] = borderSize.y()-size[1];
					if (Components[i]->getMaxSize().x() < borderSize.x())
					{
						size[0] = Components[i]->getMaxSize().x();
						offset[0] = (borderSize.x()-size[0])/2;
					}
					else
					{
						size[0] = borderSize.x();
						offset[0] = 0;
					}
					break;
				case BorderLayoutConstraints::BORDER_WEST:
					// set up the size of the button and its extra displacement
					size[0] = Components[i]->getPreferredSize().x();
					offset[0] = 0;
					if (Components[i]->getMaxSize().y() < borderSize.y()-(NorthHeight+SouthHeight))
					{
						size[1] = Components[i]->getMaxSize().y();
						offset[1] = (borderSize.y()-size[1]-(NorthHeight+SouthHeight))/2 + NorthHeight;
					}
					else
					{
						size[1] = borderSize.y()-(NorthHeight+SouthHeight);
						offset[1] = NorthHeight;
					}
					break;
				default:
					// if it isn't any of the regions, set it up to not be drawn
					size[0] = size[1] = offset[0] = offset[1] = 0;
					break; 
			}
			// now set the position and size of the button
			beginEditCP(Components[i], Component::SizeFieldMask|Component::PositionFieldMask);
				if (size[0] >= Components[i]->getMinSize().x() && size[1] > Components[i]->getMinSize().y())
					Components[i]->setSize(size);
				else
					Components[i]->setSize(Vec2f(0,0));
				Components[i]->setPosition(borderTopLeft + Vec2f(offset));
			endEditCP(Components[i], Component::SizeFieldMask|Component::PositionFieldMask);
		}
	}
}
/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

BorderLayout::BorderLayout(void) :
    Inherited()
{
}

BorderLayout::BorderLayout(const BorderLayout &source) :
    Inherited(source)
{
}

BorderLayout::~BorderLayout(void)
{
}

/*----------------------------- class specific ----------------------------*/

void BorderLayout::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
}

void BorderLayout::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump BorderLayout NI" << std::endl;
}


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCTemplate_cpp.h,v 1.20 2006/03/16 17:01:53 dirk Exp $";
    static Char8 cvsid_hpp       [] = OSGBORDERLAYOUTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGBORDERLAYOUTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGBORDERLAYOUTFIELDS_HEADER_CVSID;
}

#ifdef __sgi
#pragma reset woff 1174
#endif

OSG_END_NAMESPACE

