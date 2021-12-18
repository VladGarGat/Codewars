#include <iostream>
#include <string>
using namespace std;

bool XO(const string& str)
{
  int countx = 0; int counto = 0;
  for (auto symbol : str)
  {
    if (symbol == 'x' or symbol == 'X') { countx++; }
    else if (symbol == 'o' or symbol == 'O') { counto++; }
  }
  if (countx == counto or countx+counto == 0) { return true; }
  else if (counto > 1 and countx == 0) { return false; }
  else if (countx > counto) return false;
  else return false;
}
