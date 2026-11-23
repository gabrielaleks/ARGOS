// Author: HE-Arc

// Standard includes
#include <stdbool.h>
#include <stdio.h>

// Local includes
#include "ex_0018_Squares.h"

int ex_0018_Square(int value) {
    return value * value;
}

bool ex_0018_Squares(int value) {
    if (value < 1 || value > 1000) {
        return false;
    }

    for (int i = 1; i <= value; i++) {
        printf("%d ", i * i);
    }

    printf("\n");
    return true;
}