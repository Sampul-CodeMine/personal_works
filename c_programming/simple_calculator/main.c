#include "mathoperations.h"

typedef struct Calculator {
    double first_number;
    double second_number;
    char math_operator;
    double result;
} mathematics;

int main (void)
{
    mathematics math;
    char reply = 'y';
    char *question = "\nDo you wish to continue with another calculation? (y/n) : ";

    do
    {
        math.first_number = accept_num_input();
        math.math_operator = accept_operator();
        math.second_number = accept_num_input();
        math.result = solve_maths(math.first_number, math.math_operator, math.second_number);
        display_result(math.first_number, math.math_operator, math.second_number, math.result);

        printf("%s", question);
        scanf("%s", &reply);
    } while (reply == 'y' || reply == 'Y');

    return (0);
}
