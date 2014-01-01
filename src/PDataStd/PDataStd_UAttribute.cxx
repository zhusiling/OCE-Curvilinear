// Created on: 1999-06-15
// Created by: Sergey RUIN
// Copyright (c) 1999-1999 Matra Datavision
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

#include <PDataStd_UAttribute.ixx>
#include <PCollection_HExtendedString.hxx>

//=======================================================================
//function : PDataStd_UAttribute
//purpose  : 
//=======================================================================

PDataStd_UAttribute::PDataStd_UAttribute () { }


//=======================================================================
//function : SetID
//purpose  : 
//=======================================================================

void PDataStd_UAttribute::SetID( const Handle(PCollection_HExtendedString)&  guid)
{
  myID = guid;
}

//=======================================================================
//function : GetLocalID
//purpose  : 
//=======================================================================

Handle(PCollection_HExtendedString) PDataStd_UAttribute::GetID( void ) const
{
  return myID;
}
