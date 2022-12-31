#include "mathoperations.h"
#include <iostream>
#include <cmath>
#include <limits>
#include <string>
#include <sstream>

using namespace std;

MathOperations::MathOperations(double f, char o, double s){
    firstNumber = f;
    mathOperator = o;
    secondNumber = s;
}

double MathOperations::AcceptNumericInput(){
    double data = 0;
    bool isFail = true;
    do {
        cout << "\nEnter Number : ";
        cin >> data;
        isFail = cin.fail();
        if (isFail == true )
            cout << "Numeric data required.\n";

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (isFail == true);
    return data;
}

char MathOperations::AcceptMathOperator(){
    char data;
    char rightOperator;
    string opsInfo = "\nChoose Maths Operation\n+\t=>\t[Addition]\n-\t=>\t[Subtraction]\n*\t=>\t[Multiplication]\n/\t=>\t[Division]\n%\t=>\t[Division Remainder]\n\nChoose An Option : ";
start:
    cout << opsInfo;
    cin >> data;
    cin.ignore();
    if (data == '/'){
        rightOperator = '/';
    } else if (data == '%'){
        rightOperator = '%';
    } else if (data == '*'){
        rightOperator = '*';
    } else if (data == '-') {
        rightOperator = '-';
    } else if (data == '+'){
        rightOperator = '+';
    } else {
        cout << "\nInvalid Mathematical Operator\n";
        goto start;
    }

    return rightOperator;
}

double MathOperations::Sum(double first, double second){
    return (first + second);
}

double MathOperations::Difference(double first, double second){
    return (first - second);
}

double MathOperations::Product(double first, double second){
    return (first * second);
}

double MathOperations::Division(double first, double second){
    if (second == 0){
        cout << "\nCannot divide " << first << " by " << second << endl;
        return 0;
    }
    return (first / second);
}

double MathOperations::Remainder(double first, double second){
    int f = round(first);
    int s = round(second);
    if (second == 0){
        cout << "\nCannot divide " << first << " by " << second << endl;
        return 0;
    }
    return (f % s);
}

double MathOperations::SolveMaths(double first, char operation, double second){
    string math_operation = "";
    double result = 0;
    switch (operation){
    case '+':
        result = Sum(first, second);
        break;
    case '-':
        result = Difference(first, second);
        break;
    case '*':
        result = Product(first, second);
        break;
    case '/':
        result = Division(first, second);
        break;
    case '%':
        result = Remainder(first, second);
        break;
    default:
        result = 0.0;
    }

    return result;
}

void MathOperations::DisplayResult(double first, char operation, double second, double output){
    system("CLS");
    string ops = "";
    switch (operation){
    case '+':
        ops = "Addition";
        break;
    case '-':
        ops = "Subtraction";
        break;
    case '*':
        ops = "Multiplication";
        break;
    case '/':
        ops = "Division";
        break;
    case '%':
        ops = "Remainder";
        break;
    default:
        ops = "Error";
    }
    cout.precision(3);
    cout << ops << ":\n" << first << " " << operation << " " << second << " = " << output << endl;
}

string MathOperations::KeepHistory(double first, char operation, double second, double output){
    string ops = "";
    string result = "";
    ostringstream concatstring;

    switch (operation){
    case '+':
        ops = "Addition";
        break;
    case '-':
        ops = "Subtraction";
        break;
    case '*':
        ops = "Multiplication";
        break;
    case '/':
        ops = "Division";
        break;
    case '%':
        ops = "Remainder";
        break;
    default:
        ops = "Error";
    }

    first = round(first * 100) / 100;
    second = round(second * 100) / 100;
    output = round(output * 100) / 100;

    concatstring << "\n" << ops << ":\n" << first << " " << operation << " " << second << " = " << output << "\n";

    return concatstring.str();
}
