// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GCE2d_MakeSegment_HeaderFile
#define _GCE2d_MakeSegment_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Geom2d_TrimmedCurve.hxx>
#include <GCE2d_Root.hxx>
#include <Standard_Real.hxx>
class Geom2d_TrimmedCurve;
class StdFail_NotDone;
class gp_Pnt2d;
class gp_Dir2d;
class gp_Lin2d;


//! Implements construction algorithms for a line
//! segment in the plane. The result is a
//! Geom2d_TrimmedCurve curve.
//! A MakeSegment object provides a framework for:
//! -   defining the construction of the line segment,
//! -   implementing the construction algorithm, and
//! -   consulting the results. In particular, the Value
//! function returns the constructed line segment.
class GCE2d_MakeSegment  : public GCE2d_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Make a segment of Line from the 2 points <P1> and <P2>.
  //! Status is "ConfusedPoints" if <P1> and <P2> are confused.
  Standard_EXPORT GCE2d_MakeSegment(const gp_Pnt2d& P1, const gp_Pnt2d& P2);
  
  //! Make a segment of Line from the point <P1> with
  //! the direction <P> and ended by the projection of
  //! <P2> on the line <P1,V>.
  //! Status is "ConfusedPoints" if <P1> and <P2> are confused.
  Standard_EXPORT GCE2d_MakeSegment(const gp_Pnt2d& P1, const gp_Dir2d& V, const gp_Pnt2d& P2);
  
  //! Make a segment of Line from the line <Line>
  //! between the two parameters U1 and U2.
  //! Status is "SameParamters" if <U1> is equal <U2>.
  Standard_EXPORT GCE2d_MakeSegment(const gp_Lin2d& Line, const Standard_Real U1, const Standard_Real U2);
  
  //! Make a segment of Line from the line <Line>
  //! between the point <Point> and the parameter Ulast.
  //! It returns NullObject if <U1> is equal <U2>.
  Standard_EXPORT GCE2d_MakeSegment(const gp_Lin2d& Line, const gp_Pnt2d& Point, const Standard_Real Ulast);
  
  //! Make a segment of Line from the line <Line>
  //! between the two points <P1> and <P2>.
  //! It returns NullObject if <P1> and <P2> are confused.
  //! Warning
  //! If the points which limit the segment are coincident
  //! for given points or for the projection of given points
  //! on the line which supports the line segment (that is,
  //! when IsDone returns false), the Status function
  //! returns gce_ConfusedPoints. This warning only
  //! concerns the first two constructors.
  Standard_EXPORT GCE2d_MakeSegment(const gp_Lin2d& Line, const gp_Pnt2d& P1, const gp_Pnt2d& P2);
  
  //! Returns the constructed line segment.
  //! Exceptions StdFail_NotDone if no line segment is constructed.
  Standard_EXPORT  const  Handle(Geom2d_TrimmedCurve)& Value()  const;
  
  Standard_EXPORT  const  Handle(Geom2d_TrimmedCurve)& Operator()  const;
Standard_EXPORT operator Handle_Geom2d_TrimmedCurve() const;




protected:





private:



  Handle(Geom2d_TrimmedCurve) TheSegment;


};







#endif // _GCE2d_MakeSegment_HeaderFile
