#include "headers.h"

double accept_number(void)
{
	double number = 0;

	printf("\nEnter A Number:\t");
	if (scanf("%lf", &number) == 0)
		return ((double)number);
	return (0);
}