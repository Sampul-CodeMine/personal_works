#include <stdio.h>
#include <stdlib.h>

int get_input(char *str)
{
        int num = 0;

        printf("%s:\t", str);
        if (scanf("%d", &num) == 1)
                return (num);
        return (-1);
}

int main(void)
{
        int number = 0;
        int fitr, itr;

        number = get_input("Times table of");

        for (itr = 1; itr <= number; itr++)
        {
                printf("%d TIMES Table\n===================\n", itr);
                for (fitr = 1; fitr <= 12; fitr++)
                {
                        printf("%d * %d = %d\n", itr, fitr, (fitr * itr));
                }
                printf("\n");
        }

        return (0);
}
