// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0027_Array2DSum.h"

void clearBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int isValidArraySize(int number) {
    if (number < 0 || number > 50) {
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

void ex_0027_Array2DSum() {
    int rows = 0;
    char* rowsMessage = "Nb lines (max.50): ";
    scanInt(&rows, rowsMessage, isValidArraySize);

    int columns = 0;
    char* columnsMessage = "Nb columns (max.50): ";
    scanInt(&columns, columnsMessage, isValidArraySize);

    int array[rows][columns];
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            int arrayValue;
            char arrayMessage[50];
            snprintf(arrayMessage, sizeof(arrayMessage), "array[%d][%d]: ", i, j);

            scanInt(&arrayValue, arrayMessage, NULL);

            array[i][j] = arrayValue;

            sum += arrayValue;
        }
    }

    printf("Total sum: %d\n", sum);
}