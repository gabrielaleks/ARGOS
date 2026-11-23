// Author: HE-Arc

// Local includes
#include "ex_0022_Invert.h"

int ex_0022_Invert(int n) {
    if (n < 0) {
        return -1;
    }

    int inverted = 0;

    while (n > 0) {
        int number = n % 10;
        inverted = inverted * 10 + number;

        n = n / 10;
    }

    return inverted;
}