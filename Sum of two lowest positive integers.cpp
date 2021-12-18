#include <vector>
#include <string>
using namespace std;

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
    for (int i = 0; i < numbers.size(); i++)
        for (int j = i + 1; j < numbers.size(); j++)
            if (numbers[i] > numbers[j]) {
                long temporal = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = temporal;
            }

    return numbers[0] + numbers[1];
}
