#ifndef MATHOPERATIONS_H
#define MATHOPERATIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/**
  * struct Calculator - structure to hold all required data for calculator
  * @f_n: first value to be entered
  * @s_n: second  value to be entered
  * @math_opr: the operator indicating the type of math operation
  * @result: the result from the calculation
  */

typedef struct Calculator
{
	double f_n;
	double s_n;
	char math_opr;
	double result;
} math;

double accept_num_input(void);
char accept_operator(void);
double addition(double, double);
double subtraction(double, double);
double multiplication(double, double);
double division(double, double);
double division_remainder(double, double);
double solve_maths(double, char, double);
void display_result(double, char, double, double);

#endif /* MATHOPERATIONS_H */
