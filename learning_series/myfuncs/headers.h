#ifndef HEADERS_H
#define HEADERS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <limits.h>

typedef struct s_operation
{
        char *operator;
        double (*func)(double);
} single_math_operation;

typedef struct d_operation
{
        char *operator;
        double (*func)(double, double);
} double_math_operation;

double add(double, double);
double multiply(double, double);
double subtract(double, double);
double percent(double);
double accept_number(void);

#endif /* HEADERS_H */