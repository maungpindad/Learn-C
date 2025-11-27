#include <stdio.h>
#include <unistd.h>

int main()
{
    // For Loops is used to repeat a block of code a specific number of times.
    // There are 3 parts in for loop:
    // 1. Initialization: This part is executed once at the beginning of the loop.
    // 2. Condition: This part is checked before each iteration. If it's true, the loop continues; if false, the loop ends.
    // 3. Increment/Decrement: This part is executed after each iteration to update the loop control variable.

    printf("===== For Loops Example =====\n");
    for (int x = 0; x < 15; x++) // Part 1: initialization (int x = 0), part 2: condition (x < 15), part 3: increment (x++)
    {
        sleep(1);
        printf("%d\n", x);
    }
    return 0;
}