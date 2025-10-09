#include <stdio.h>

int main()
{
    printf("===== Input =====\n");

    char name[50];
    printf("Enter Your name : ");
    fgets(name, sizeof(name), stdin);

    char class;
    printf("Enter Yout class : ");
    scanf(" %c", &class);

    int id;
    printf("Enter Your ID/NIM : ");
    scanf("%d", &id);

    printf("===== Output =====\n");

    printf("Your name is : %s", name);
    printf("Your class is : %c\n", class);
    printf("Your ID/NIM is : %d\n", id);
}