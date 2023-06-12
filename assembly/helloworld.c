#include <stdio.h>

/* compiled using gcc -S helloworld.c */

int myfunc(int param);

int main(void)
{
	int ret;

	printf("Hellow World\n");
	ret = myfunc(32);
	printf("myfunc(32) is %d\n", ret);
	return (0);
}
