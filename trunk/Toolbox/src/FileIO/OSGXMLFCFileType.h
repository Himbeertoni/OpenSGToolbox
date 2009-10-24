/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Toolbox                             *
 *                                                                           *
 *                                                                           *
 *                                                                           *
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
#ifndef _OSGXMLFCFILETYPE_H_
#define _OSGXMLFCFILETYPE_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGToolboxDef.h"

#include <boost/function.hpp>
#include <utility>
#include "OSGFCFileType.h"
#include "OSGFCFileHandler.h"
#include "Event/Producers/OSGEventProducer.h"
#include "Event/Listeners/OSGEventListener.h"

#include "rapidxml.h"
#include "rapidxml_iterators.h"

OSG_BEGIN_NAMESPACE


class OSG_TOOLBOXLIB_DLLMAPPING XMLFCFileType : public FCFileType
{
     /*==========================  PUBLIC  =================================*/
   public:
	 struct FCIdMapper;
	 friend struct FCIdMapper;

	 struct FCInfoStruct
	 {
		UInt32            _NewId;
		FieldContainerPtr _Ptr;
		bool              _Read;
		FCInfoStruct();
	 };

	 typedef std::map<UInt32, FCInfoStruct> IDLookupMap;

	 struct FCIdMapper : public FieldContainerMapper
	 {
	 public:
		const IDLookupMap *_PtrMap;
		FCIdMapper(IDLookupMap *m);

		virtual UInt32 map(UInt32 uiId);
	 };

     typedef boost::function<bool ( rapidxml::xml_node<char>& , const IDLookupMap&, FieldContainerPtr )> OpenSGToolboxXMLReadHandler;
     typedef boost::function<bool ( const FieldContainerPtr, std::ostream& )> OpenSGToolboxXMLWriteHandler;


     typedef std::pair<OpenSGToolboxXMLReadHandler, OpenSGToolboxXMLWriteHandler> HandlerFuncPair;
	 typedef std::map<const FieldContainerType*, HandlerFuncPair > XMLHandlerMap;
     
     static std::string NameAttachmentXMLToken;
     static std::string FileAttachmentXMLToken;
     static std::string FieldContainerIDXMLToken;
     static std::string AttachmentsXMLToken;
     static std::string RootFCXMLToken;
	   /*---------------------------------------------------------------------*/
     static XMLFCFileType *the(void);

     /*---------------------------------------------------------------------*/
	 virtual std::string getName(void) const;

     /*---------------------------------------------------------------------*/
     virtual ~XMLFCFileType(void);
 
     /*---------------------------------------------------------------------*/
     virtual FCPtrStore read(std::istream &is,
		                     const std::string& FileNameOrExtension) const;
 
     /*---------------------------------------------------------------------*/
     virtual bool write(const FCPtrStore &Containers, std::ostream &os,
                        const std::string& FileNameOrExtension, const FCTypeVector& IgnoreTypes) const;

     bool registerHandler(const FieldContainerType* HandleFCType,
						 OpenSGToolboxXMLReadHandler TheReadHandler,
						 OpenSGToolboxXMLWriteHandler TheWriteHandler);

     bool unregisterHandler(const FieldContainerType* HandleFCType);

	 class XMLFCException : public std::exception
	 {
		public :
			XMLFCException(const std::string& Message, const rapidxml::xml_node<char>& ErrorNode):strMessage(Message),xmlNode(ErrorNode) {}
			std::string getMessage(void) const {return(strMessage);}
			const rapidxml::xml_node<char>& getNode(void) const {return(xmlNode);}
		private :
			std::string strMessage;
			const rapidxml::xml_node<char>& xmlNode;
	 };
     /*=========================  PROTECTED  ===============================*/
   protected:

	 typedef FCFileType Inherited;
	 static       XMLFCFileType*  _the;
     XMLHandlerMap  _HandlerMap;

	 IDLookupMap createFieldContainers(rapidxml::node_iterator<char> Begin, rapidxml::node_iterator<char> End,
	                     const std::string& FileNameOrExtension) const;

	 static void printXMLParseError(const rapidxml::parse_error& Error,
                                  const std::string&           StreamText,
	                     const std::string& FileNameOrExtension);

     static void printXMLSemanticError(const std::string& ErrorDesc,
                                  const std::string&           StreamText,
                                  Int32 ErrorPos,
	                     const std::string& FileNameOrExtension);


     //bool writeEventConnections(const FieldContainerPtr Container, std::ostream &os,
                                //const std::string& FileNameOrExtension) const;

     //bool writeEventListener(const EventListenerPtr TheListener, std::ostream &os,
                             //const std::string& FileNameOrExtension) const;

     //FieldContainerPtr readFieldContainer(IDLookupMap& TheIDLookupMap,
                                         //rapidxml::xml_node<char>& Node,
                                         //const Path& RootPath,
                                         //const std::string& StreamText,
                                         //const std::string& FileNameOrExtension) const;

    //FieldContainerPtr findFC(const std::string& IdText,
                             //const IDLookupMap& TheIDLookupMap,
                             //const std::string& StreamText,
                             //const rapidxml::xml_attribute<char>& Attribute,
                             //const std::string& FileNameOrExtension) const;

     //bool readEventConnections(EventProducerPtr Container,
                               //const IDLookupMap& LookupMap,
                               //rapidxml::node_iterator<char> Begin, rapidxml::node_iterator<char> End,
                               //const std::string& StreamText,
                               //const std::string& FileNameOrExtension) const;

     //EventListenerPtr readEventListener(EventProducerPtr Container,
                                         //const IDLookupMap& LookupMap,
                                         //const rapidxml::xml_node<char>& Node,
                                         //const std::string& StreamText,
                                         //const std::string& FileNameOrExtension) const;
 
     /*---------------------------------------------------------------------*/
     XMLFCFileType(void);
 
     XMLFCFileType(const XMLFCFileType &obj);
 
     /*==========================  PRIVATE  ================================*/
   private:
 
     void operator =(const XMLFCFileType &source);
};

typedef XMLFCFileType* XMLFCFileTypeP;

OSG_END_NAMESPACE

#include "OSGXMLFCFileType.inl"

#endif /* _OSGXMLFCFILETYPE_H_ */


