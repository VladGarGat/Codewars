#include <string>
using namespace std;

string duplicate_encoder(const string& word) {
    string word_lower = ""; string output = "";
    for (char symbol : word) word_lower += tolower(symbol);
    for (int i = 0; i < word.length(); i++)
    {
        if (count(word_lower.begin(), word_lower.end(), word_lower.at(i)) > 1) output += ")";
        else output += "(";
    }
    return output;
}
