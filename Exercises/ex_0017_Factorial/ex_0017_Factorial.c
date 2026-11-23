// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0017_Factorial.h"

void clearBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int isValid(int number) {
    if (number >= 0) {
        return 1;
    }

    return 0;
}

// Function definitions
void ex_0017_Factorial(void) {
    const char* input_message = "Please enter a non-negative integer N: ";

    int invalid = 1;
    int N = 0;

    while (invalid) {
        printf("%s", input_message);

        int scanned = scanf(" %d", &N);

        if (scanned == 1 && isValid(N)) {
            invalid = 0;
        } else if (scanned == EOF) {
            break;
        }

        clearBuffer();
    }

    long result = 1;
    for (int i = N; i > 0; i--) {
        result *= i;
    }

    printf("%d! = %ld\n", N, result);
}
