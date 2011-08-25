// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Contap_SequenceNodeOfTheSequenceOfLineOfContour_HeaderFile
#define _Contap_SequenceNodeOfTheSequenceOfLineOfContour_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Contap_SequenceNodeOfTheSequenceOfLineOfContour_HeaderFile
#include <Handle_Contap_SequenceNodeOfTheSequenceOfLineOfContour.hxx>
#endif

#ifndef _Contap_TheLineOfContour_HeaderFile
#include <Contap_TheLineOfContour.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class Contap_TheLineOfContour;
class Contap_TheSequenceOfLineOfContour;



class Contap_SequenceNodeOfTheSequenceOfLineOfContour : public TCollection_SeqNode {

public:

  
      Contap_SequenceNodeOfTheSequenceOfLineOfContour(const Contap_TheLineOfContour& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Contap_TheLineOfContour& Value() const;




  DEFINE_STANDARD_RTTI(Contap_SequenceNodeOfTheSequenceOfLineOfContour)

protected:




private: 


Contap_TheLineOfContour myValue;


};

#define SeqItem Contap_TheLineOfContour
#define SeqItem_hxx <Contap_TheLineOfContour.hxx>
#define TCollection_SequenceNode Contap_SequenceNodeOfTheSequenceOfLineOfContour
#define TCollection_SequenceNode_hxx <Contap_SequenceNodeOfTheSequenceOfLineOfContour.hxx>
#define Handle_TCollection_SequenceNode Handle_Contap_SequenceNodeOfTheSequenceOfLineOfContour
#define TCollection_SequenceNode_Type_() Contap_SequenceNodeOfTheSequenceOfLineOfContour_Type_()
#define TCollection_Sequence Contap_TheSequenceOfLineOfContour
#define TCollection_Sequence_hxx <Contap_TheSequenceOfLineOfContour.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif