#include <stdio.h>
#include <string.h>

void HappyBirthday(char name[], int age)
{
    printf("Happy Birthday to You!\n");
    printf("Happy Birthday dear %s\n", name);
    printf("You are now %d years old!\n", age);
}

int main()
{
    char name[50];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    HappyBirthday(name, age);

    // Can also call the function with hardcoded values
    HappyBirthday("Budi", 20);

    return 0;
}