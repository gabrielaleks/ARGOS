// Author: HE-Arc

// Standard includes
#include <math.h>
#include <stdio.h>

// Local includes
#include "ex_0013_SecondOrderEquation.h"

void clearBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

// Function definitions
void ex_0013_SecondOrderEquation(void) {
    double x1;
    int invalid = 1;

    double a, b, c;

    while (invalid) {
        const char* usage_message =
            "Compute solutions of an equation of the form ax^2 + bx + c = 0\n";
        printf("%s", usage_message);

        const char* input_message = "Please enter coefficients a, b, and c: ";
        printf("%s", input_message);

        int result = scanf("%lf %lf %lf", &a, &b, &c);

        if (result == 3) {
            invalid = 0;
        } else if (result == EOF) {
            break;
        }

        clearBuffer();
    }

    if (a == 0 && b == 0 && c == 0) {
        printf("Any real is solution of this equation.\n");
        return;
    }

    if (a == 0 && b == 0) {
        printf("This equation has no solution.\n");
        return;
    }

    if (a == 0) {
        x1 = -c / b;
        printf("The solution of this linear equation is: \n");
        printf("x = %.4lf\n", x1);
        return;
    }

    double delta = pow(b, 2) - (4 * a * c);

    if (delta < 0) {
        printf("This equation has no real solution.\n");
        return;
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("The double real solution of this equation is: \n");
        printf("x = %.4lf\n", x1);
        return;
    } else {
        double x2;

        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("The real solutions of this equation are: \n");
        printf("x1 = %.4lf\n", x1);
        printf("x2 = %.4lf\n", x2);
        return;
    }
}
