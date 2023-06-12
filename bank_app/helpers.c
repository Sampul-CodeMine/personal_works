#include "bank_app.h"

/**
 * get_data - function to get string data from the user
 * @prompt: the prompt to show what the user is to enter. String datatype
 * Return: The string entered.
 */
char *get_data(char *prompt)
{
	static char input[LEN];
	char *newline;

	/* getting the input from the user */
	printf("%s: ", prompt);
	fgets(input, sizeof(input), stdin);

	/* removing extra/trailing white space */
	newline = strchr(input, '\n');
	if (newline != NULL)
		*newline = '\0';

	return (input);
}

char *get_data_dyn(char *prompt)
{
	char *data = NULL, *input = NULL;
	size_t bufsize = 0;
	ssize_t inputlen;

	/* getting the input from the user */
	printf("%s: ", prompt);
	inputlen = getline(&input, &bufsize, stdin);

	/* if there was an error with reading from the input stream */
	if (inputlen == -1)
		return (NULL);

	/* removing extra/trailing white space */
	if (input[inputlen - 1] == '\n')
		input[inputlen - 1] = '\0';

	/* allocate memory for the data */
	data = (char *)malloc(sizeof(char) * (strlen(input) + 1));

	/* Checking if the data is empty */
	if (data == NULL)
	{
		free(input);
		return (NULL);
	}

	/* copy the input into data and free up input then return  the data */
	strcpy(data, input);
	free(input);

	return (input);
}

/**
 * get_int_input - function to get numeric input from a user
 * @prompt: the prompt to show what the user is to enter. Numeric data
 * Return: Numeric input value
 */
int get_int_input(char *prompt)
{
	int data = 0;

	/* getting the input from the user */
	printf("%s: ", prompt);
	if (scanf("%d", &data) == 1)
		return (data);
	return (0);
}

/**
 * get_char - function that gets char input from a user
 * @prompt: the prompt to show what the user is to enter. Char type data.
 * Return: character datatype
 */
char get_char(char *prompt)
{
	char data = '\0';

	/* getting the user input */
	printf("%s: ", prompt);
	if (scanf(" %c", &data) == 1)
		return (data);
	return (98);
}

/**
 * checkpassword - function to check if both passwords match
 * @pass: the first password
 * @cpass: the second password
 * Return: 0 if successful else 98 if failed.
 */
int checkpassword(char *pass, char *cpass)
{
	int count = 3;

	while (count >= 1)
	{
		if (strcmp(pass, cpass) == 0)
			return (0);
		if (count == 1)
			return (98);
		count--;
		printf("\nBoth passwords don't match. Try again.\n");
		printf("\nYou have %d more attempts.\n", count);
		cpass = get_data("Confirm your password");
	}
	return (98);
}

void destory_mem(char **a, char **b, char **c)
{
	free(a);
	free(b);
	free(c);
}
