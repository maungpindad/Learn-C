// While loop repeats a block of code as long as a specified condition is true.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char name[50];

    printf("Case 1: Using while loop to validate user input\n");
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    while (strlen(name) == 0)
    {
        printf("Name is empty. Please enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = 0;
    }

    printf("Welcome, %s\n", name);

    // Case 2: Using while loop to check condition
    bool condition = true;
    int count = 0;

    printf("\nCase 2: Using while loop to check condition\n");
    while (condition)
    {
        printf("Condition is true. Count: %d\n", count);
        count++;

        if (count >= 5)
        {
            condition = false;
        }
    }

    // Case 3: Do-while loop to ensure at least one execution
    int number;

    printf("\nCase 3: Using do-while loop to ensure at least one execution\n");
    do
    {
        printf("Enter a positive number: ");
        scanf("%d", &number);
    } while (number <= 0);

    return 0;
}