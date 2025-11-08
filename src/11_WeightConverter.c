#include <stdio.h>

int main()
{
    int choice;
    double pounds, kilograms;

    printf("===== Weight Converter =====\n");
    printf("Make a choice!\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter the height in Kilogram : ");
        scanf("%lf", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2lf Kilograms is equal to %.2lf Pounds\n", kilograms, pounds);
    }
    else if (choice == 2)
    {
        printf("Enter the height in Pounds : ");
        scanf("%lf", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2lf Pounds is equal to %.2lf Kilograms\n", pounds, kilograms);
    }

    return 0;
}