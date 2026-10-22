// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0009_Circle.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Function definitions
void ex_0009_Circle(void) {
    // TODO: read the radius with scanf, then print pi and the circle surface
    printf("Circle radius: ");
    float r = 0;
    scanf("%f", &r);

    if (r < 0) {
        printf("\nError: 'r' must be >= 0\n");
    }

    printf("pi = %lf\n", M_PI);

    float surface = M_PI * r * r;
    printf("Circle surface = %.2lf\n", surface);
}
