#include <iostream>
#include <cmath>
#include <limits>
#include <string>
#include <stdlib.h>
#include "mathoperations.h"

using namespace std;

int main()
{

    string history = "";
    char reply = 'y';
    string question = "\nDo you wish to calculate another? (y/n) : ";

    do {
        system("CLS");
        double firstNumber = 0;
        char mathOperator = '+';
        double secondNumber = 0;
        double result = 0;

        MathOperations calc(0, '+', 0);
        firstNumber = calc.AcceptNumericInput();
        mathOperator = calc.AcceptMathOperator();
        secondNumber = calc.AcceptNumericInput();
        result = calc.SolveMaths(firstNumber, mathOperator, secondNumber);
        calc.DisplayResult(firstNumber, mathOperator, secondNumber, result);
        history = history + calc.KeepHistory(firstNumber, mathOperator, secondNumber, result);

        cout << endl << question << endl;
        cin >> reply;
        cin.ignore();
    } while ( reply == 'y' || reply == 'Y');

    system("CLS");
    cout << "==================================================================" << endl;
    cout << "=============== C A L U L A T I O N  S U M M A R Y ===============" << endl;
    cout << "==================================================================" << endl << endl;
    cout << history;
    cout << endl << endl;

    system("PAUSE");
    return 0;
}
