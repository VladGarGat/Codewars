#include <string>
using namespace std;
namespace Bud
{
    string buddy(long long start, long long limit)
    {
        auto divsum = [](int num)
        {
            int sum = 0;
            for (int i = 2; i * i <= num; ++i)
                if (num % i == 0)
                    sum += i * i == num ? i : (i + num / i);
            return sum;
        };
        for (; start < limit; ++start)
        {
            long long sum = divsum(start);
            long long sum2 = divsum(sum);
            if (sum2 == start and start < sum)
                return "(" + to_string(start) + " " + to_string(sum) + ")";
        }
        return "Nothing";
    }
}
