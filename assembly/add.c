#include <stdio.h>

/* compiled with gcc -m32 -S add.c to get the assembly language code equivalent */
/* gcc -m32 -c add.s to get the binary object of the code */
/* gcc -m32 -o add add.o to get the executable from the object file created */

int add(int, int);

int main(void)
{
	int f, s, sum;

	f = 2;
	s = 3;
	sum = add(f, s);
	printf("The sum of %d and %d = %d", f, s, sum);
}

int add(int x, int y)
{
	return (x + y);
}