// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0015_DaysInMonth.h"

void clearBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

// Function definitions
void ex_0015_DaysInMonth(void) {
    const char* input_message =
        "Please enter the number of the month (january=1, ... , december=12): ";

    int month = 0;
    int invalid = 1;

    while (invalid) {
        printf("%s", input_message);

        int scanned = scanf(" %d", &month);

        if (scanned == 1) {
            invalid = 0;
        } else if (scanned == EOF) {
            break;
        }

        clearBuffer();

        switch (month) {
            case 1:
                printf("Month %d has %d days.\n", month, 31);
                break;
            case 2:
                printf("Month %d has %d days.\n", month, 28);
                break;
            case 3:
                printf("Month %d has %d days.\n", month, 31);
                break;
            case 4:
                printf("Month %d has %d days.\n", month, 30);
                break;
            case 5:
                printf("Month %d has %d days.\n", month, 31);
                break;
            case 6:
                printf("Month %d has %d days.\n", month, 30);
                break;
            case 7:
                printf("Month %d has %d days.\n", month, 31);
                break;
            case 8:
                printf("Month %d has %d days.\n", month, 31);
                break;
            case 9:
                printf("Month %d has %d days.\n", month, 30);
                break;
            case 10:
                printf("Month %d has %d days.\n", month, 31);
                break;
            case 11:
                printf("Month %d has %d days.\n", month, 30);
                break;
            case 12:
                printf("Month %d has %d days.\n", month, 31);
                break;
            default:
                invalid = 1;
                break;
        }
    }
}
