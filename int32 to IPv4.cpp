#include <math.h>
using namespace std;

string uint32_to_ip(uint32_t ip)
{
    string output;
    for (int i = 3; i >= 0; i--)
    {
        uint8_t temp = ip >> 8 * i;
        output += to_string(temp) + ".";
    }
    output.pop_back();
    return output;

}
