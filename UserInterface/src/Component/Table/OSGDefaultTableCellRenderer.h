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

#ifndef _OSGDEFAULTTABLECELLRENDERER_H_
#define _OSGDEFAULTTABLECELLRENDERER_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include "OSGTableCellRenderer.h"

OSG_BEGIN_NAMESPACE

/*! \brief DefaultTableCellRenderer class. See \ref
           PageUserInterfaceDefaultTableCellRenderer for a description.
*/

class OSG_USERINTERFACELIB_DLLMAPPING DefaultTableCellRenderer : public TableCellRenderer
{
    /*==========================  PUBLIC  =================================*/
  public:
	virtual ComponentPtr getTableCellRendererComponent(TablePtr table, Field* value, bool isSelected, bool hasFocus, UInt32 row, UInt32 column);

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    DefaultTableCellRenderer(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DefaultTableCellRenderer(void);

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:
    
    /*==========================  PRIVATE  ================================*/
  private:
};

typedef DefaultTableCellRenderer *DefaultTableCellRendererP;

OSG_END_NAMESPACE

#include "OSGDefaultTableCellRenderer.inl"

#endif /* _OSGDEFAULTTABLECELLRENDERER_H_ */