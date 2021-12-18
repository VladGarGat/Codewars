using namespace std;
string pig_it(string str)
{
    string result = "";
    char first_letter = '0';
    bool new_word = true;

    for (int i = 0; i <= str.size(); i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            result += first_letter;
            if ((str[i - 1] >= 'a' && str[i - 1] <= 'z') || (str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
            {
                result += "ay";
            }
            if (str[i] == ' ')
            {
                result += " ";
            }
            new_word = true;
            continue;
        }

        if (new_word)
        {
            first_letter = str[i];
            new_word = false;
            continue;
        }
        result += str[i];

    }
    return result;
}
