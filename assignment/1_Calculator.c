#include <stdio.h>

double addition(double first, double second)
{
    return first + second;
}

double substraction(double first, double second)
{
    return first - second;
}

double multiplication(double first, double second)
{
    return first * second;
}

double division(double first, double second)
{
    if (second == 0)
    {
        printf("Error: Cannot divide by zero!\n");
        return 0.0;
    }
    return first / second;
}

int main()
{

    double first, second, result;
    char operator;

    printf("===== Calculator ======\n");

    printf("Enter the First Number : ");
    scanf("%lf", &first);

    printf("Enter an operator (+, -, *, /) : ");
    scanf(" %c", &operator);

    printf("Enter the Second Number : ");
    scanf("%lf", &second);

    switch (operator)
    {
    case '+':
        result = addition(first, second);
        printf("Result of %.2lf %c %.2lf : %.2lf", first, operator, second, result);
        break;
    case '-':
        result = substraction(first, second);
        printf("Result of %.2lf %c %.2lf : %.2lf", first, operator, second, result);
        break;
    case '*':
        result = multiplication(first, second);
        printf("Result of %.2lf %c %.2lf : %.2lf", first, operator, second, result);
        break;
    case '/':
        result = division(first, second);
        printf("Result of %.2lf %c %.2lf : %.2lf", first, operator, second, result);
        break;
    default:
        printf("Invalid Operator");
        break;
    }

    return 0;
}