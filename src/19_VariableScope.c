// Variable can have the same name in different scopes without conflict.
// Variables can have block scope, function scope, or file scope.
// Block scope: Variables declared within a block (enclosed by curly braces {}) are only accessible within that block.
// Function scope: Variables declared within a function are only accessible within that function.
// File scope: Variables declared outside of any function are accessible from the point of declaration to the end of the file.

#include <stdio.h>

// Global variable (file scope)
int globalVar = 10;

int add(int a, int b)
{
    // Local variables (function scope)
    int sum = a + b;
    return sum;
}

int multiply(int a, int b)
{
    // Local variables (function scope)
    int product = a * b;
    return product;
}

int main()
{
    // Local variable (function scope)
    int localVar = 5;

    printf("Global Variable: %d\n", globalVar);
    printf("Local Variable: %d\n", localVar);

    int a = 3, b = 4;
    printf("Addition: %d + %d = %d\n", a, b, add(a, b));
    printf("Multiplication: %d * %d = %d\n", a, b, multiply(a, b));

    // Uncommenting the following line will cause a compilation error
    // because 'sum' is not accessible outside the 'add' function.
    // printf("Sum: %d\n", sum);

    return 0;
}