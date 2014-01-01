// Created on: 1993-01-28
// Created by: Gilles DEBARBOUILLE
// Copyright (c) 1993-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and / or modify it
// under the terms of the GNU Lesser General Public version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <Dynamic_InterpretedMethod.ixx>
#include <TCollection_AsciiString.hxx>

//=======================================================================
//function : Dynamic_InterpretedMethod
//purpose  : 
//=======================================================================

Dynamic_InterpretedMethod::Dynamic_InterpretedMethod(const Standard_CString aname,
						     const Standard_CString afile)
: Dynamic_MethodDefinition(aname)
{
  thefunction = new TCollection_HAsciiString(afile);
}

//=======================================================================
//function : Function
//purpose  : 
//=======================================================================

void Dynamic_InterpretedMethod::Function(const Standard_CString afile)
{
  thefunction = new TCollection_HAsciiString(afile);
}

//=======================================================================
//function : Function
//purpose  : 
//=======================================================================

TCollection_AsciiString Dynamic_InterpretedMethod::Function() const
{
  return thefunction->String();
}
