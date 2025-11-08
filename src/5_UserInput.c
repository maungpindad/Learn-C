// User input functions: scanf(), fgets(), getchar()

#include <stdio.h>
#include <string.h> // for strcspn()

int main()
{
    printf("=====================================\n");
    printf("     👋 Welcome to the Input Lesson! \n");
    printf("=====================================\n\n");

    // -----------------------------------------------------------------
    // LESSON 1: scanf() followed by fgets()
    // THIS IS THE MOST COMMON BUG SCENARIO
    // -----------------------------------------------------------------
    printf("### LESSON 1: scanf() -> fgets() ###\n");

    int age;
    char name[50];

    printf("Enter your age : ");
    scanf("%d", &age);

    // *** THE PROBLEM IS HERE ***
    // When you type your age (e.g., "25") and press ENTER,
    // the input buffer contains: "25\n"
    // scanf("%d") takes "25", but LEAVES a "\n" (newline) in the buffer.

    // *** SOLUTION: getchar() ***
    // We must manually "discard" that leftover '\n'.
    // The getchar() function below will read and discard that one character.
    // Try deleting (commenting out) the "getchar();" line below
    // and see the program "skip" the name input.

    getchar(); // Consumes the leftover '\n' from the scanf above

    printf("Enter your full name : ");
    // Now, because the buffer is clean, fgets() will wait for new input.
    fgets(name, sizeof(name), stdin);
    // Cleans the '\n' added by fgets
    name[strcspn(name, "\n")] = '\0';

    printf("\n--- Lesson 1 Result ---\n");
    printf("Hello, %s!\n", name);
    printf("You are %d years old.\n", age);
    printf("=====================================\n\n");

    // -----------------------------------------------------------------
    // LESSON 2: scanf() followed by scanf("%c")
    // -----------------------------------------------------------------
    printf("### LESSON 2: scanf() -> scanf(\"%%c\") ###\n");

    int choice;
    char confirmation;

    printf("Enter your choice (number 1-5): ");
    scanf("%d", &choice); // Again, this leaves a '\n' in the buffer

    // *** PROBLEM ***
    // If we use scanf("%c", ...), it will immediately read the '\n'

    // *** SOLUTION: Space before %c ***
    // The space in " %c" tells scanf to "ignore all
    // whitespace (spaces, tabs, \n) BEFORE reading a character."

    printf("Confirm your choice (y/n): ");
    scanf(" %c", &confirmation); // Note the IMPORTANT space in " %c"

    printf("\n--- Lesson 2 Result ---\n");
    printf("Your choice: %d\n", choice);
    printf("Confirmation: %c\n", confirmation);
    printf("=====================================\n\n");

    // -----------------------------------------------------------------
    // LESSON 3: scanf() followed by "Smart" scanf()
    // -----------------------------------------------------------------
    printf("### LESSON 3: scanf() -> scanf(\"%%f\") ###\n");

    float weight;
    float height;

    printf("Enter your weight (kg): ");
    scanf("%f", &weight); // This also leaves a '\n'

    // *** NO PROBLEM ***
    // scanf() for %f, %d, %s, %lf are "smart".
    // They automatically ignore whitespace (including '\n')
    // at the beginning. So, we don't need to do anything.

    printf("Enter your height (meters): ");
    scanf("%f", &height); // Works normally without any tricks

    printf("\n--- Lesson 3 Result ---\n");
    printf("Weight: %.1f kg\n", weight);
    printf("Height: %.2f m\n", height);
    printf("=====================================\n");

    printf("\n🎉 Lesson Complete! 🎉\n");

    return 0;
}