#include <stdio.h>
#include <stdbool.h>

int main()
{
    //
    // This is variable Format specifiers
    //
    int number = 10;                  // Integer for number
    float phi = 3.14;                 // Float for comma number
    char letter = 'g';                // Character for single letter
    char word[] = "Hello";            // Character array for word
    double largenumber = 32.28882338; // Double for large comma number
    bool isOpen = true;               // Bool for True or False

    // printf("Integer: %d\n", number);      // %d for integer (decimal)
    // printf("Float: %f\n", phi);           // %f for float
    // printf("Letter: %c\n", letter);       // %c for character
    // printf("Word: %s\n", word);           // %s for string array
    // printf("Double: %lf\n", largenumber); // %lf for double (long float)
    // printf("Bool: %d\n", isOpen);         // $d for decimal because Boolean is 1 or 0

    //
    // This is appearances specifiers
    //
    int num1 = 9;
    int num2 = 90;
    int num3 = -900;

    // Width
    printf("%3d\n", num1);  // %3d is minimum character to print
    printf("%-3d\n", num2); // %-3d is for left justify the print
    printf("%03d\n", num3); // %03d is for 0 rather than spaces
}