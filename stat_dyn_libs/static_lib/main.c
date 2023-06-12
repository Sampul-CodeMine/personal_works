#include "main.h"

/**
 * main - This is the start point of my program
 * Return: Always Success (0)
 */

int main(void)
{
	double first, second;
        double result;

	first = 0;
	second = 0;

	printf("Enter the First Number:\t");
	scanf("%lf", &first);
	printf("Enter the Second Number:\t");
	scanf("%lf", &second);

	printf("The sum of %.2f and %.2f = %.2f\n", first, second, add(first, second));
	printf("The difference between %.2f and %.2f = %.2f\n", first, second, sub(first, second));
	printf("The product of %.2f and %.2f = %.2f\n", first, second, mul(first, second));
        result = divi(first, second);

        if (result == 0)
        {
                printf("%.2f divided by %.1f is an error. Cannot divide by %.1f", first, second, second);
        }
        else
        {
                printf("%.2f divided by %.1f = %.2f\n", first, second, result);
        }
	
	return (0);
}
