// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0019_MultiplicationTable.h"

void clearBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int isValid(int number, int minValue, int maxValue) {
    if (number < minValue || number > maxValue) {
        return 0;
    }

    return 1;
}

int ex_0019_Read(int minValue, int maxValue) {
    int invalid = 1;
    int number;

    while (invalid) {
        printf("Please enter the multiplication table (in [%d..%d]): ", minValue, maxValue);

        int scanned = scanf(" %d", &number);

        if (scanned == 1 && isValid(number, minValue, maxValue)) {
            invalid = 0;
        } else if (scanned == EOF) {
            break;
        }

        clearBuffer();
    }

    return number;
}

void ex_0019_MultiplicationTable(int number) {
    printf("\nMULTIPLICATION TABLE FOR %d\n", number);

    for (int i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", number, i, number * i);
    }
}