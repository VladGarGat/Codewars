#include <iostream>
bool consecutiveDucksBrute(unsigned int num) // brute force approach: calculate almost every sequence
{
	unsigned int sum = 0;
	for (unsigned int a1 = 1; a1 < (num / 2) + 1; a1++)
	{
		for (int j = a1; sum < num; j++)
		{
			sum = sum + j;
			if (sum > num) break;
			else if (sum == num) return true;
		}
		sum = 0;
	}
	return false;
}
bool consecutiveDucksMath(unsigned int num) // mathematical approach: check if num is power of 2
{
	while (num > 2)
	{
		if (num % 2 > 0) return true;
		num = num / 2;
	}
	return false;
}
int main()
{
	int n; std::cin >> n;
	 std::cout << consecutiveDucksMath(n);
	 std::cout << std::endl;
	 std::cout << consecutiveDucksBrute(n);
}
