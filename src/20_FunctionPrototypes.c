// Function prototypes: Function prototypes are declarations of functions that specify
// the function's name, return type, and parameters (if any) before the function is defined.
// They help the compiler to ensure that functions are called with the correct arguments and return types.

#include <stdio.h>
#include <stdbool.h>

void greet(char name[], char grade);
bool graduate(int score);

int main()
{
    printf("Function Prototypes Example\n");

    printf("What is your name? ");
    char name[30];
    scanf("%s", name);

    printf("What is your grade? ");
    char grade;
    scanf(" %c", &grade);

    greet(name, grade);

    printf("What is your score? ");
    int score;
    scanf("%d", &score);

    if (graduate(score))
    {
        printf("Congratulations! You have graduated.\n");
    }
    else
    {
        printf("Sorry, you have not graduated.\n");
    }

    return 0;
}

void greet(char name[], char grade)
{
    printf("Hello %s, your grade is %c\n", name, grade);
}

bool graduate(int score)
{
    if (score >= 50)
    {
        return true;
    }
    else
    {
        return false;
    }
}