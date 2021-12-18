#include <iostream>
#include <string>
using namespace std;

bool is_isogram(string str)
{
    for (int i = 0; i < str.length(); i++)
        for (int j = 0; j < str.length(); j++)
            if (j != i and tolower(str[i]) == tolower(str[j]))
                return false;
    return true;
}
