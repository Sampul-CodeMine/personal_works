#include "mathoperations.h"

/**
 * solve_maths - function to perform maths operation
 * @fnum: the first number to add
 * @snum: the second number to add
 * @chr: the mathematical symbol for operation
 * Return: result of the operation
 */

double solve_maths(double fnum, char chr, double snum)
{
	double result = 0;

	switch (chr)
	{
		case '+':
			result = addition(fnum, snum);
			break;
		case '-':
			result = subtraction(fnum, snum);
			break;
		case '*':
			result = multiplication(fnum, snum);
			break;
		case '/':
			result = division(fnum, snum);
			break;
		case '%':
			result = division_remainder(fnum, snum);
			break;
		default:
			result = 0.0;
	}

	return (result);
}
