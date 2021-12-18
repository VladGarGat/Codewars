#include <iostream>
#include <string>
using namespace std;

int twice_as_old(int dad, int son)
{
  int zerodad = dad - son;
  int zeroson = 0;
  while (zerodad != zeroson*2)
  {
    zerodad++; zeroson++;
  }
  if (zerodad > dad) return zerodad - dad;
  else return dad - zerodad;
}
