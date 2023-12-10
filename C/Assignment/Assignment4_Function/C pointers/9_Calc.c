/*
Write a function to implement four function calculator. The return value indicates the error (due
to zero denominator in case of division). The result is returned via out-parameter.
*/
#include <stdio.h>

int calculate(int op1, int op2, char op, int *result)
{
    int error = 0;
    switch (op)
    {
    case '+':
        *result = op1 + op2;
        break;
    case '-':
        *result = op1 - op2;
        break;
    case '*':
        *result = op1 * op2;
        break;
    case '/':
        if (op2 == 0)
        {
            error = 1; 
        }
        else
        {
            *result = op1 / op2;
        }
        break;
    default:
        error = 1; 
        break;
    }
    return error;
}

int main()
{
    int op1, op2, result;
    char op;
    int error;

    printf("Enter two integers and an op (+, -, *, /): ");
    scanf("%d %d %c", &op1, &op2, &op);

    error = calculate(op1, op2, op, &result);

    if (error == 1)
    {
        printf("Error: Invalid op or division by zero.\n");
    }
    else
    {
        printf("Result: %d\n", result);
    }

    return 0;
}
