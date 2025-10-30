#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Definisi M_PI ditambahkan untuk portabilitas
// Ini mendefinisikan M_PI hanya jika belum didefinisikan oleh <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main()
{
    // Square root / akar kuadrat
    printf("===== Square Root ======\n");

    double number1;
    printf("Enter the square root number : ");
    scanf("%lf", &number1);

    double result1 = sqrt(number1);
    printf("The Square root of %.2lf is : %.2lf\n", number1, result1);

    // Power / pangkat
    printf("===== Power =====\n");

    double base;
    printf("Enter the base number : ");
    scanf("%lf", &base);

    double exponent;
    printf("Enter the exponent number : ");
    scanf("%lf", &exponent);

    double result2 = pow(base, exponent);
    printf("The %.2lf to the power of %.2lf is : %.2lf\n", base, exponent, result2);

    // Rounding / pembulatan
    printf("===== Rounding =====\n");

    double number2;
    printf("Enter the rounding number : ");
    scanf("%lf", &number2);

    double result3 = round(number2);
    printf("The rounding of %.2lf is : %.2lf\n", number2, result3);

    // Ceiling / pembulatan ke atas
    printf("===== Ceiling =====\n");

    double number3;
    printf("Enter the ceiling number : ");
    scanf("%lf", &number3);

    double result4 = ceil(number3);
    printf("The ceiling of %.2lf is : %.2lf\n", number3, result4);

    // Floor / pembulatan ke bawah
    printf("===== Floor =====\n");

    double number4;
    printf("Enter the floor number : ");
    scanf("%lf", &number4);

    double result5 = floor(number4);
    printf("The floor of %.2lf is : %.2lf\n", number4, result5);

    // Absolute for floating point / nilai mutlak
    printf("===== Absolute =====\n");

    double number5;
    printf("Enter the absolute floating point number : ");
    scanf("%lf", &number5);

    double result6 = fabs(number5);
    printf("The absolute of %.2lf is : %.2lf\n", number5, result6);

    // Absolute for integer / nilai mutlak untuk integer
    printf("===== Absolute for Integer =====\n");

    int number6;
    printf("Enter the absolute integer number : ");
    scanf("%d", &number6);

    int result7 = abs(number6); // <-- Fungsi ini ada di <stdlib.h>
    printf("The absolute of %d is : %d\n", number6, result7);

    // Logarithm / logaritma
    printf("===== Logarithm =====\n");

    double number7;
    printf("Enter the logarithm number : ");
    scanf("%lf", &number7);

    double result8 = log(number7);
    printf("The natural logarithm of %.2lf is : %.2lf\n", number7, result8);

    // Trigonometric Functions / Fungsi Trigonometri
    printf("===== Trigonometric Functions =====\n");

    double angle;
    printf("Enter the angle in degrees : ");
    scanf("%lf", &angle);

    double radians = angle * (M_PI / 180.0);
    double sine = sin(radians);
    double cosine = cos(radians);
    double tangent = tan(radians);

    printf("The sine of %.2lf degrees is : %.2lf\n", angle, sine);
    printf("The cosine of %.2lf degrees is : %.2lf\n", angle, cosine);
    printf("The tangent of %.2lf degrees is : %.2lf\n", angle, tangent);

    return 0;
}