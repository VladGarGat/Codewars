#include <string>
using namespace std; 

string reverseString (string str)
{
  string reversed = "";
  for(int i = str.size() - 1; i >= 0; i--)
  {
    reversed+=str[i];
  }
  return reversed;
}
