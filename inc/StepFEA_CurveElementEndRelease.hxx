// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_CurveElementEndRelease_HeaderFile
#define _StepFEA_CurveElementEndRelease_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepFEA_CurveElementEndRelease.hxx>

#include <StepFEA_CurveElementEndCoordinateSystem.hxx>
#include <Handle_StepElement_HArray1OfCurveElementEndReleasePacket.hxx>
#include <MMgt_TShared.hxx>
class StepElement_HArray1OfCurveElementEndReleasePacket;
class StepFEA_CurveElementEndCoordinateSystem;


//! Representation of STEP entity CurveElementEndRelease
class StepFEA_CurveElementEndRelease : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepFEA_CurveElementEndRelease();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const StepFEA_CurveElementEndCoordinateSystem& aCoordinateSystem, const Handle(StepElement_HArray1OfCurveElementEndReleasePacket)& aReleases) ;
  
  //! Returns field CoordinateSystem
  Standard_EXPORT   StepFEA_CurveElementEndCoordinateSystem CoordinateSystem()  const;
  
  //! Set field CoordinateSystem
  Standard_EXPORT   void SetCoordinateSystem (const StepFEA_CurveElementEndCoordinateSystem& CoordinateSystem) ;
  
  //! Returns field Releases
  Standard_EXPORT   Handle(StepElement_HArray1OfCurveElementEndReleasePacket) Releases()  const;
  
  //! Set field Releases
  Standard_EXPORT   void SetReleases (const Handle(StepElement_HArray1OfCurveElementEndReleasePacket)& Releases) ;




  DEFINE_STANDARD_RTTI(StepFEA_CurveElementEndRelease)

protected:




private: 


  StepFEA_CurveElementEndCoordinateSystem theCoordinateSystem;
  Handle(StepElement_HArray1OfCurveElementEndReleasePacket) theReleases;


};







#endif // _StepFEA_CurveElementEndRelease_HeaderFile
