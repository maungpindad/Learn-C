#include <stdio.h>
#include <string.h>

int main()
{
    printf("=====================================\n");
    printf("     👋 Welcome to My Program! \n");
    printf("=====================================\n\n");

    char name[50];
    printf("Enter your name : ");
    fgets(name, sizeof(name), stdin);

    // delete new line from fgets
    name[strcspn(name, "\n")] = '\0';

    int age;
    printf("Enter your age  : ");
    scanf("%d", &age);

    printf("\n=====================================\n");
    printf("          🎉 RESULT 🎉 \n");
    printf("=====================================\n");
    printf("Hello, %s!\n", name);
    printf("You are %d years old.\n", age);
    printf("=====================================\n");

    return 0;
}
