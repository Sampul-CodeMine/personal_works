#include "mathoperations.h"
/**
 * division_remainder - function to divide a number by another
 * and return the remainder
 * @fnum: the first number as the dividend
 * @snum: the second number as the divisor
 * return: result from division
 */

double division_remainder(double fnum, double snum)
{
    int firstnum = (int)fnum;
    int secondnum = (int)snum;

    if (snum == 0)
    {
        printf("Cannot divide %lf by %lf.\n", fnum, snum);
        return (0);
    }
    return (firstnum % secondnum);
}


