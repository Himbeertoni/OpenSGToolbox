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
 **     class TableHeader!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TableHeaderBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 TableHeaderBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
TableHeaderPtr TableHeaderBase::create(void) 
{
    TableHeaderPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = TableHeaderPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
TableHeaderPtr TableHeaderBase::createEmpty(void) 
{ 
    TableHeaderPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the TableHeader::_sfTable field.
inline
SFTablePtr *TableHeaderBase::getSFTable(void)
{
    return &_sfTable;
}

//! Get the TableHeader::_sfReorderingAllowed field.
inline
SFBool *TableHeaderBase::getSFReorderingAllowed(void)
{
    return &_sfReorderingAllowed;
}

//! Get the TableHeader::_sfResizingAllowed field.
inline
SFBool *TableHeaderBase::getSFResizingAllowed(void)
{
    return &_sfResizingAllowed;
}

//! Get the TableHeader::_sfResizingCursorDriftAllowance field.
inline
SFUInt32 *TableHeaderBase::getSFResizingCursorDriftAllowance(void)
{
    return &_sfResizingCursorDriftAllowance;
}

//! Get the TableHeader::_sfDefaultMarginDrawObject field.
inline
SFUIDrawObjectCanvasPtr *TableHeaderBase::getSFDefaultMarginDrawObject(void)
{
    return &_sfDefaultMarginDrawObject;
}

//! Get the TableHeader::_mfMargins field.
inline
MFUIDrawObjectCanvasPtr *TableHeaderBase::getMFMargins(void)
{
    return &_mfMargins;
}

//! Get the TableHeader::_mfColumnHeaders field.
inline
MFComponentPtr *TableHeaderBase::getMFColumnHeaders(void)
{
    return &_mfColumnHeaders;
}


//! Get the value of the TableHeader::_sfTable field.
inline
TablePtr &TableHeaderBase::getTable(void)
{
    return _sfTable.getValue();
}

//! Get the value of the TableHeader::_sfTable field.
inline
const TablePtr &TableHeaderBase::getTable(void) const
{
    return _sfTable.getValue();
}

//! Set the value of the TableHeader::_sfTable field.
inline
void TableHeaderBase::setTable(const TablePtr &value)
{
    _sfTable.setValue(value);
}

//! Get the value of the TableHeader::_sfReorderingAllowed field.
inline
bool &TableHeaderBase::getReorderingAllowed(void)
{
    return _sfReorderingAllowed.getValue();
}

//! Get the value of the TableHeader::_sfReorderingAllowed field.
inline
const bool &TableHeaderBase::getReorderingAllowed(void) const
{
    return _sfReorderingAllowed.getValue();
}

//! Set the value of the TableHeader::_sfReorderingAllowed field.
inline
void TableHeaderBase::setReorderingAllowed(const bool &value)
{
    _sfReorderingAllowed.setValue(value);
}

//! Get the value of the TableHeader::_sfResizingAllowed field.
inline
bool &TableHeaderBase::getResizingAllowed(void)
{
    return _sfResizingAllowed.getValue();
}

//! Get the value of the TableHeader::_sfResizingAllowed field.
inline
const bool &TableHeaderBase::getResizingAllowed(void) const
{
    return _sfResizingAllowed.getValue();
}

//! Set the value of the TableHeader::_sfResizingAllowed field.
inline
void TableHeaderBase::setResizingAllowed(const bool &value)
{
    _sfResizingAllowed.setValue(value);
}

//! Get the value of the TableHeader::_sfResizingCursorDriftAllowance field.
inline
UInt32 &TableHeaderBase::getResizingCursorDriftAllowance(void)
{
    return _sfResizingCursorDriftAllowance.getValue();
}

//! Get the value of the TableHeader::_sfResizingCursorDriftAllowance field.
inline
const UInt32 &TableHeaderBase::getResizingCursorDriftAllowance(void) const
{
    return _sfResizingCursorDriftAllowance.getValue();
}

//! Set the value of the TableHeader::_sfResizingCursorDriftAllowance field.
inline
void TableHeaderBase::setResizingCursorDriftAllowance(const UInt32 &value)
{
    _sfResizingCursorDriftAllowance.setValue(value);
}

//! Get the value of the TableHeader::_sfDefaultMarginDrawObject field.
inline
UIDrawObjectCanvasPtr &TableHeaderBase::getDefaultMarginDrawObject(void)
{
    return _sfDefaultMarginDrawObject.getValue();
}

//! Get the value of the TableHeader::_sfDefaultMarginDrawObject field.
inline
const UIDrawObjectCanvasPtr &TableHeaderBase::getDefaultMarginDrawObject(void) const
{
    return _sfDefaultMarginDrawObject.getValue();
}

//! Set the value of the TableHeader::_sfDefaultMarginDrawObject field.
inline
void TableHeaderBase::setDefaultMarginDrawObject(const UIDrawObjectCanvasPtr &value)
{
    _sfDefaultMarginDrawObject.setValue(value);
}


//! Get the value of the \a index element the TableHeader::_mfMargins field.
inline
UIDrawObjectCanvasPtr &TableHeaderBase::getMargins(const UInt32 index)
{
    return _mfMargins[index];
}

//! Get the TableHeader::_mfMargins field.
inline
MFUIDrawObjectCanvasPtr &TableHeaderBase::getMargins(void)
{
    return _mfMargins;
}

//! Get the TableHeader::_mfMargins field.
inline
const MFUIDrawObjectCanvasPtr &TableHeaderBase::getMargins(void) const
{
    return _mfMargins;
}

//! Get the value of the \a index element the TableHeader::_mfColumnHeaders field.
inline
ComponentPtr &TableHeaderBase::getColumnHeaders(const UInt32 index)
{
    return _mfColumnHeaders[index];
}

//! Get the TableHeader::_mfColumnHeaders field.
inline
MFComponentPtr &TableHeaderBase::getColumnHeaders(void)
{
    return _mfColumnHeaders;
}

//! Get the TableHeader::_mfColumnHeaders field.
inline
const MFComponentPtr &TableHeaderBase::getColumnHeaders(void) const
{
    return _mfColumnHeaders;
}

OSG_END_NAMESPACE

#define OSGTABLEHEADERBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

