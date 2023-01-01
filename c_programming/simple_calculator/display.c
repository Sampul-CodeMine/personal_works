#include "mathoperations.h"

/**
 * display_result - function to display the result of the maths operation
 * @fnum: first value for the mathematics operation
 * @snum: second value for the mathematics operation
 * @chr: the mathematics operation performed
 * @result: the output from the operation
 * Return: Nothing
 */

void display_result(double fnum, char chr, double snum, double result)
{
	char *ops;

	system("clear");
	switch (chr)
	{
	case '+':
		ops = "Addition";
		printf("%s:\n%.2lf %c %.2lf = %.2lf\n", ops, fnum, chr, snum, result);
		break;
	case '-':
		ops = "Subtraction";
		printf("%s:\n%.2lf %c %.2lf = %.2lf\n", ops, fnum, chr, snum, result);
		break;
	case '*':
		ops = "Multiplication";
		printf("%s:\n%.2lf %c %.2lf = %.2lf\n", ops, fnum, chr, snum, result);
		break;
	case '/':
		ops = "Division";
		printf("%s:\n%.2lf %c %.2lf = %.2lf\n", ops, fnum, chr, snum, result);
		break;
	case '%':
		ops = "Remainder Division";
		printf("%s:\n%.2lf %c %.2lf = %.2lf\n", ops, fnum, chr, snum, result);
		break;
	default:
		ops = "Error";
		printf("%s:\n", ops);
		break;
	}
}
