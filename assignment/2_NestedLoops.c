#include <stdio.h>

int main()
{
    printf("===== Print Triangle Program =====\n");

    int height;
    printf("Enter how much height triangle do you want : ");
    scanf("%d", &height);

    for (int counter = 0; counter < height; counter++)
    {
        for (int i = 0; i <= counter; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}