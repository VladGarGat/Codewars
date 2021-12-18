#include <iostream>
#include <string>
using namespace std;

string reverse_words(string str)
{
    string final_sentence = "";
    string word = "";
    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == ' ')
        {
            final_sentence += word;
            final_sentence += ' ';
            word = "";
            continue;
        }
        word = str[i] + word;
    }
    final_sentence += word;
    return final_sentence;
}
