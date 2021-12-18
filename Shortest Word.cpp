#include <string>
using namespace std;

int find_short(string str) {
    int word{0};
    int shortest_word = str.length() + 1;

    for (int i = 0; i < str.length() + 1; i++)
    {
        if (str[i] != ' ' and str[i] != '\0') { word++; }
        else
        {
            if (word < shortest_word) { shortest_word = word; }
            word = 0;
        }
    }
    return shortest_word;
}
