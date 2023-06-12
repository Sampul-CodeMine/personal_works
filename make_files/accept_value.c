#include "main.h"

/**
 * accept_value - function to accept value from user 
 * @prompt: string label to indicate whats needed
 * Return: int value of what was entered
 */

int accept_value(char *prompt)
{
	int data = 0;

	printf("Enter %s:\t", prompt);
	if (scanf("%d", &data) == 1)
		return (data);
	return (1);
}
