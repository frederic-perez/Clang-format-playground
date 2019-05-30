#include <string>

template <class T>
std::string
TypeNameENH()
{
  return "";
}

template <class T>
std::string TypeNameENH() /* DO NOT comment here */
{
  return "";
}

template <class T>
std::string TypeNameENH() // DO NOT comment here
{
  return "";
}

template <class T>
std::string TypeNameENH() // DO NOT comment here
{
  return "";
}

// Comment above is perfectly fine
//
template <class T>
std::string
TypeNameENH()
{
  return "";
}
