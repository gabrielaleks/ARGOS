// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0011_MultiplicationSign.h"

// Function definitions
void ex_0011_MultiplicationSign(void) {
    // TODO: read 2 integers, then print the sign of their product without computing it
    int invalid = 1;
    int a = 0, b = 0;
    while (invalid) {
        printf("Please enter 2 integers: ");
        if (scanf("%d %d", &a, &b) == 2) {
            invalid = 0;
        } else {
            // We have to remove the invalid characters from the input buffer
            // Ex: if you enter abc:
            // 1. scanf() fails because 'a' isn't an integer
            // 2. without the loop below, 'a' remains in the input buffer, looping indefinitely
            // 3. with the loop, getchar() consumes 'a', 'b' and 'c' until it reaches newline
            // 4. we check EOF to handle the case where the input ends before a newline
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {
            }
        }
    }

    if ((a > 0 && b > 0) || (a < 0 && b < 0)) {
        printf("%d * %d > 0\n", a, b);
    } else if ((a > 0 && b < 0) || (a < 0 && b > 0)) {
        printf("%d * %d < 0\n", a, b);
    } else {
        printf("%d * %d = 0\n", a, b);
    }
}
