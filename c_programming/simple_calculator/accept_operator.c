#include "mathoperations.h"
/**
 * accept_operator - function to accept character sign for math operation
 * return: char for the math operation
 */

char accept_operator(){
    char *data;
    char *opsInfo = "\nChoose Maths Operation\n+\t=>\t[Addition]\n-\t=>\t[Subtraction]\n*\t=>\t[Multiplication]\n/\t=>\t[Division]\n%\t=>\t[Division Remainder]\n\nChoose An Option : ";
start:
    printf("%s", opsInfo);
    scanf("%s", &data);
    if (data == '+' || data == '-' || data == '*' || data == '/' || data == '%')
        return (data);
    else
    {
        printf("\nInvalid math operator\n");
        goto start;
    }
}
