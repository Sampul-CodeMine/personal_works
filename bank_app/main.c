#include "bank_app.h"

/**
 * main - Program  entry point
 * Return: Always Success(0)
 */

int main(void)
{
	char *name, *pass, *confpass, option = '\0';
	/* char *acctnum = NULL; */
	/* double cash_amt = 0.0, acct_bal = 0.0; */

	welcome_menu();
	name = get_data("Enter your full name");
	pass = get_data("Choose a password");
	confpass = get_data("Confirm your password");

	if (checkpassword(pass, confpass) == 0)
	{
		while (1)
		{
			option = transaction_menu();
			perform_transaction(option);
		}
	}
	else
	{
		printf("We could not create your account. Try later.\n");
		exit(0);
	}
	/* destory_mem(&name, &pass, &confpass); */
	/* free(name);
	free(pass);
	free(confpass); */
	
	return (0);
}
