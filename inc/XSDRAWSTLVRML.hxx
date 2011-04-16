// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XSDRAWSTLVRML_HeaderFile
#define _XSDRAWSTLVRML_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

class Draw_Interpretor;
class XSDRAWSTLVRML_DataSource;
class XSDRAWSTLVRML_DrawableMesh;
class XSDRAWSTLVRML_ElemNodesMap;
class XSDRAWSTLVRML_CoordsMap;
class XSDRAWSTLVRML_DataMapNodeOfElemNodesMap;
class XSDRAWSTLVRML_DataMapIteratorOfElemNodesMap;
class XSDRAWSTLVRML_DataMapNodeOfCoordsMap;
class XSDRAWSTLVRML_DataMapIteratorOfCoordsMap;



class XSDRAWSTLVRML  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Inits commands for writing to STL and VRML formats <br>
  Standard_EXPORT   static  void InitCommands(Draw_Interpretor& theCommands) ;
  //! Loads all Draw commands of TKXSDRAW. Used for plugin. <br>
  Standard_EXPORT   static  void Factory(Draw_Interpretor& theDI) ;





protected:





private:




friend class XSDRAWSTLVRML_DataSource;
friend class XSDRAWSTLVRML_DrawableMesh;
friend class XSDRAWSTLVRML_ElemNodesMap;
friend class XSDRAWSTLVRML_CoordsMap;
friend class XSDRAWSTLVRML_DataMapNodeOfElemNodesMap;
friend class XSDRAWSTLVRML_DataMapIteratorOfElemNodesMap;
friend class XSDRAWSTLVRML_DataMapNodeOfCoordsMap;
friend class XSDRAWSTLVRML_DataMapIteratorOfCoordsMap;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif