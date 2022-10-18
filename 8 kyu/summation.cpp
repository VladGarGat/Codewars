#include <iostream>

int summation(int num)
{
	int result = 0;
	while (num > 0)
	{
		result += num--;
	}
	return result;
}

int main() { int n; std::cin >> n; std::cout << summation(n); }
