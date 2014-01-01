// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_HArray1OfAutoDesignGroupedItem_HeaderFile
#define _StepAP214_HArray1OfAutoDesignGroupedItem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepAP214_HArray1OfAutoDesignGroupedItem_HeaderFile
#include <Handle_StepAP214_HArray1OfAutoDesignGroupedItem.hxx>
#endif

#ifndef _StepAP214_Array1OfAutoDesignGroupedItem_HeaderFile
#include <StepAP214_Array1OfAutoDesignGroupedItem.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepAP214_AutoDesignGroupedItem;
class StepAP214_Array1OfAutoDesignGroupedItem;



class StepAP214_HArray1OfAutoDesignGroupedItem : public MMgt_TShared {

public:

  
      StepAP214_HArray1OfAutoDesignGroupedItem(const Standard_Integer Low,const Standard_Integer Up);
  
      StepAP214_HArray1OfAutoDesignGroupedItem(const Standard_Integer Low,const Standard_Integer Up,const StepAP214_AutoDesignGroupedItem& V);
  
        void Init(const StepAP214_AutoDesignGroupedItem& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const StepAP214_AutoDesignGroupedItem& Value) ;
  
       const StepAP214_AutoDesignGroupedItem& Value(const Standard_Integer Index) const;
  
        StepAP214_AutoDesignGroupedItem& ChangeValue(const Standard_Integer Index) ;
  
       const StepAP214_Array1OfAutoDesignGroupedItem& Array1() const;
  
        StepAP214_Array1OfAutoDesignGroupedItem& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepAP214_HArray1OfAutoDesignGroupedItem)

protected:




private: 


StepAP214_Array1OfAutoDesignGroupedItem myArray;


};

#define ItemHArray1 StepAP214_AutoDesignGroupedItem
#define ItemHArray1_hxx <StepAP214_AutoDesignGroupedItem.hxx>
#define TheArray1 StepAP214_Array1OfAutoDesignGroupedItem
#define TheArray1_hxx <StepAP214_Array1OfAutoDesignGroupedItem.hxx>
#define TCollection_HArray1 StepAP214_HArray1OfAutoDesignGroupedItem
#define TCollection_HArray1_hxx <StepAP214_HArray1OfAutoDesignGroupedItem.hxx>
#define Handle_TCollection_HArray1 Handle_StepAP214_HArray1OfAutoDesignGroupedItem
#define TCollection_HArray1_Type_() StepAP214_HArray1OfAutoDesignGroupedItem_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif
