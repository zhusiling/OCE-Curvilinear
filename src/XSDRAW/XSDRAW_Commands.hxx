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

#include <TCollection_AsciiString.hxx>

static TCollection_AsciiString XSDRAW_CommandPart
  (Standard_Integer argc, const char** argv, const Standard_Integer argf)
{
  TCollection_AsciiString res;
  for (Standard_Integer i = argf; i < argc; i ++) {
    if (i > argf) res.AssignCat(" ");
    res.AssignCat (argv[i]);
  }
  return res;
}
