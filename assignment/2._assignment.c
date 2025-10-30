#include <stdio.h>

int main()
{
    int baris, kolom;

    for (baris = 1; baris <= 10; baris++)
    {
        for (kolom = 1; kolom <= 10; kolom++)
        {
            if (baris == 1 || baris == 10 || kolom == 1 || kolom == 10)
            {
                printf("* ");
            }
            else if (baris == 2 || baris == 9 || kolom == 2 || kolom == 9)
            {
                printf("+ ");
            }
            else if (baris == 3 || baris == 8 || kolom == 3 || kolom == 8)
            {
                printf("# ");
            }
            else
            {
                printf("@ ");
            }
        }
        printf("\n");
    }

    return 0;
}
