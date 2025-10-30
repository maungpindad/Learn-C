#include <stdio.h>

int main()
{
    char grade;

    printf("Enter your grade : ");

    // The easiest way to read 1 character is to use a space in front of "%c" // Cara termudah membaca 1 char, spasi di depan "%c"
    // It's important to "eat" the newline character (Enter) // sangat penting untuk "memakan" karakter newline (Enter)
    scanf(" %c", &grade);

    if (grade == 'a')
    {
        printf("You are genius!");
    }
    else if (grade == 'b')
    {
        printf("You are slighly genius!");
    }
    else
    {
        printf("You are not graduated");
    }

    return 0;
}