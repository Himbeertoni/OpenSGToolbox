/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
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

#include <cstdlib>
#include <cstdio>

#include <OSGConfig.h>

#include "OSGTableColumn.h"
#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGTableColumnBase.cpp file.
// To modify it, please change the .fcd file (OSGTableColumn.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void TableColumn::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

EventConnection TableColumn::addFieldChangeListener(FieldChangeListenerPtr Listener)
{
    _FieldChangeListeners.insert(Listener);
    return EventConnection(
                           boost::bind(&TableColumn::isFieldChangeListenerAttached, this, Listener),
                           boost::bind(&TableColumn::removeFieldChangeListener, this, Listener));
}

void TableColumn::produceFieldChanged(EditFieldHandlePtr TheField,
                                      FieldDescriptionBase* TheDescription)
{
    //TODO: Implement
    //const FieldChangeEventUnrecPtr TheEvent = FieldChangeEvent::create(TableColumnRefPtr(this), getSystemTime(), TheField, TheDescription);
    //FieldChangeListenerSet FieldChangeListenerSet(_FieldChangeListeners);
    //for(FieldChangeListenerSetConstItor SetItor(FieldChangeListenerSet.begin()) ; SetItor != FieldChangeListenerSet.end() ; ++SetItor)
    //{
    //(*SetItor)->fieldChanged(TheEvent);
    //}
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

TableColumn::TableColumn(void) :
    Inherited(),
    _HeaderValue()
{
}

TableColumn::TableColumn(const TableColumn &source) :
    Inherited(source),
    _TableCellRenderer(source._TableCellRenderer),
    _HeaderCellRenderer(source._HeaderCellRenderer),
    _HeaderValue(source._HeaderValue)

{
}

TableColumn::~TableColumn(void)
{
}

/*----------------------------- class specific ----------------------------*/

void TableColumn::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);

    //Produce a FieldChanged Event for each Field that was changed
    for(UInt32 i(0) ; i<getType().getNumFieldDescs() ; ++i)
    {
        if(getType().getFieldDesc(i) != NULL &&
            whichField & getType().getFieldDesc(i)->getFieldMask())
        {
            produceFieldChanged(editField(i), getType().getFieldDesc(i));
        }
    }
}

void TableColumn::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump TableColumn NI" << std::endl;
}

OSG_END_NAMESPACE