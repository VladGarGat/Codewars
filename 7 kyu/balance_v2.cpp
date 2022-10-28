std::string balancedNum(unsigned long long int number)
{
    std::string str = std::to_string(number);
    int balance=0;
    for (unsigned long i = 0, k = str.length() / 2 + 1; k < str.size(); i++, k++)
    {
        balance += str.at(i);
        balance -= str.at(k);
    }
    if (balance == 0) return "Balanced";
    return "Not Balanced";
