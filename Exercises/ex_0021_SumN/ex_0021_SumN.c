// Author: HE-Arc

// Local includes
#include "ex_0021_SumN.h"

int ex_0021_SumN(int a, int b) {
    int superiorLimit = 0, inferiorLimit = 0;

    if (a > b) {
        superiorLimit = a;
        inferiorLimit = b;
    } else {
        superiorLimit = b;
        inferiorLimit = a;
    }

    int result = 0;

    for (int i = inferiorLimit; i <= superiorLimit; i++) {
        result += i;
    }

    return result;
}
