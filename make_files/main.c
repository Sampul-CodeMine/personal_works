#include "main.h"

/**
 * main - Program Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int fnum = 0, snum = 0;
	int choice;

	fnum = accept_value("First Number");
	snum = accept_value("Second Number");
	printf("\n[1] - Addition\n[1] - Subtract\n[3]"
			"- Multiply\n[4] - Divide\n");
	if (scanf("%d", &choice) == 1)
	{
		if (choice == 1)
			printf("%d + %d = %d", fnum, snum, add(fnum, snum));
		else if (choice == 2)
			printf("%d - %d = %d", fnum, snum, subtract(fnum, snum));
		else if (choice == 3)
			printf("%d * %d = %d", fnum, snum, multiply(fnum, snum));
		else if (choice == 4)
		{
			if (snum == 0)
			{
				printf("You cannot divide %d by 0.", fnum);
				return (1);
			}
			printf("%d / %d = %.2f", fnum, snum, divide(fnum, snum));
		}
		else
			printf("You did not make a right choice.\n");
	}
	return (0);
}
