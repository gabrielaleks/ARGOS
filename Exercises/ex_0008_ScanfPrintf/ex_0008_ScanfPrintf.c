// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0008_ScanfPrintf.h"

// Function definitions
void ex_0008_ScanfPrintf(void) {
    // TODO: read 3 letters with scanf, then print their ASCII codes
    printf("\n\nPlease enter 3 letters:\n");
    char letter1, letter2, letter3;
    scanf(" %c %c %c", &letter1, &letter2, &letter3);

    printf("\nHere are the corresponding ASCII codes:\n");
    printf("%c--------->%d\n", letter1, letter1);
    printf("%c--------->%d\n", letter2, letter2);
    printf("%c--------->%d\n", letter3, letter3);
}
