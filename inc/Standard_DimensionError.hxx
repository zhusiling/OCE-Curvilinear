// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Standard_DimensionError_HeaderFile
#define _Standard_DimensionError_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_DefineException.hxx>
#include <Standard_SStream.hxx>
#include <Standard_DomainError.hxx>
#include <Handle_Standard_DimensionError.hxx>

#if !defined No_Exception && !defined No_Standard_DimensionError
  #define Standard_DimensionError_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) Standard_DimensionError::Raise(MESSAGE);
#else
  #define Standard_DimensionError_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Standard_DimensionError, Standard_DomainError)

#endif // _Standard_DimensionError_HeaderFile
