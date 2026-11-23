// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0028_DotProduct.h"

int ex_0028_DotProduct(int u[], int v[], int n) {
    int result = 0;

    for (int i = 0; i < n; i++) {
        result += u[i] * v[i];
    }

    return result;
}