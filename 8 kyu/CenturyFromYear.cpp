#include <iostream>
int centuryFromYear(int year)
{
	if ((year % 100) != 0) return (year / 100) + 1;
	else return year / 100;
}

int main() { int year; std::cin >> year; std::cout << centuryFromYear(year); }
