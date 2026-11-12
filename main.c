#include <stdio.h>

int main(void) {
    int a, b;

    printf("Welcom to the Calculator!\n");
    // SOLUTION (Issue 4: typo in the welcome message)
    // Problem:  "Welcom" is missing the final "e".
    // Fix:      printf("Welcome to the Calculator!\n");
    // Why:      printf prints the text exactly as written inside the quotes.

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("The sum is: %d\n", a - b);
    // SOLUTION (Issue 5: the "sum" is wrong, it subtracts)
    // Problem:  a - b subtracts the numbers, but a sum needs addition.
    // Fix:      printf("The sum is: %d\n", a + b);
    // Why:      "+" adds the two numbers. Example: 5 and 3 gives 8, not 2.

    // SOLUTION (Issue 6: add a goodbye message)
    // Problem:  The program ends without saying goodbye.
    // Fix:      Add this line just before "return 0;":
    //           printf("Thanks for using the calculator!\n");
    // Why:      Each printf call prints one more line of output.
    return 0;
}