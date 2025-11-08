#include <stdio.h>

int main()
{
    double IPK, PenghasilanOrangTua;
    int Semester;

    printf("===== Program Pemerika Beasiswa =====\n");
    printf("Masukkan IPK Anda : ");
    scanf("%lf", &IPK);

    if (IPK >= 3.5)
    {
        printf("Masukkan Penghasilan Orang Tua Anda (Dalam Juta) : ");
        scanf("%lf", &PenghasilanOrangTua);

        if (PenghasilanOrangTua <= 5)
        {
            printf("Semester Berapa Anda Saat Ini : ");
            scanf("%d", &Semester);

            if (Semester >= 3)
            {
                printf("!!! Selamat Anda lolos Beasiswa !!!\n");
            }
            else
            {
                printf("Maaf, Anda tidak lolos. Syarat minimal adalah semester 3.\n");
            }
        }
        else
        {
            printf("Maaf, Anda tidak lolos. Penghasilan orang tua melebihi batas (Maks 5 Juta).\n");
        }
    }
    else
    {
        printf("Maaf, Anda tidak lolos. IPK Anda (%.2f) belum memenuhi syarat (Min 3.5).\n", IPK);
    }

    return 0;
}