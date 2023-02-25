#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
        return (a + b);
}

int subtract(int a, int b)
{
        return (a - b);
}

int multiply(int a, int b)
{
        return (a * b);
}

double divide(int a, int b)
{
        if (b == 0)
        {
                printf("Denominator cannot be 0");
                exit(EXIT_FAILURE);
        }
        return (a / b);
}

int get_input(char *str)
{
        int num = 0;

        printf("%s:\t", str);
        if (scanf("%d", &num) == 1)
                return (num);
        return (-1);
}

char get_operator(void)
{        
        char *prompt = "1\t[Addition]\n2\t[Subtraction]\n3\t[Multiplication]\n4\t[Division]\n";
        int ops;

        printf("%s", prompt);
        ops = get_input("Choose Operation");
        switch (ops)
        {
        case 1:
                ops = '+';
                break;
        case 2:
                ops = '-';
                break;
        case 3:
                ops = '*';
                break;
        case 4:
                ops = '/';
                break;
        default:
                printf("Invalid Operator issued\n");
                exit(EXIT_FAILURE);
        }
        return (ops);
}

void perform_calc(int a, int b, char ops)
{
        switch (ops)
        {
        case '+':
                printf("\n%d %c %d = %d\n", a, ops, b, add(a, b));
                break;
        case '-':
                printf("\n%d %c %d = %d\n", a, ops, b, subtract(a, b));
                break;
        case '*':
                printf("\n%d %c %d = %d\n", a, ops, b, multiply(a, b));
                break;
        case '/':
                printf("\n%d %c %d = %.2f\n", a, ops, b, divide(a, b));
                break;
        default:
                printf("Invalid mathematical operation.\n");
        }
}

int main(void)
{
        int first = 0, second = 0;
        char ops;

        ops = get_operator();
        first = get_input("Enter First Number");
        second = get_input("Enter Second Number");

        perform_calc(first, second, ops);

        return (0);
}
