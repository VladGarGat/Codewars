#include <iostream>

unsigned short int expressionsMatter(unsigned short int a, unsigned short int b, unsigned short int c)
{
	if ((a != 1) && (b != 1) && (c != 1)) return a * b * c; // 5 * 6 * 7 в силу ассоциативности умножения
	else if ((a==1) && (b==1) && (c==1)) return 3; // 1 + 1 + 1 = 3
	// (1 + b) * c
	// a * (b + 1)
	else if ((a == 1) && (b != 1 && c != 1)) return (1 + b) * c;
	else if ((c == 1) && (b != 1 && a != 1)) return a * (b + 1);
	// a 1 c
	else if ((b == 1) && (a != 1 && c != 1))
	{
		if (a > c) return a * (b + c);
		else if (a <= c) return (a + b) * c;
	}
	// 1 1 c;  a 1 1;  1 b 1;
	else if ((a==1) && (b==1)) return 2 * c;
	else if ((b==1) && (c==1)) return 2 * a;
	else if ((a==1) && (c==1)) return a + b + c;
}

int main() { int a, b, c; std::cin >> a >> b >> c; std::cout << expressionsMatter(a, b, c); }
