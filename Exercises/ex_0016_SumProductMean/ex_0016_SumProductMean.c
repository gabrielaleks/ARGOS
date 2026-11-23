// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0016_SumProductMean.h"

void clearBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int isValid(int valuesToRead) {
    if (valuesToRead > 0 && valuesToRead < 16) {
        return 1;
    }

    return 0;
}

// Function definitions
void ex_0016_SumProductMean(void) {
    const char* input_message = "Number of values to read: ";

    int invalid = 1;
    int valuesToRead = 0;

    while (invalid) {
        printf("%s", input_message);

        int scanned = scanf(" %d", &valuesToRead);

        if (scanned == 1 && isValid(valuesToRead)) {
            invalid = 0;
        } else if (scanned == EOF) {
            break;
        }

        clearBuffer();
    }

    int sum = 0;
    int product = 1;
    float mean = 0;

    for (int i = 1; i <= valuesToRead; i++) {
        int invalid = 1;
        int number = 0;

        while (invalid) {
            printf("%d. number: ", i);

            int scanned = scanf(" %d", &number);

            if (scanned == 1) {
                invalid = 0;

                sum += number;
                product *= number;
            } else if (scanned == EOF) {
                break;
            }

            clearBuffer();
        }
    }

    mean = (float)sum / valuesToRead;

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);
    printf("Mean = %.4f\n", mean);
}
