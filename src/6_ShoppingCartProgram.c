#include <stdio.h>
#include <string.h>

int main()
{
    char itemname[50];
    float price;
    int quantity;
    float total;

    printf("=====================================\n");
    printf("       🛒 Shopping Cart 🛒 \n");
    printf("=====================================\n\n");

    printf("Enter item name = ");
    fgets(itemname, sizeof(itemname), stdin);
    itemname[strcspn(itemname, "\n")] = '\0';

    printf("Enter the price of each item = ");
    scanf("%f", &price);

    printf("Enter the quantity of item you buy = ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have bought %d %s\n", quantity, itemname);

    printf("The total price is = %.2f\n", total);
    return 0;
}