#include <vector>
using namespace std;
int countSmileys(vector<string> arr) {
  int output = 0;
  vector<string>allowed = { ":)",":D",";)",";D",":-)",":-D",";-)",";-D",":~)",":~D",";~)",";~D" };
  for (int i = 0; i < arr.size(); i++)
    for (int j = 0; j < allowed.size(); j++)
      if (arr[i] == allowed[j])output++;
  return output;
}
