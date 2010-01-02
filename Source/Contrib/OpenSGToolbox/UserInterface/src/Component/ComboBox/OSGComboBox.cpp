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

#include "OSGComboBox.h"
#include "Models/OSGMutableComboBoxModel.h"
#include "Component/Menu/OSGListGeneratedPopupMenu.h"
#include "Component/Container/Window/OSGInternalWindow.h"
#include "Component/Button/OSGToggleButton.h"
#include "Component/ComboBox/Editors/OSGComboBoxEditor.h"
#include "Component/Menu/OSGMenuItem.h"
#include "Component/Text/OSGTextField.h"
#include "Component/ComboBox/ComponentGenerators/OSGComboBoxComponentGenerator.h"
#include "Util/OSGUIDrawUtils.h"
#include <OpenSG/Toolbox/OSGStringUtils.h>

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::ComboBox
A UI ComboBox 	
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void ComboBox::initMethod (void)
{
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

EventConnection ComboBox::addPopupMenuListener(PopupMenuListenerPtr Listener)
{
	return getComboListPopupMenu()->addPopupMenuListener(Listener);
}

EventConnection ComboBox::addActionListener(ActionListenerPtr Listener)
{
   _ActionListeners.insert(Listener);
   return EventConnection(
       boost::bind(&ComboBox::isActionListenerAttached, this, Listener),
       boost::bind(&ComboBox::removeActionListener, this, Listener));
}

void ComboBox::setEmptyDescText(const std::string& text)
{
    if(getEditor() != NullFC &&
       getEditor()->getEditorComponent() != NullFC &&
       getEditor()->getEditorComponent()->getType().isDerivedFrom(TextField::getClassType()))
    {
        beginEditCP(getEditor()->getEditorComponent());
            TextField::Ptr::dcast(getEditor()->getEditorComponent())->setEmptyDescText(text);
        endEditCP(getEditor()->getEditorComponent());
    }
}

void ComboBox::updateLayout(void)
{
	Pnt2f BorderTopLeft, BorderBottomRight;
	getInsideInsetsBounds(BorderTopLeft, BorderBottomRight);

	//Place the Expand button on the Left
	beginEditCP(getExpandButton(), PositionFieldMask | SizeFieldMask);
		getExpandButton()->setSize(getExpandButton()->getPreferredSize());
		
        getExpandButton()->setPosition(calculateAlignment(BorderTopLeft, (BorderBottomRight-BorderTopLeft), getExpandButton()->getSize(),0.5, 1.0));
	endEditCP(getExpandButton(), PositionFieldMask | SizeFieldMask);

	//Editor
	if(getEditable() && getEditor() != NullFC && getEditor()->getEditorComponent() != NullFC)
	{
		beginEditCP(getEditor()->getEditorComponent(), PositionFieldMask | SizeFieldMask);
			getEditor()->getEditorComponent()->setSize(Vec2f(BorderBottomRight.x() - BorderTopLeft.x() - getExpandButton()->getSize().x(), getExpandButton()->getSize().y()));
			getEditor()->getEditorComponent()->setPosition(Pnt2f(BorderTopLeft.x(), getExpandButton()->getPosition().y()));
		endEditCP(getEditor()->getEditorComponent(), PositionFieldMask | SizeFieldMask);
	}

	//Selected Item Component
	if(!getEditable() && getComponentGeneratorSelectedItem() != NullFC)
	{
		beginEditCP(getComponentGeneratorSelectedItem(), PositionFieldMask | SizeFieldMask);
			getComponentGeneratorSelectedItem()->setSize(Vec2f(BorderBottomRight.x() - BorderTopLeft.x() - getExpandButton()->getSize().x(), getExpandButton()->getSize().y()));
			getComponentGeneratorSelectedItem()->setPosition(Pnt2f(BorderTopLeft.x(), getExpandButton()->getPosition().y()));
		endEditCP(getComponentGeneratorSelectedItem(), PositionFieldMask | SizeFieldMask);
	}
}

void ComboBox::actionPerformed(const ActionEventPtr e)
{
	//Called by the MenuItems in my popupMenu

	//Need to determine the index of this MenuItem
	UInt32 i(0);
	while(i<getComboListPopupMenu()->getNumItems() && 
		getComboListPopupMenu()->getItem(i) != MenuItem::Ptr::dcast(e->getSource()))
	{
		++i;
	}

	if(i < getComboListPopupMenu()->getNumItems())
	{
		getModel()->setSelectedItem(i);
		if(getEditable() && getEditor() != NullFC && getEditor()->getEditorComponent() != NullFC)
		{
			getEditor()->selectAll();
			getEditor()->getEditorComponent()->takeFocus();
		}
		if(!getEditable() && getComponentGeneratorSelectedItem() != NullFC)
		{
			getComponentGeneratorSelectedItem()->takeFocus();
		}
	}
}

void ComboBox::contentsChanged(const ListDataEventPtr e)
{
	updateListFromModel();
}

void ComboBox::intervalAdded(const ListDataEventPtr e)
{
	//TODO:Implement
	updateListFromModel();
}

void ComboBox::intervalRemoved(const ListDataEventPtr e)
{
	//TODO:Implement
	updateListFromModel();
}

void ComboBox::selectionChanged(const ComboBoxSelectionEventPtr e)
{
	//Update the Selected Item Component
	updateSelectedItemComponent();
}

void ComboBox::removeActionListener(ActionListenerPtr Listener)
{
   ActionListenerSetItor EraseIter(_ActionListeners.find(Listener));
   if(EraseIter != _ActionListeners.end())
   {
      _ActionListeners.erase(EraseIter);
   }
}


void ComboBox::addItem(const boost::any& anObject)
{
	if(getModel() != NullFC && getModel()->getType().isDerivedFrom(MutableComboBoxModel::getClassType()))
	{
		MutableComboBoxModel::Ptr::dcast(getModel())->addElement(anObject);
	}
}

void ComboBox::configureEditor(ComboBoxEditorPtr anEditor, const boost::any& anItem)
{
	//TODO:Implement
}

std::string ComboBox::getActionCommand(void) const
{
	//TODO:Implement
	return std::string("");
}

void ComboBox::insertItemAt(const boost::any& anObject, const UInt32& index)
{
	if(getModel() != NullFC && getModel()->getType().isDerivedFrom(MutableComboBoxModel::getClassType()))
	{
		MutableComboBoxModel::Ptr::dcast(getModel())->insertElementAt(anObject, index);
	}
}

void ComboBox::removeAllItems(void)
{
	if(getModel() != NullFC && getModel()->getType().isDerivedFrom(MutableComboBoxModel::getClassType()))
	{
		MutableComboBoxModel::Ptr::dcast(getModel())->removeAllElements();
	}
}

void ComboBox::removeItem(const boost::any& anObject)
{
	if(getModel() != NullFC && getModel()->getType().isDerivedFrom(MutableComboBoxModel::getClassType()))
	{
		MutableComboBoxModel::Ptr::dcast(getModel())->removeElement(anObject);
	}
}

void ComboBox::removeItemAt(const UInt32& anIndex)
{
	if(getModel() != NullFC && getModel()->getType().isDerivedFrom(MutableComboBoxModel::getClassType()))
	{
		MutableComboBoxModel::Ptr::dcast(getModel())->removeElementAt(anIndex);
	}
}

bool ComboBox::selectWithKey(KeyEvent::Key TheKey)
{
	UInt32 i(1);
	boost::any ModelElement;
    std::string TheText;

    bool ExitLoop(false);
	while(i<getModel()->getSize()  && !ExitLoop)
	{
		//Get The first character of this item
		ModelElement = getModel()->getElementAt((getModel()->getSelectedItemIndex() + i) % getModel()->getSize());

        try
        {
            TheText = lexical_cast(ModelElement);
        }
        catch (boost::bad_lexical_cast &)
        {
            //Could not convert to string
        }
        
		if(TheText.size() > 0 &&
		   (TheText[0] == KeyEvent::getCharFromKey(TheKey, 0) ||
		   TheText[0] == KeyEvent::getCharFromKey(TheKey, KeyEvent::KEY_MODIFIER_CAPS_LOCK)))
		{
		    ExitLoop = true;
		}
		else
		{
		    ++i;
		}
	}

	if(ExitLoop)
	{
	    getModel()->setSelectedItem((getModel()->getSelectedItemIndex() + i) % getModel()->getSize());
	}

	return false;
}

void ComboBox::setActionCommand(std::string aCommand)
{
	//TODO:Implement
}

void ComboBox::setPopupVisible(bool v)
{
	if(v)
	{
		showPopup();
	}
	else
	{
		hidePopup();
	}
}

void ComboBox::showPopup(void)
{
	Pnt2f BorderTopLeft, BorderBottomRight;
	getInsideInsetsBounds(BorderTopLeft, BorderBottomRight);

    beginEditCP(getComboListPopupMenu(), PopupMenu::InvokerFieldMask | PopupMenu::VisibleFieldMask | Component::PositionFieldMask);
       getComboListPopupMenu()->setInvoker(ComponentPtr(this));
       getComboListPopupMenu()->setVisible(true);
       getComboListPopupMenu()->setPosition(ComponentToFrame(BorderTopLeft + Vec2f(0,BorderBottomRight.y()), ComponentPtr(this)));
	   getComboListPopupMenu()->setSelection(getModel()->getSelectedItemIndex());
    endEditCP(getComboListPopupMenu(), PopupMenu::InvokerFieldMask | PopupMenu::VisibleFieldMask | Component::PositionFieldMask);
    
    beginEditCP(getParentWindow(), InternalWindow::ActivePopupMenusFieldMask);
        getParentWindow()->getActivePopupMenus().push_back(getComboListPopupMenu());
    endEditCP(getParentWindow(), InternalWindow::ActivePopupMenusFieldMask);
}

void ComboBox::updateListFromModel(void)
{
	//Update the PopupMenu
	//for(UInt32 i(0) ; i<getComboListPopupMenu()->getNumItems() ; ++i)
	//{
	//	MenuItem::Ptr::dcast(getComboListPopupMenu()->getItem(i))->removeActionListener(this);
	//}

	//Update the Selected Item Component
	updateSelectedItemComponent();
}

void ComboBox::updateSelectedItemComponent(void)
{
	//Update the Editor
	if(getEditable() && getEditor() != NullFC && getModel()->getSelectedItemIndex() >=0 )
	{
		getEditor()->setItem(getModel()->getElementAt(getModel()->getSelectedItemIndex()));
	}

	//Update the Selected Item Component
	if( !getEditable() )
	{
		updateComponentGeneratorSelectedItem();
	}
}

void ComboBox::configurePropertiesFromAction(Action a)
{
	//TODO:Implement
}

void ComboBox::produceActionPerformed(const ActionEventPtr e)
{
	ActionListenerSet Liseners(_ActionListeners);
    for(ActionListenerSetConstItor SetItor(Liseners.begin()) ; SetItor != Liseners.end() ; ++SetItor)
    {
	    (*SetItor)->actionPerformed(e);
    }
    _Producer.produceEvent(ActionPerformedMethodId,e);
}

void ComboBox::keyTyped(const KeyEventPtr e)
{
	if(e->getKey() == KeyEvent::KEY_UP)
	{
		if(getModel()->getSelectedItemIndex() > 0)
		{
			getModel()->setSelectedItem(getModel()->getSelectedItemIndex() - 1);
		}
	}
	else if(e->getKey() == KeyEvent::KEY_DOWN)
	{
		if(getModel()->getSelectedItemIndex() < getModel()->getSize()-1)
		{
			getModel()->setSelectedItem(getModel()->getSelectedItemIndex() + 1);
		}
	}
	else if(!getEditable() && e->getKeyChar() != 0)
	{
		selectWithKey(static_cast<KeyEvent::Key>(e->getKey()));
	}
	else
	{
		Inherited::keyTyped(e);
	}
}

void ComboBox::mouseClicked(const MouseEventPtr e)
{
	if(getEnabled() && !getEditable() && !getExpandButton()->isContained(e->getLocation(), true))
	{
		beginEditCP(getExpandButton(), ToggleButton::SelectedFieldMask);
			getExpandButton()->setSelected(true);
		endEditCP(getExpandButton(), ToggleButton::SelectedFieldMask);
	}
	else
	{
		Inherited::mouseClicked(e);
	}
}

void ComboBox::updateComponentGeneratorSelectedItem(void)
{
	if(!getEditable() && getCellGenerator() != NullFC && getModel() != NullFC)
	{
		beginEditCP(ComboBoxPtr(this), ComponentGeneratorSelectedItemFieldMask);
			if(getCellGenerator()->getType().isDerivedFrom(ComboBoxComponentGenerator::getClassType()))
			{
				setComponentGeneratorSelectedItem(ComboBoxComponentGenerator::Ptr::dcast(getCellGenerator())->getComboBoxComponent(ComboBoxPtr(this), getModel()->getSelectedItem(), getModel()->getSelectedItemIndex(), false, false));
			}
			else
			{
				setComponentGeneratorSelectedItem(getCellGenerator()->getComponent(ComboBoxPtr(this), getModel()->getSelectedItem(), getModel()->getSelectedItemIndex(), 0, false, false));
			}
		endEditCP(ComboBoxPtr(this), ComponentGeneratorSelectedItemFieldMask);
	}
}

void ComboBox::updateSelectionFromEditor(void)
{
    if(getEditable() && getEditor() != NullFC)
    {
        const boost::any& EditorItem = getEditor()->getItem();

	    std::string EditorString;
	    std::string ModelItemString;
	    bool ExitLoop(false);
        for(UInt32 i(0) ; i<getModel()->getSize() && !ExitLoop ; ++i)
        {
            try
            {
                EditorString = lexical_cast(EditorItem);
                ModelItemString = lexical_cast(getModel()->getElementAt(i));
            }
            catch (boost::bad_lexical_cast &)
            {
                //Could not convert to string
            }
            if(EditorString.compare(ModelItemString) == 0)
            {
                ExitLoop = true;

                getModel()->setSelectedItem(i);
            }
        }
    }
}

void ComboBox::attachMenuItems(void)
{
	for(UInt32 i(0) ; i<getComboListPopupMenu()->getNumItems() ; ++i)
	{
		getComboListPopupMenu()->getItem(i)->addActionListener(this);
	}
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

ComboBox::ComboBox(void) :
    Inherited(),
		_ExpandButtonSelectedListener(ComboBoxPtr(this)),
		_EditorListener(ComboBoxPtr(this))
{
	beginEditCP(ComboBoxPtr(this), ComboListPopupMenuFieldMask);
		setComboListPopupMenu(ListGeneratedPopupMenu::create());
	endEditCP(ComboBoxPtr(this), ComboListPopupMenuFieldMask);
}

ComboBox::ComboBox(const ComboBox &source) :
    Inherited(source),
		_ExpandButtonSelectedListener(ComboBoxPtr(this)),
		_EditorListener(ComboBoxPtr(this))
{
	beginEditCP(ComboBoxPtr(this), ComboListPopupMenuFieldMask);
		setComboListPopupMenu(ListGeneratedPopupMenu::create());
	endEditCP(ComboBoxPtr(this), ComboListPopupMenuFieldMask);
	
    if(getExpandButton() != NullFC)
    {
        beginEditCP(ComboBoxPtr(this), ExpandButtonFieldMask);
			setExpandButton(ToggleButton::Ptr::dcast(getExpandButton()->shallowCopy()));
        endEditCP(ComboBoxPtr(this), ExpandButtonFieldMask);
    }
    if(getEditor() != NullFC)
    {
        beginEditCP(ComboBoxPtr(this), EditorFieldMask);
			setEditor(ComboBoxEditor::Ptr::dcast(getEditor()->shallowCopy()));
        endEditCP(ComboBoxPtr(this), EditorFieldMask);
    }
}

ComboBox::~ComboBox(void)
{
}

/*----------------------------- class specific ----------------------------*/

void ComboBox::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);

	if( (whichField & EditableFieldMask))
	{
		updateComponentGeneratorSelectedItem();
	}

	if((whichField & ExpandButtonFieldMask) &&
		getExpandButton() != NullFC)
	{
		getExpandButton()->addButtonSelectedListener(&_ExpandButtonSelectedListener);
		getComboListPopupMenu()->addPopupMenuListener(&_ExpandButtonSelectedListener);
	}
	
    if( (whichField & ExpandButtonFieldMask) ||
        (whichField & EditorFieldMask) ||
        (whichField & EditableFieldMask) ||
        (whichField & ComponentGeneratorSelectedItemFieldMask))
    {
        beginEditCP(ComboBoxPtr(this), ChildrenFieldMask);
            getChildren().clear();
			if(getExpandButton() != NullFC)
			{
                beginEditCP(getExpandButton(), Component::EnabledFieldMask);
                    getExpandButton()->setEnabled(getEnabled());
                endEditCP(getExpandButton(), Component::EnabledFieldMask);
				getChildren().push_back(getExpandButton());
			}
			if(getEditable() && getEditor() != NullFC && getEditor()->getEditorComponent() != NullFC)
			{
                beginEditCP(getEditor()->getEditorComponent(), Component::EnabledFieldMask);
                    getEditor()->getEditorComponent()->setEnabled(getEnabled());
                endEditCP(getEditor()->getEditorComponent(), Component::EnabledFieldMask);
				getChildren().push_back(getEditor()->getEditorComponent());
			}
			if(!getEditable() && getComponentGeneratorSelectedItem() != NullFC)
			{
                beginEditCP(getComponentGeneratorSelectedItem(), Component::EnabledFieldMask);
                    getComponentGeneratorSelectedItem()->setEnabled(getEnabled());
                endEditCP(getComponentGeneratorSelectedItem(), Component::EnabledFieldMask);
				getChildren().push_back(getComponentGeneratorSelectedItem());
			}
        endEditCP(ComboBoxPtr(this), ChildrenFieldMask);
    }
    
    if( (whichField & EditorFieldMask) && getEditor() != NullFC)
    {
        getEditor()->addActionListener(&_EditorListener);
    }

	if(whichField & ModelFieldMask)
	{
		if(getModel() != NullFC)
		{
			beginEditCP(getComboListPopupMenu(), ListGeneratedPopupMenu::ModelFieldMask);
				getComboListPopupMenu()->setModel(getModel());
			endEditCP(getComboListPopupMenu(), ListGeneratedPopupMenu::ModelFieldMask);

			getModel()->addListDataListener(this);
			getModel()->addSelectionListener(this);
			updateListFromModel();
		}
	}

	if(((whichField & CellGeneratorFieldMask) ||
		(whichField & ComboListPopupMenuFieldMask)) &&
		getCellGenerator() != NullFC)
	{
		beginEditCP(getComboListPopupMenu(), ListGeneratedPopupMenu::CellGeneratorFieldMask);
			getComboListPopupMenu()->setCellGenerator(getCellGenerator());
		endEditCP(getComboListPopupMenu(), ListGeneratedPopupMenu::CellGeneratorFieldMask);
	}
}

void ComboBox::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump ComboBox NI" << std::endl;
}

void ComboBox::ExpandButtonSelectedListener::buttonSelected(const ButtonSelectedEventPtr e)
{
	_ComboBox->setPopupVisible(true);
}

void ComboBox::ExpandButtonSelectedListener::buttonDeselected(const ButtonSelectedEventPtr e)
{
	_ComboBox->setPopupVisible(false);
}

void ComboBox::ExpandButtonSelectedListener::popupMenuCanceled(const PopupMenuEventPtr e)
{
	if(_ComboBox->getExpandButton()->getSelected())
	{
		beginEditCP(_ComboBox->getExpandButton(), ToggleButton::SelectedFieldMask);
			_ComboBox->getExpandButton()->setSelected(false);
		endEditCP(_ComboBox->getExpandButton(), ToggleButton::SelectedFieldMask);
	}
}

void ComboBox::ExpandButtonSelectedListener::popupMenuWillBecomeInvisible(const PopupMenuEventPtr e)
{
	if(_ComboBox->getExpandButton()->getSelected())
	{
		beginEditCP(_ComboBox->getExpandButton(), ToggleButton::SelectedFieldMask);
			_ComboBox->getExpandButton()->setSelected(false);
		endEditCP(_ComboBox->getExpandButton(), ToggleButton::SelectedFieldMask);
	}
}
void ComboBox::ExpandButtonSelectedListener::popupMenuWillBecomeVisible(const PopupMenuEventPtr e)
{
	if(!_ComboBox->getExpandButton()->getSelected())
	{
		beginEditCP(_ComboBox->getExpandButton(), ToggleButton::SelectedFieldMask);
			_ComboBox->getExpandButton()->setSelected(true);
		endEditCP(_ComboBox->getExpandButton(), ToggleButton::SelectedFieldMask);
	}
}

void ComboBox::ExpandButtonSelectedListener::popupMenuContentsChanged(const PopupMenuEventPtr e)
{
	_ComboBox->attachMenuItems();
}

void ComboBox::EditorListener::actionPerformed(const ActionEventPtr e)
{
    _ComboBox->updateSelectionFromEditor();
}

OSG_END_NAMESPACE
