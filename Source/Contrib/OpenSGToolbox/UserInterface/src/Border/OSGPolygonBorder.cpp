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

#define OSG_COMPILEUSERINTERFACELIB

#include <OpenSG/OSGConfig.h>
#include <OpenSG/Toolbox/OSGMathUtils.h>

#include "OSGPolygonBorder.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::PolygonBorder
UI Polygon Border. 	
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void PolygonBorder::initMethod (void)
{
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
void PolygonBorder::draw(const GraphicsPtr g, const Real32 x, const Real32 y , const Real32 Width, const Real32 Height, const Real32 Opacity, bool Clipping) const
{
    if(Clipping)
    {
        deactivateInternalDrawConstraints(g,x,y,Width,Height);
    }
	if(getWidth() > 0.0)
	{
		Int32 NumVertices(getVertices().size());
		Pnt2f p1,
			p2;
		Pnt2f pi1,pi2;
		Real32 t1,t2;

		Vec2f Scale(Width,Height);
		Vec2f ThisEdge, NextEdge, ThisEdgeOffset, NextEdgeOffset;
		glBegin(GL_QUAD_STRIP);
			for(Int32 i(0) ; i<=NumVertices ; ++i)
			{
				//ThisEdge
				if(i == 0)
				{
					ThisEdge=getVertices()[(i+1)%NumVertices]-getVertices()[i%NumVertices];
					scaleUp(ThisEdge, Scale);
					

					ThisEdgeOffset.setValues(-ThisEdge.y(), ThisEdge.x());
					ThisEdgeOffset.normalize();
					ThisEdgeOffset *= getWidth();
				}
				else
				{
					ThisEdge = NextEdge;
					ThisEdgeOffset = NextEdgeOffset;
				}

				//Next Edge
				NextEdge=getVertices()[(i+2)%NumVertices]-getVertices()[(i+1)%NumVertices];
				scaleUp(NextEdge, Scale);

				//Next Edge Offset
				NextEdgeOffset.setValues(-NextEdge.y(), NextEdge.x());
				NextEdgeOffset.normalize();
				NextEdgeOffset *= getWidth();

				p2 = getVertices()[(i+1)%NumVertices];
				scaleUp(p2, Scale);


				//Find the intersecting point of the Offset Edges
				pi1 = p2+ThisEdgeOffset;
				pi2 = p2+NextEdgeOffset;
				if(intersectLines(pi1,ThisEdge,pi2,NextEdge,t1,t2,p1) == -1)
				{
					//The edges are coincident
					//Use pi1
					p1 = pi1;
				}
				
				
				glVertex2fv(p1.getValues());
				glVertex2fv(p2.getValues());
			}
		glEnd();
	}
}

void PolygonBorder::scaleUp(Pnt2f& TheVector, const Vec2f& Scale) const
{
	TheVector[0] = TheVector[0] *Scale[0];
	TheVector[1] = TheVector[1] *Scale[1];
}
void PolygonBorder::scaleUp(Vec2f& TheVector, const Vec2f& Scale) const
{
	TheVector[0] = TheVector[0] *Scale[0];
	TheVector[1] = TheVector[1] *Scale[1];
}

void PolygonBorder::getInsets(Real32& Left, Real32& Right,Real32& Top,Real32& Bottom) const
{
	//TODO:Implement
	Left=Right=Top=Bottom = getWidth(); //wrong, but what else are you supposed to do?
}

void PolygonBorder::activateInternalDrawConstraints(const GraphicsPtr g, const Real32& x, const Real32& y , const Real32& Width, const Real32& Height) const
{
	GLenum DepthTextEnabled = glIsEnabled(GL_DEPTH_TEST);
	glDisable(GL_DEPTH_TEST);

    g->incrDrawBounderiesNesting();
    
    g->initAddDrawBounderies();

    glBegin(GL_POLYGON);
		Pnt2f p1,
			p2;
		Pnt2f pi1,pi2;
		Real32 t1,t2;

		Vec2f Scale(Width,Height);
		Vec2f ThisEdge, NextEdge, ThisEdgeOffset, NextEdgeOffset;
		UInt32 NumVertices(getVertices().size());
		for(Int32 i(0) ; i<=NumVertices ; ++i)
		{
			//ThisEdge
			if(i == 0)
			{
				ThisEdge=getVertices()[(i+1)%NumVertices]-getVertices()[i%NumVertices];
				scaleUp(ThisEdge, Scale);
				

				ThisEdgeOffset.setValues(-ThisEdge.y(), ThisEdge.x());
				ThisEdgeOffset.normalize();
				ThisEdgeOffset *= getWidth();
			}
			else
			{
				ThisEdge = NextEdge;
				ThisEdgeOffset = NextEdgeOffset;
			}

			//Next Edge
			NextEdge=getVertices()[(i+2)%NumVertices]-getVertices()[(i+1)%NumVertices];
			scaleUp(NextEdge, Scale);

			//Next Edge Offset
			NextEdgeOffset.setValues(-NextEdge.y(), NextEdge.x());
			NextEdgeOffset.normalize();
			NextEdgeOffset *= getWidth();

			p2 = getVertices()[(i+1)%NumVertices];
			scaleUp(p2, Scale);


			//Find the intersecting point of the Offset Edges
			pi1 = p2+ThisEdgeOffset;
			pi2 = p2+NextEdgeOffset;
			if(intersectLines(pi1,ThisEdge,pi2,NextEdge,t1,t2,p1) == -1)
			{
				//The edges are coincident
				//Use pi1
				p1 = pi1;
			}
			glVertex2fv(p1.getValues());
		}
    glEnd();

    g->uninitAddDrawBounderies();
    
    g->activateDrawBounderiesTest();

	if(DepthTextEnabled) {glEnable(GL_DEPTH_TEST);}
}

void PolygonBorder::deactivateInternalDrawConstraints(const GraphicsPtr g, const Real32& x, const Real32& y , const Real32& Width, const Real32& Height) const
{
    g->decrDrawBounderiesNestring();

    g->initRemoveDrawBounderies();

    glBegin(GL_QUADS);
       glVertex2s(x-2,y-2);
       glVertex2s(x+Width+2,y-2);
       glVertex2s(x+Width+2,y+Height+2);
       glVertex2s(x-2,y+Height+2);
    glEnd();

    g->uninitRemoveDrawBounderies();
    
    g->deactivateDrawBounderiesTest();
}

bool PolygonBorder::isContained(const Pnt2f& p, const Real32& x, const Real32& y , const Real32& Width, const Real32& Height) const
{
	UInt32 NumVertices(getVertices().size());
	Vec3f Edge,
		  PointEdge;

	for(UInt32 i(0) ; i<NumVertices ; ++i)
	{
		Edge.setValues((getVertices()[(i+1)%NumVertices].x()-getVertices()[i].x())*Width, (getVertices()[(i+1)%NumVertices].y()-getVertices()[i].y())*Height, 0.0f);
		PointEdge.setValues(p.x()-getVertices()[i].x()*Width, p.y()-getVertices()[i].y()*Height, 0.0f);

		if(Edge.cross(PointEdge).z() < 0.0)
		{
			return false;
		}
	}
	return true;
}
/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

PolygonBorder::PolygonBorder(void) :
    Inherited()
{
}

PolygonBorder::PolygonBorder(const PolygonBorder &source) :
    Inherited(source)
{
}

PolygonBorder::~PolygonBorder(void)
{
}

/*----------------------------- class specific ----------------------------*/

void PolygonBorder::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);

	if(whichField & VerticesFieldMask)
	{
		Int32 NumVertices(getVertices().size());
		Vec2f ThisEdge, PrevEdge, NextEdge, BeginQuadDir,EndQuadDir;
		beginEditCP(PolygonBorderPtr(this), DrawnQuadsFieldMask);
			getDrawnQuads().clear();
			for(Int32 i(0) ; i<NumVertices ; ++i)
			{
				//Quad i
				ThisEdge=getVertices()[(i+1)%NumVertices]-getVertices()[i];
				PrevEdge=getVertices()[i]-getVertices()[(i+NumVertices-1)%NumVertices];
				NextEdge=getVertices()[(i+1)%NumVertices]-getVertices()[(i+2)%NumVertices];

				//Calculate the direction for the begining of the quad
				BeginQuadDir = ThisEdge - PrevEdge;
				BeginQuadDir.normalize();
				//Calculate the direction for the end of the quad
				EndQuadDir = NextEdge - ThisEdge;
				EndQuadDir.normalize();

				getDrawnQuads().push_back(getVertices()[i] + BeginQuadDir);
				getDrawnQuads().push_back(getVertices()[i]);
				if(i==0)
				{
					getDrawnQuads().push_back(getVertices()[(i+1)%NumVertices]);
					getDrawnQuads().push_back(getVertices()[(i+1)%NumVertices]+ EndQuadDir);
				}
			}
		endEditCP(PolygonBorderPtr(this), DrawnQuadsFieldMask);
	}
}

void PolygonBorder::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump PolygonBorder NI" << std::endl;
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
    static Char8 cvsid_hpp       [] = OSGPOLYGONBORDERBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPOLYGONBORDERBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPOLYGONBORDERFIELDS_HEADER_CVSID;
}

#ifdef __sgi
#pragma reset woff 1174
#endif

OSG_END_NAMESPACE
