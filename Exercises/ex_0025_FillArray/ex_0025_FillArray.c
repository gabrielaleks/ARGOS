// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0025_FillArray.h"

void clearBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int ex_0025_FillArray(int array[], int max_capacity) {
    int valuesEntered = 0;

    if (max_capacity <= 0) {
        return 0;
    }

    for (int i = 0; i < max_capacity; i++) {
        int number;
        int scanned = scanf(" %d", &number);

        if (scanned == EOF) {
            break;
        }

        if (scanned != 1) {
            clearBuffer();
            i--;
            continue;
        }

        clearBuffer();

        if (number < 0) {
            break;
        }

        array[i] = number;
        valuesEntered++;
    }

    return valuesEntered;
}