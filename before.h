#include <string>

template<class T> std::string TypeNameENH() { return ""; }

template<class T> std::string TypeNameENH() /* Comment here */ { return ""; }

template<class T> std::string TypeNameENH() // Comment here
{ return ""; }

template<class T> std::string
TypeNameENH() // Comment here
{ return ""; }

// Comment above
//
template<class T> std::string
TypeNameENH()
{ return ""; }
