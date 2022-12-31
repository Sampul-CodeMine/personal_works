#include "mathoperations.h"
/**
 * accept_num_input - function to accept numeric data
 * return: numeric data
 */

double accept_num_input(void)
{
    double data = 0;

    printf("\nEnter a number:\t");
    scanf("%lf", &data);

    return (data);
}
