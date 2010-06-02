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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDOCUMENTEVENTFIELDS_H_
#define _OSGDOCUMENTEVENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class DocumentEvent;

OSG_GEN_CONTAINERPTR(DocumentEvent);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<DocumentEvent *> :
    public FieldTraitsFCPtrBase<DocumentEvent *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<DocumentEvent *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFDocumentEventPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFDocumentEventPtr"; }
};

template<> inline
const Char8 *FieldTraits<DocumentEvent *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecDocumentEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<DocumentEvent *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecDocumentEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<DocumentEvent *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakDocumentEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<DocumentEvent *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdDocumentEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<DocumentEvent *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecDocumentEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<DocumentEvent *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecDocumentEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<DocumentEvent *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakDocumentEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<DocumentEvent *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdDocumentEventPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<DocumentEvent *,
                      RecordedRefCountPolicy  > SFRecDocumentEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<DocumentEvent *,
                      UnrecordedRefCountPolicy> SFUnrecDocumentEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<DocumentEvent *,
                      WeakRefCountPolicy      > SFWeakDocumentEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<DocumentEvent *,
                      NoRefCountPolicy        > SFUncountedDocumentEventPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<DocumentEvent *,
                      RecordedRefCountPolicy  > MFRecDocumentEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<DocumentEvent *,
                      UnrecordedRefCountPolicy> MFUnrecDocumentEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<DocumentEvent *,
                      WeakRefCountPolicy      > MFWeakDocumentEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<DocumentEvent *,
                      NoRefCountPolicy        > MFUncountedDocumentEventPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecDocumentEventPtr : 
    public PointerSField<DocumentEvent *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecDocumentEventPtr : 
    public PointerSField<DocumentEvent *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakDocumentEventPtr :
    public PointerSField<DocumentEvent *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedDocumentEventPtr :
    public PointerSField<DocumentEvent *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecDocumentEventPtr :
    public PointerMField<DocumentEvent *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecDocumentEventPtr :
    public PointerMField<DocumentEvent *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakDocumentEventPtr :
    public PointerMField<DocumentEvent *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedDocumentEventPtr :
    public PointerMField<DocumentEvent *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGDOCUMENTEVENTFIELDS_H_ */
