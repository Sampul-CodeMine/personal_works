#include <stdio.h>
#define M 10

int main(void)
{
	int n[M];
	int i, iseven = 0, isodd = 0;

	for (i = 0; i < M; i++)
	{
		printf("Enter Number:\t");
		if (scanf("%d", &n[i]) == 1)
		{
			if (n[i] % 2 == 0)
			{
				++iseven;
				printf("%d is even\n", n[i]);
			}
			else
			{
				++isodd;
				printf("%d is odd\n", n[i]);
			}
		}
	}
	printf("Total Odd Numbers is %d out of %d numbers.\n", isodd, M);
	printf("Total Even Numbers is %d out of %d numbers.\n", iseven, M);


	return (0);
}
