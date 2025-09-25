#include <stdio.h>
#include <stdbool.h>

int main()
{
    // This is variable Format specifiers
    int number = 10;                  // Integer for number
    float phi = 3.14;                 // Float for comma number
    char letter = 'g';                // Character for single letter
    char word[] = "Hello";            // Character array for word
    double largenumber = 32.28882338; // Double for large comma number
    bool isOpen = true;               // Bool for True or False

    printf("Integer: %d\n", number);      // %d for integer (decimal)
    printf("Float: %f\n", phi);           // %f for float
    printf("Letter: %c\n", letter);       // %c for character
    printf("Word: %s\n", word);           // %s for string array
    printf("Double: %lf\n", largenumber); // %lf for double (long float)
    printf("Bool: %d\n", isOpen);         // $d for decimal because Boolean is 1 or 0

    // This is appearances specifiers
    int num1 = 9;
    int num2 = 90;
    int num3 = -900;
    int num4 = 400;

    printf("%3d\n", num1);  // %3 is minimum character to print
    printf("%-3d\n", num2); // %-3 is for left justify the print
    printf("%03d\n", num3); // %03 is for 0 rather than spaces
    printf("%+d\n", num4);  // %+ is for print with + sign

    // Display behavior
    float price1 = 29.82;
    float price2 = 3.22;
    float price3 = -126.76;

    printf("%.2f\n", price1); // %.2f is for 2 numbers after the decimal point
    printf("%.1f\n", price2); // If the number after the decimal point is more than the format specifier, the number will be rounded.
    printf("%.2f\n", price3);
}