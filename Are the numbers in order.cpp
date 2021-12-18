#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isAscOrder(vector<int> arr)
{
    bool output = true;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i - 1] > arr[i])
        {
            return false;
        }
    }

    return output;
}
