#ifndef MATHOPERATIONS_H
#define MATHOPERATIONS_H
#include <iostream>
#include <string>

using namespace std;

class MathOperations
{
    public:
        MathOperations(double f, char o, double s);
        double AcceptNumericInput();
        char AcceptMathOperator();
        double Sum(double first, double second);
        double Difference(double first, double second);
        double Product(double first, double second);
        double Division(double first, double second);
        double Remainder(double first, double second);
        double SolveMaths(double first, char operation, double second);
        void DisplayResult(double first, char operation, double second, double output);
        string KeepHistory(double first, char operation, double second, double output);

    protected:

    private:
        double firstNumber;
        double secondNumber;
        char mathOperator;
};

#endif // MATHOPERATIONS_H
