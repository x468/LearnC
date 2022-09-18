#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y)
{
	switch (oper)
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '/':
		return x / y;
	case '*':
			return x * y;
	default:
		return 0.0;
	}
 
}

double Calculator::Csdfds(double x,  double y)
{
	return x+y;
}
