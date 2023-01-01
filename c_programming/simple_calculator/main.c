#include "mathoperations.h"

/**
  * main - Entry point
  * Return: Always 0 (Success)
  */

int main(void)
{
	math cal;
	char reply = 'y';
	char *qtn = "\nDo you wish to continue with another calculation? (y/n) : ";

	do {
		cal.f_n = accept_num_input();
		cal.math_opr = accept_operator();
		cal.s_n = accept_num_input();
		cal.result = solve_maths(cal.f_n, cal.math_opr, cal.s_n);
		display_result(cal.f_n, cal.math_opr, cal.s_n, cal.result);
		printf("%s", qtn);
		scanf("%s", &reply);
	} while (reply == 'y' || reply == 'Y');

	return (0);
}
