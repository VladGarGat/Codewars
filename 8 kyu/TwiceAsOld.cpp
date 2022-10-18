#include <iostream>

int twice_as_old(int dad, int son)
{
	int count = 0;
	if (son * 2 > dad)
	{
		while (son * 2 != dad)
		{
			dad++;
			count++;
		}
		return abs(count);
	}
	else
	{
		while (son * 2 != dad)
		{
			dad--;
			count++;
		}
		return abs(count);
	}
}

int main() { int dad, son; std::cin >> dad >> son; std::cout << twice_as_old(dad, son); }
