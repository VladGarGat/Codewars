#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string test, string original)
{
    transform(original.begin(), original.end(), original.begin(), tolower);
    for (auto i : test)
    {
        size_t found = original.find(tolower(i));
        if (found != string::npos) { original.erase(found, 1); }
        else return false;
    }
    if (original.size() > 0) return false;
    return true;
}
