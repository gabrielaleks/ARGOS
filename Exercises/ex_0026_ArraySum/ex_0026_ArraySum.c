// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0026_ArraySum.h"

void clearBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int isValid(int nbEntries) {
    if (nbEntries < 0 || nbEntries > 50) {
        return 0;
    }

    return 1;
}

void scanInt(int* value, char* message, int (*validator)(int)) {
    int invalid = 1;

    while (invalid) {
        if (message) {
            printf("%s", message);
        }

        int scanned = scanf(" %d", value);

        if (scanned == EOF) {
            break;
        }

        if (scanned != 1 || (validator && !validator(*value))) {
            clearBuffer();
            continue;
        }

        clearBuffer();
        invalid = 0;
    }
}

void ex_0026_ArraySum(void) {
    int array[50];

    int nbEntries = 0;
    char* nbValuesMessage = "Nb values (max.50): ";

    scanInt(&nbEntries, nbValuesMessage, isValid);

    int sum = 0;
    for (int i = 0; i < nbEntries; i++) {
        int value = 0;

        char valueMessage[20];
        snprintf(valueMessage, sizeof(valueMessage), "Value %d? ", i);

        scanInt(&value, valueMessage, NULL);
        array[i] = value;

        sum += value;
    }

    printf("array:\n");

    for (int i = 0; i < nbEntries; i++) {
        if (i != nbEntries - 1) {
            printf("%d ", array[i]);
        } else {
            printf("%d", array[i]);
        }
    }

    printf("\nTotal sum: %d\n", sum);
}