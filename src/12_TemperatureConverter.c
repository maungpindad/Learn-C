#include <stdio.h>

int main()
{
    char choice;
    double farenheit, celsius;

    printf("Temperature Converter\n");
    printf("Choose conversion type:\n");
    printf("C - Convert Celsius to Farenheit\n");
    printf("F - Convert Farenheit to Celsius\n");
    printf("Enter your choice (C/F): ");
    scanf(" %c", &choice);

    if (choice == 'C')
    {
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &celsius);
        farenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("%.2f Celsius is %.2f Farenheit\n", celsius, farenheit);
    }
    else if (choice == 'F')
    {
        printf("Enter temperature in Farenheit: ");
        scanf("%lf", &farenheit);
        celsius = (farenheit - 32.0) * 5.0 / 9.0;
        printf("%.2f Farenheit is %.2f Celsius\n", farenheit, celsius);
    }
    else
    {
        printf("Invalid choice! Please enter C or F.\n");
    }

    return 0;
}