/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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

#include "OSGContainer.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::Container
A UI Container. 
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void Container::initMethod (void)
{
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

void Container::getInsideBorderBounds(Pnt2s& TopLeft, Vec2s& Size)
{
   UInt16 TopInset(0), LeftInset(0), BottomInset(0), RightInset(0);
   if(getBorder() != NullFC)
   {
      //Get Border Insets
      getBorder()->getInsets(LeftInset,RightInset,TopInset,BottomInset);
   }
   TopLeft.setValues(LeftInset+getLeftInset(), TopInset+getTopInset());
   Size.setValues(getSize().x()-RightInset-LeftInset-getLeftInset()-getRightInset(), getSize().y()-BottomInset-TopInset-getBottomInset()-getTopInset());
}

void Container::getInsideBorderSizing(Pnt2s& TopLeft, Pnt2s& BottomRight) const
{
   UInt16 TopInset(0), LeftInset(0), BottomInset(0), RightInset(0);

   if(getBorder() != NullFC)
   {
      //Get Border Insets
      getBorder()->getInsets(LeftInset,RightInset,TopInset,BottomInset);
   }
   TopLeft.setValues(LeftInset, TopInset);
   BottomRight.setValues(TopLeft.x()+getSize().x()-(LeftInset + RightInset), TopLeft.y()+getSize().y()-(TopInset + BottomInset));
}

void Container::setAllInsets(UInt32 inset)
{
	beginEditCP(ContainerPtr(this), Container::LeftInsetFieldMask | Container::RightInsetFieldMask | Container::TopInsetFieldMask | Container::BottomInsetFieldMask);
		setLeftInset(inset);
		setRightInset(inset);
		setTopInset(inset);
		setBottomInset(inset);
	endEditCP(ContainerPtr(this), Container::LeftInsetFieldMask | Container::RightInsetFieldMask | Container::TopInsetFieldMask | Container::BottomInsetFieldMask);
}
/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

Container::Container(void) :
    Inherited()
{
}

Container::Container(const Container &source) :
    Inherited(source)
{
}

Container::~Container(void)
{
}

/*----------------------------- class specific ----------------------------*/

void Container::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
}

void Container::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump Container NI" << std::endl;
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
    static Char8 cvsid_hpp       [] = OSGCONTAINERBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGCONTAINERBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGCONTAINERFIELDS_HEADER_CVSID;
}

#ifdef __sgi
#pragma reset woff 1174
#endif

OSG_END_NAMESPACE

