#include "myfuncs/headers.h"

int main(void)
{
	double first_num;
	double second_num;
	char oper;
	double result;

	first_num = accept_number();
	printf("\n[1]\tADDITION\n[2]\tSUBTRACTION\n[3]\tMULTIPLICATION\n[4]\tDIVISION\n[5]\tREMAINDE\n[6]\tPERCENTAGE\nChoose Operation::\t");
	scanf("%c", &oper);
	if (oper == '6')
	{
		result = percent(first_num);
		printf("The percentage of %lf.2 = %lf.2", first_num, result);
		return (0);
	}
	else
	{
		second_num = accept_number();
		printf("Okay for now");
		exit(0);
	}
}