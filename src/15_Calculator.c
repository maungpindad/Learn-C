#include <stdio.h>

int main()
{

    char operator;
    double first, second, result;

    printf("Calculator Program\n");
    printf("==================\n");

    printf("Enter the first number : ");
    scanf("%lf", &first);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to consume any whitespace

    printf("Enter the second number: ");
    scanf("%lf", &second);

    switch (operator)
    {
    case '+':
        result = first + second;
        break;
    case '-':
        result = first - second;
        break;
    case '*':
        result = first * second;
        break;
    case '/':
        result = first / second;
    default:
        printf("Invalid Operator");
        break;
    }

    printf("Result of %.2lf %c %.2lf is %.2lf : ", first, operator, second, result);
    return 0;
}