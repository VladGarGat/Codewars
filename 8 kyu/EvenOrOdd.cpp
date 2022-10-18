#include <iostream>
#include <string>

std::string even_or_odd(int number)
{
	if (number % 2 == 0) return "Even";
	else return "Odd";
}

int main() { int n; std::cin >> n; std::cout << even_or_odd(n); }
