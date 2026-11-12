#include <stdio.h>

int main(void) {
    int a, b;

    printf("Welcome to the Calculator!\n");

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("The sum is: %d\n", a + b);
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