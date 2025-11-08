#include <stdio.h>
#include <stdbool.h>
#include <string.h> // <-- 1. DIPERLUKAN: Untuk fungsi strcspn()

int main()
{
    // Integer
    int age;

    printf("Enter your age : ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are an adult\n");
    }
    else if (age < 18 && age >= 0)
    {
        printf("You are a child\n");
    }
    else
    {
        printf("Error: Invalid age\n");
    }

    // String
    char grade;

    printf("Enter your grade : ");
    scanf(" %c", &grade); // Spasi di depan "%c" sudah benar

    if (grade == 'a')
    {
        printf("You are genius!\n");
    }
    else if (grade == 'b')
    {
        printf("You are slighly genius!\n");
    }
    else
    {
        printf("You are not genius\n");
    }

    // Boolean
    bool isGraduated;
    int tempGraduated; // temporary variable to read integer input

    printf("Are you graduated (1 = true, 0 = false) : ");
    // read as integer first and then convert to bool
    scanf("%d", &tempGraduated);
    isGraduated = tempGraduated;

    if (isGraduated)
    {
        printf("Congratulations!\n");
    }
    else
    {
        printf("Keep trying!\n");
    }

    // "Eat" any remaining newline characters (\n) in the buffer
    // from the previous 'scanf' before using 'fgets'
    getchar();

    char name[50];

    printf("Enter your name : ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    if (name[0] != '\0') // ! =  means not equal
    {
        printf("Hello, %s!\n", name);
    }
    else
    {
        printf("You didn't enter your name!\n");
    }
    return 0;
}