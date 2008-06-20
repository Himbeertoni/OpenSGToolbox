/*---------------------------------------------------------------------------*\
 *                       OpenSG ToolBox Animation                            *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

#define OSG_COMPILEANIMATIONLIB

#include <OpenSG/OSGConfig.h>

#include "OSGSkeletonDrawable.h"

#include <OpenSG/OSGIntersectAction.h>
#include <OpenSG/OSGRenderAction.h>
#include <OpenSG/OSGDrawAction.h>
#include <OpenSG/OSGSimpleGeometry.h>

#include <OpenSG/OSGGL.h>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::SkeletonDrawable

*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void SkeletonDrawable::initMethod (void)
{
    DrawAction::registerEnterDefault(getClassType(),
        osgTypedMethodFunctor2BaseCPtrRef<Action::ResultE, SkeletonDrawablePtr,
              CNodePtr, Action *>(&SkeletonDrawable::drawActionHandler));

    IntersectAction::registerEnterDefault(getClassType(),
        osgTypedMethodFunctor2BaseCPtrRef<Action::ResultE, SkeletonDrawablePtr,
              CNodePtr, Action *>(&SkeletonDrawable::intersect));

    RenderAction::registerEnterDefault(getClassType(),
        osgTypedMethodFunctor2BaseCPtrRef<Action::ResultE, SkeletonDrawablePtr,
              CNodePtr, Action *>(&SkeletonDrawable::renderActionHandler));
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

Action::ResultE SkeletonDrawable::drawPrimitives (DrawActionBase *action)
{
    if(getSkeleton() == NullFC)
    {
        FWARNING(("SkeletonDrawable::drawPrimitives:: no skeleton!\n"));;
    }
    else
    {
        //TODO:Implement
        glBegin(GL_LINES);
            glVertex3f(0.0,0.0,0.0);
            glVertex3f(10.0,10.0,10.0);
        glEnd();
    }

    return Action::Continue;
}

Action::ResultE SkeletonDrawable::drawActionHandler( Action* action )
{
    DrawAction *a = dynamic_cast<DrawAction*>(action);
    Material::DrawFunctor func;

    func=osgTypedMethodFunctor1ObjPtr(&(*this), 
                                      &SkeletonDrawable::drawPrimitives);

    if(a->getMaterial() != NULL)
    {
        a->getMaterial()->draw(func, a);
    }
    else if ( getMaterial() != NullFC )
    {
        getMaterial()->draw( func, a );
    }
    else
    {
        getDefaultMaterial()->draw( func, a );
        FWARNING(("SkeletonDrawable::draw:: no material!\n"));;
    }
    return Action::Continue;
}

Action::ResultE SkeletonDrawable::renderActionHandler( Action* action )
{
    RenderAction *a = dynamic_cast<RenderAction *>(action);

    Material::DrawFunctor func;
    func = osgTypedMethodFunctor1ObjPtr(this, 
                                        &SkeletonDrawable::drawPrimitives);

    Material* m = a->getMaterial();

    if(m == NULL)
    {
        if(getMaterial() != NullFC)
        {
            m = getMaterial().getCPtr();
        }
        else
        {
            m = getDefaultMaterial().getCPtr();
            FNOTICE(("SkeletonDrawable::render: no Material!?!\n"));
        }
    }

    a->dropFunctor(func, m);

    return Action::Continue;
}

Action::ResultE SkeletonDrawable::intersect( Action* action )
{
    return Action::Continue;
}

void SkeletonDrawable::adjustVolume(Volume & volume)
{
    //TODO: Implement
	Inherited::adjustVolume(volume);

    volume.extendBy(Pnt3f(0.0,0.0,0.0));
    volume.extendBy(Pnt3f(10.0,10.0,10.0));
}
/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

SkeletonDrawable::SkeletonDrawable(void) :
    Inherited()
{
}

SkeletonDrawable::SkeletonDrawable(const SkeletonDrawable &source) :
    Inherited(source)
{
}

SkeletonDrawable::~SkeletonDrawable(void)
{
}

/*----------------------------- class specific ----------------------------*/

void SkeletonDrawable::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
}

void SkeletonDrawable::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump SkeletonDrawable NI" << std::endl;
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
    static Char8 cvsid_hpp       [] = OSGSKELETONDRAWABLEBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSKELETONDRAWABLEBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSKELETONDRAWABLEFIELDS_HEADER_CVSID;
}

#ifdef __sgi
#pragma reset woff 1174
#endif

OSG_END_NAMESPACE
