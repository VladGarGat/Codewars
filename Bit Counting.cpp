using namespace std;
unsigned int countBits(unsigned long long n)
{
    int output = 0;
    while (n)
    {
        if (n % 2 == 1) output++;
        n = n / 2;
    }
    return output;
}
