#include <stdio.h>
#define MAX 5

int accept(void)
{
	int num = 0;

	printf("Number:\t");
	if (scanf("%d", &num) == 1)
		return (num);
	return (0);
}

int *fill_arr(int arr[])
{
	int i = 0;

	for (i = 0; i < MAX; i++)
		arr[i] = accept();
	return (arr);
}

int main(void)
{
	int f_arr[MAX] = {0};
	int s_arr[MAX] = {0};
	int sum_arr[MAX] = {0};
	int itr;

	printf("First Array Input\n");
	fill_arr(f_arr);
	printf("\n\nSecond Array Input\n");
	fill_arr(s_arr);
	printf("\n\n");
	for (itr = 0; itr < MAX; itr++)
	{
		sum_arr[itr] = f_arr[itr] + s_arr[itr];
		printf("Array 1: %d\tArray 2: %d\tTotal: %d\n", f_arr[itr], s_arr[itr], sum_arr[itr]);
	}

	return (0);
}
