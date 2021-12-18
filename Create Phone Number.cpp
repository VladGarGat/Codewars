#include <string>
using namespace std;


string createPhoneNumber(const int arr[10])
{
    string phone_number = "";
    for (int i = 0; i < 10; i++)
    {
        if (i == 0) phone_number += "(";
        if (i == 3) phone_number += ") ";
        if (i == 6) phone_number += "-";
        phone_number += char(arr[i] + '0');
    }
    return phone_number;
}
