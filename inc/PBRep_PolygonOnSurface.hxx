// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PBRep_PolygonOnSurface_HeaderFile
#define _PBRep_PolygonOnSurface_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PBRep_PolygonOnSurface.hxx>

#include <Standard_Boolean.hxx>
#include <Handle_PGeom_Surface.hxx>
#include <Handle_PPoly_Polygon2D.hxx>
#include <PBRep_CurveRepresentation.hxx>
class PGeom_Surface;
class PPoly_Polygon2D;
class PTopLoc_Location;


class PBRep_PolygonOnSurface : public PBRep_CurveRepresentation
{

public:

  
  Standard_EXPORT PBRep_PolygonOnSurface(const Handle(PPoly_Polygon2D)& P, const Handle(PGeom_Surface)& S, const PTopLoc_Location& L);
  
  //! A   2D polygon  representation  in the  parametric
  //! space of a surface.
  Standard_EXPORT virtual   Standard_Boolean IsPolygonOnSurface()  const;
  
  Standard_EXPORT   Handle(PGeom_Surface) Surface()  const;
  
  Standard_EXPORT   Handle(PPoly_Polygon2D) Polygon()  const;

PBRep_PolygonOnSurface( )
{
  
}
PBRep_PolygonOnSurface(const Storage_stCONSTclCOM& a) : PBRep_CurveRepresentation(a)
{
  
}
    Handle(PPoly_Polygon2D) _CSFDB_GetPBRep_PolygonOnSurfacemyPolygon2D() const { return myPolygon2D; }
    void _CSFDB_SetPBRep_PolygonOnSurfacemyPolygon2D(const Handle(PPoly_Polygon2D)& p) { myPolygon2D = p; }
    Handle(PGeom_Surface) _CSFDB_GetPBRep_PolygonOnSurfacemySurface() const { return mySurface; }
    void _CSFDB_SetPBRep_PolygonOnSurfacemySurface(const Handle(PGeom_Surface)& p) { mySurface = p; }



  DEFINE_STANDARD_RTTI(PBRep_PolygonOnSurface)

protected:




private: 


  Handle(PPoly_Polygon2D) myPolygon2D;
  Handle(PGeom_Surface) mySurface;


};







#endif // _PBRep_PolygonOnSurface_HeaderFile
