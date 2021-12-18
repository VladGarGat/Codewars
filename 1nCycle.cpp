int cycle(int n)
{
    if (n % 2 == 0 or n % 5 == 0) return -1;
    int output = 0;
    int temp1 = 10 % n;
    int temp2 = 10 % n;
    while (true)
    {
        ++output;
        temp1 = (temp1 * 10) % n;
        if (temp1 == temp2) return output;
    }
}
