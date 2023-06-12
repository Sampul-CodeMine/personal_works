#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	char name[100], dept, gender, sch;

	/* Using gets() and puts() functions */
	puts("\nEnter Name:\t");
	gets(name);
	puts("\nYour name is ");
	puts(name);
	putchar('\n');

	/* Using getch() and putch() functions */
	puts("Enter Gender:\t");
	gender = getch();
	puts("\nYour gender is ");
	putch((int)gender);

	/* Using getchar() and putchar() functions */
	puts("\nEnter Department:\t");
	dept = getchar();
	puts("\nYour Department is ");
	putchar(dept);
	putchar('\n');

	/* Using getche(), putchar() and puts() functions */
	puts("\nEnter School:\t");
	sch = getche();
	puts("\nYour School is ");
	putchar(sch);
	putchar('\n');

	return (0);
}
