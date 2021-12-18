#include <string>
using namespace std;

string rot13(string msg)
{
    string upper_alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", result;
    for (auto symbol : msg)
    {
        if (symbol >= 'A' and symbol <= 'Z')
            result += upper_alphabet[(upper_alphabet.find(symbol) + 13) % 26];

        else if (symbol >= 'a' and symbol <= 'z')
            result += tolower(upper_alphabet[(upper_alphabet.find(toupper(symbol)) + 13) % 26]);

        else result += symbol;
    }
    return result;
}
