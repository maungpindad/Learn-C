#include <stdio.h>

int main()
{
    printf("===== Switch Statements in C =====\n");

    char grade;
    printf("Enter your grade (A,B,C,D,E) : ");
    scanf("%c", &grade);
    switch (grade)
    {
    case 'A':
        printf("Amatir");
        break;
    case 'B':
        printf("Belum Engineer");
        break;
    case 'C':
        printf("Calon Engineer");
        break;
    case 'D':
        printf("Dikit Lagi Engineer");
        break;
    case 'E':
        printf("Engineer");
        break;

    default:
        printf("Grade tidak valid");
        break;
    }

    return 0;
}