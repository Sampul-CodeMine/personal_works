#include "../main.h"

/**
 * divi - function to divide a numerator with a denominator
 * @n_one: first value of datatype double
 * @n_two: second value of datatype double
 * Return: Returns NULL if the denominator is = 0 else the division
 */

double divi(double n_one, double n_two)
{
	if (n_two == 0)
		return (0);
	return (n_one / n_two);
}
