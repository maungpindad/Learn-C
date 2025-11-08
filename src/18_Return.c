#include <stdio.h>
#include <stdbool.h>

/**
 * EXAMPLE 1: Simple Return (Calculation)
 * This function 'promises' to return an 'int'.
 * Its task is to calculate the area.
 */
int calculateArea(int length, int width)
{
    int area = length * width;

    // 'return' sends the value 'area' back to whoever
    // called this function.
    // Can also like: return length * width;
    return area;
}

/**
 * EXAMPLE 2: if-return (Logic Checking)
 * This function 'promises' to return a 'bool' (true or false).
 * This is an 'Early Return' or 'Early Exit' pattern.
 */
bool isLegalAge(int age)
{
    // If the age is 17 or older,
    if (age >= 17)
    {
        // ...immediately stop this function
        // and return the value 'true'.
        // The lines after this will NOT be executed.
        return true;
    }

    // This line will ONLY execute if the 'if' above is 'false'
    // (if the age is below 17).
    return false;
}

/**
 * EXAMPLE 3: if-return (Preventing Errors / Guard Clause)
 * This function 'promises' to return a 'float'.
 * We use 'if' to PREVENT division-by-zero errors.
 */
float divide(float a, float b)
{
    // This is called a "Guard Clause"
    // We check the error condition early.
    if (b == 0)
    {
        printf("Error: Cannot divide by zero!\n");
        // We exit early and return a 'safe' value
        return 0.0;
    }

    // This code is guaranteed safe and ONLY runs
    // if the 'if' above is 'false'.
    float result = a / b;
    return result;
}

// --- MAIN FUNCTION TO RUN EVERYTHING ---
int main()
{
    // --- Using calculateArea ---
    // We 'capture' the value returned by the function
    // into the 'area' variable.
    int area_result = calculateArea(10, 5);
    printf("The area of the rectangle is: %d\n", area_result);

    // We can also use it directly
    printf("Another area (7x3) is: %d\n", calculateArea(7, 3));

    printf("\n--- Example of if-return ---\n");
    // --- Using isLegalAge ---
    int budi_age = 20;

    // The 'true' or 'false' value from isLegalAge
    // is directly used by 'if' in main.
    if (isLegalAge(budi_age)) // isLegalAge(20) will 'return true'
    {
        printf("Budi (age %d) is allowed to get an ID card.\n", budi_age);
    }

    int ana_age = 15;
    if (!isLegalAge(ana_age)) // isLegalAge(15) will 'return false'
    {
        printf("Ana (age %d) is not allowed to get an ID card yet.\n", ana_age);
    }

    printf("\n--- Example of Guard Clause ---\n");
    // --- Using divide ---
    float result1 = divide(10, 2); // This will run normally
    printf("Result 10 / 2 = %.1f\n", result1);

    float result2 = divide(10, 0);             // This will trigger the 'if' inside the function
    printf("Result 10 / 0 = %.1f\n", result2); // Will print the 'safe' value (0.0)

    return 0;
}