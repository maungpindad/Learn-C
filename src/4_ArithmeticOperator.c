#include <stdio.h>

int main()
{
    int number1 = 10;
    int number2 = 20;
    int number3 = 30;
    float floatnumber1 = 10.5;
    float floatnumber2 = 20.5;

    // Addition
    int addition = number1 + number2;
    printf("Addition: %d + %d = %d\n", number1, number2, addition);

    // Subtraction
    int subtraction = number3 - number1;
    printf("Subtraction: %d - %d = %d\n", number3, number1, subtraction);

    // Multiplication
    int multiplication = number1 * number2;
    printf("Multiplication: %d * %d = %d\n", number1, number2, multiplication);

    // Division
    int division = number2 / number1;
    printf("Division: %d / %d = %d\n", number2, number1, division);

    int division2 = number1 / number2;
    printf("Division2: %d / %d = %d\n", number1, number2, division2); // This will output 0 because both number1 and number2 are integers, so the result is also an integer.

    float division3 = floatnumber1 / floatnumber2;
    printf("Division3: %.2f / %.2f = %.2f\n", floatnumber1, floatnumber2, division3); // This will output a float because both floatnumber1 and floatnumber2 are floats, so the result is also a float.

    // Modulus
    int modulus = number3 % number2;
    printf("Modulus: %d %% %d = %d\n", number3, number2, modulus);

    // Increment
    number1++;
    printf("Increment: number1 is now %d\n", number1);

    // Decrement
    number2--;
    printf("Decrement: number2 is now %d\n", number2);

    // Augmented Assignment
    number3 += 10; // Equivalent to number3 = number3 + 10
    printf("Augmented Assignment: number3 is now %d\n", number3);
    return 0;
}