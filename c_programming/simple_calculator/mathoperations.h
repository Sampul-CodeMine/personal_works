#ifndef MATHOPERATIONS_H
#define MATHOPERATIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

double accept_num_input(void);
char accept_operator(void);
double addition(double, double);
double subtraction(double, double);
double multiplication(double, double);
double division(double, double);
double division_remainder(double, double);
double solve_maths(double, char, double);
void display_result(double, char, double, double);

#endif // MATHOPERATIONS_H
