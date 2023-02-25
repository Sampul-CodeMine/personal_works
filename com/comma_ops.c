#include <stdio.h>

int main(void)
{
	int a;
	int n1 = 8, n2, getter;

	/* a = (printf("Dukeson: "), 2, 3); */
	a = (printf("Dukeson: "),3);
	printf("The value of a = %d\n", a);
	printf("\n");

	n2 = (n1++, ++n1, n1>> 2);
	printf("Now n1 = %d and n2 = %d\n", n1, n2);

	printf("\nEnter 3 numbers seperated with space: ");
	getter = scanf("%d %d %d", &a, &n1, &n2);
	printf("\nTotal gotten: %d\n", getter);

	return (0);
}
