// Variable is a named storage that our programs can manipulate.

#include <stdio.h>
#include <stdbool.h>

int main()
{
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

    return 0;
}