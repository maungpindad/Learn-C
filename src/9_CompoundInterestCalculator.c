#include <stdio.h>
#include <math.h>

int main()
{
    double principal, rate, time, number, amount, compound_interest;

    // Meminta input dari pengguna
    printf("Masukkan jumlah pokok (principal): ");
    scanf("%lf", &principal);

    printf("Masukkan suku bunga tahunan (dalam persen): ");
    scanf("%lf", &rate);

    printf("Masukkan waktu (dalam tahun): ");
    scanf("%lf", &time);

    printf("Masukkan jumlah kali bunga dimajemukkan per tahun: ");
    scanf("%lf", &number);

    // Mengubah suku bunga dari persen ke desimal
    rate = rate / 100;

    // Menghitung jumlah total dengan bunga majemuk
    // Rumus: A = P(1 + r/n)^(nt)
    amount = principal * pow((1 + rate / number), number * time);

    // Menghitung bunga majemuk
    compound_interest = amount - principal;

    // Menampilkan hasil
    printf("\nJumlah total setelah %.2f tahun adalah: %.2lf\n", time, amount);
    printf("Bunga majemuk adalah: %.2lf\n", compound_interest);

    return 0;
}