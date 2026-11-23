// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0024_PrintArray.h"

void ex_0024_PrintArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        if (i < size - 1) {
            printf("%d ", array[i]);
        } else {
            printf("%d", array[i]);
        }
    }
}