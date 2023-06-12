#include "mathoperations.h"

/**
 * accept_operator - function to accept character sign for math operation
 * Return: char for the math operation
 */

char accept_operator(void)
{
	int ch;
	char *opsInfo = "\nChoose Maths Operation\n+\t=>\t[Addition]\n-\t=>\t[Subtraction]\n*\t=>\t[Multiplication]\n/\t=>\t[Division]\n%\t=>\t[Division Remainder]\n\nChoose An Option : ";

start:
	printf("%s", opsInfo);
	ch = getchar();
	if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%')
		return (ch);
	printf("\nInvalid math operator\n");
	goto start;
}
