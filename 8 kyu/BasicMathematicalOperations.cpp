#include <iostream>

int basicOp(char op, int val1, int val2)
{
	switch (op)
	{
	case '+': return val1 + val2;
	case '-': return val1 - val2;
	case '*': return val1 * val2;
	case '/': return val1 / val2;
	default:
		break;
	}
}

int main() { int val1, val2; char op; std::cin >> op >> val1 >> val2; std::cout << basicOp(op, val1, val2); }
