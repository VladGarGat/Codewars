#include <iostream>
#include <string>
using namespace std;

string get_middle(string input)
{
    if (input.length() % 2 == 0) {
        int central = (input.length() / 2) - 1;
        string middle = input.substr(central, 2);
        return middle;
    }
    else {
        int central = (input.length() / 2);
        string middle = input.substr(central, 1);
        return middle;
    }
}
