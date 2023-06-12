#include "bank_app.h"

/**
 * welcome_menu - function to display the menu to the users.
 * Return: Nothing
 */
void welcome_menu(void)
{
	printf("======================================================\n");
	printf("== W E L C O M E  T O  S I M P L Y _ B A N K  A P P ==\n");
	printf("======================================================\n\n");
	printf("You have to create an account before you can transact.\n\n");
	printf("\nPlease create an account to continue.\n");
}

/**
 * transaction_menu - function that allow user choose from transaction menu
 * Return: (char) the character entered by the user
 */
char transaction_menu(void)
{
	char option = '\0';

	printf("\n = = = = =   M E N U   = = = = =\n\n");
	printf("[B] Check Balance\n[D] Deposit Cash\n[T] Transfer");
	printf(" Cash\n[W] Withdraw Cash\n[X] Exit\n");
	option = get_char("Choose: ");
	return (option);
}

/**
 * perform_transaction - function that performs transaction based on user's
 * option selected from the transaction menu
 * @option: the option selected by the user from the menu
 * Return: Nothing
 */
void perform_transaction(char option)
{
	switch (option)
	{
	case 'B':
	case 'b':
		printf("\nCheck Balance\n");
		break;
	case 'D':
	case 'd':
		printf("\nDeposit Cash\n");
		break;
	case 'T':
	case 't':
		printf("\nTransfer Cash\n");
		break;
	case 'W':
	case 'w':
		printf("\nWithdraw Cash\n");
		break;
	case 'X':
	case 'x':
		printf("\nThank you for using Simply Bank App.\n");
		printf("Hope to see you soon. Have a lovely day.\n\n");
		exit(0);
	default:
		printf("\nInvalid option. Try again.\n\n");
	}
}
