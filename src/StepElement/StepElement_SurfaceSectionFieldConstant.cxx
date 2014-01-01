// Created on: 2002-12-12
// Created by: data exchange team
// Copyright (c) 2002-2014 OPEN CASCADE SAS
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

// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.2

#include <StepElement_SurfaceSectionFieldConstant.ixx>

//=======================================================================
//function : StepElement_SurfaceSectionFieldConstant
//purpose  : 
//=======================================================================

StepElement_SurfaceSectionFieldConstant::StepElement_SurfaceSectionFieldConstant ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepElement_SurfaceSectionFieldConstant::Init (const Handle(StepElement_SurfaceSection) &aDefinition)
{
//  StepElement_SurfaceSectionField::Init();

  theDefinition = aDefinition;
}

//=======================================================================
//function : Definition
//purpose  : 
//=======================================================================

Handle(StepElement_SurfaceSection) StepElement_SurfaceSectionFieldConstant::Definition () const
{
  return theDefinition;
}

//=======================================================================
//function : SetDefinition
//purpose  : 
//=======================================================================

void StepElement_SurfaceSectionFieldConstant::SetDefinition (const Handle(StepElement_SurfaceSection) &aDefinition)
{
  theDefinition = aDefinition;
}
