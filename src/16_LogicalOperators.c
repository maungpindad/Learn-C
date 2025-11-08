#include <stdio.h>
#include <stdbool.h>

int main()
{
    // && = And
    printf("&& = And Operator Example\n");
    double temperature, humidity;

    printf("Enter the temperature in Celsius: ");
    scanf("%lf", &temperature);
    printf("Enter the humidity percentage: ");
    scanf("%lf", &humidity);

    if (temperature > 18 && temperature < 32)
    {
        printf("The temperature is Good");
    }
    else
    {
        printf("The temperature is Bad");
    }

    // || = Or
    printf("\n\n|| = Or Operator Example\n");
    double income;
    int credit_score;

    printf("\nEnter your annual income: ");
    scanf("%lf", &income);
    printf("Enter your credit score: ");
    scanf("%d", &credit_score);

    if (income > 50000 || credit_score > 700)
    {
        printf("You are eligible for the loan.");
    }
    else
    {
        printf("You are not eligible for the loan.");
    }

    // ! = Not
    printf("\n\n! = Not Operator Example\n");
    int is_raining;

    printf("\nIs it raining? (1 for Yes, 0 for No): ");
    scanf("%d", &is_raining);

    if (!is_raining)
    {
        printf("You can go for a walk.");
    }
    else
    {
        printf("Better to stay indoors.");
    }

    // Combining Logical Operators
    printf("\n\nCombining Logical Operators Example\n");
    int temp_has_id, temp_has_ticket, unrest_level;
    bool has_id, has_ticket;

    printf("\nDo you have an ID? (1 for Yes, 0 for No): ");
    scanf("%d", &temp_has_id);

    printf("Do you have a ticket? (1 for Yes, 0 for No): ");
    scanf("%d", &temp_has_ticket);

    printf("Enter the unrest level (1-10): ");
    scanf("%d", &unrest_level);

    has_id = temp_has_id;
    has_ticket = temp_has_ticket;

    if (has_id && has_ticket && !(unrest_level > 5))
    {
        printf("You can enter the concert.");
    }
    else
    {
        printf("You cannot enter the concert.");
    }

    return 0;
}