#include <stdio.h>
#include <stdbool.h>

/**
 * EXAMPLE 1: Simple Return (Calculation)
 * This function 'promises' to return an 'int'.
 * Its task is to calculate the area.
 */
int calculateArea(int length, int width)
{
    int area = length * width;

    // 'return' sends the value 'area' back to whoever
    // called this function.
    // Can also return directly like: return length * width;
    return area;
}

/**
 * EXAMPLE 2: if-return (Logic Checking)
 * Fungsi ini 'berjanji' returns 'bool' (true atau false).
 * Ini adalah pola 'Early Return' atau 'Early Exit'.
 */
bool isLegalAge(int age)
{
    // If the age is 17 or older,
    if (age >= 17)
    {
        // ...immediately stop this function
        // and return the value 'true'.
        // The lines after this will NOT be executed.
        return true;
    }

    // This line will ONLY execute if 'if' above 'false'
    // (if the age is below 17).
    return false;
}

/**
 * EXAMPLE 3: if-return (Preventing Errors / Guard Clause)
 * Fungsi ini 'berjanji' returns 'float'.
 * We use 'if' to PREVENT division-by-zero errors.
 */
float divide(float a, float b)
{
    // Ini disebut "Guard Clause" (Guard Clause)
    // We check the error condition early.
    if (b == 0)
    {
        printf("Error: Cannot divide by zero!\n");
        // Kita keluar lebih awal dan returns nilai 'aman'
        return 0.0;
    }

    // This code is guaranteed safe and ONLY runs
    // jika 'if' above 'false'.
    float result = a / b;
    return result;
}

// --- MAIN FUNCTION TO RUN EVERYTHING ---
int main()
{
    // --- Using calculateArea ---
    // We 'capture' the value returned by the function
    // into the 'area' variable.
    int luas = calculateArea(10, 5);
    printf("The area of the rectangle is: %d\n", luas);

    // We can also use it directly
    printf("Another area (7x3) adalah: %d\n", calculateArea(7, 3));

    printf("\n--- Example of if-return ---\n");
    // --- Using isLegalAge ---
    int umurBudi = 20;

    // Nilai 'true' atau 'false' dari isLegalAge
    // langsung dipakai oleh 'if' di main.
    if (isLegalAge(umurBudi)) // isLegalAge(20) akan 'return true'
    {
        printf("Budi (umur %d) boleh membuat KTP.\n", umurBudi);
    }

    int umurAna = 15;
    if (!isLegalAge(umurAna)) // isLegalAge(15) akan 'return false'
    {
        printf("Ana (umur %d) belum boleh membuat KTP.\n", umurAna);
    }

    printf("\n--- Contoh Guard Clause ---\n");
    // --- Using divide ---
    float hasil1 = divide(10, 2); // Ini akan berjalan normal
    printf("Hasil 10 / 2 = %.1f\n", hasil1);

    float hasil2 = divide(10, 0);            // Ini akan memicu 'if' di dalam fungsi
    printf("Hasil 10 / 0 = %.1f\n", hasil2); // Akan mencetak nilai 'aman' (0.0)

    return 0;
}