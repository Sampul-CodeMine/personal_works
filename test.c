#include <stdio.h>
#include <stdarg.h>

void print_all_args(int num, ...)
{
        va_list arp;
        int itr;

        va_start(arp, num);
        for (itr = num; itr >= 0; itr = va_arg(arp, int))
                printf("%d ", itr);
        va_end(arp);
        putchar('\n');
}

void print(int numb, ...)
{
	va_list arp;
	int itr = 0, num = 0;

	va_start(arp, numb);
	while (itr < numb)
	{
		num = va_arg(arp, int);
		if (num < 0)
			return;
		printf("%d ", num);
	}
	va_end(arp);
	putchar('\n');
}
int main(void)
{
        print_all_args(5, 6, 7, 10, 21, 44, 12, 57, -4, 100);
        print(10, 5, 6, 7, 10, 21, 44, 12, 57, -4, 100);
        return (0);
}
