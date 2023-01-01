#include "mathoperations.h"

/**
 * division - function to divide a number by another
 * @fnum: the first number as the dividend
 * @snum: the second number as the divisor
 * Return: result from division
 */

double division(double fnum, double snum)
{
	if (snum == 0)
	{
		printf("Cannot divide %lf by %lf.\n", fnum, snum);
		return (0);
	}

	return (fnum / snum);
}
