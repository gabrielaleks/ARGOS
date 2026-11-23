// Author: HE-Arc

// Standard includes
#include <stdbool.h>

// Local includes
#include "ex_0023_CompareArray.h"

bool ex_0023_CompareArray(int array1[], int array2[], int nb_vals) {
    bool result = true;

    for (int i = 0; i < nb_vals; i++) {
        if (array1[i] != array2[i]) {
            result = false;
        }
    }

    return result;
}