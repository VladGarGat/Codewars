int digital_root(int n)
{
    while (n >= 10)
    {
        int sum = 0;
        while (n > 0)
        {
            sum = sum + n % 10;
            n = n / 10;
        }
        n = sum;
    }
    return n;
}
