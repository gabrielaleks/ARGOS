// Standard includes
#include "ex_0030_Complex.h"

#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
} Complex;

int restOfLineIsBlank(void) {
    int c;

    while ((c = getchar()) == ' ' || c == '\t') {
    }

    if (c == '\n' || c == EOF) {
        return 1;
    }

    while ((c = getchar()) != '\n' && c != EOF) {
    }

    return 0;
}

Complex scanComplex(double* real, double* imaginary, char* message) {
    int invalid = 1;

    while (invalid) {
        if (message) {
            printf("%s", message);
        }

        int consumed = 0;
        int scanned = scanf(" (%lf ,%lf )%n", real, imaginary, &consumed);

        if (scanned == EOF) {
            break;
        }

        int blank = restOfLineIsBlank();

        if (scanned == 2 && consumed > 0 && blank) {
            invalid = 0;
        }
    }

    Complex c = {.real = *real, .imaginary = *imaginary};
    return c;
}

Complex ex_0030_InputComplex() {
    double real, imaginary;
    char* message = "Please enter a complex number (r,i): ";
    scanComplex(&real, &imaginary, message);

    Complex c = {.real = real, .imaginary = imaginary};
    return c;
}

Complex ex_0030_SumComplex(Complex c1, Complex c2) {
    Complex c3;

    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;

    return c3;
}

Complex ex_0030_DiffComplex(Complex c1, Complex c2) {
    Complex c3;

    c3.real = c1.real - c2.real;
    c3.imaginary = c1.imaginary - c2.imaginary;

    return c3;
}

void ex_0030_PrintComplex(Complex c) {
    printf("%.2lf + %.2lfi\n", c.real, c.imaginary);
}

void ex_0030_Complex() {
    Complex c1 = ex_0030_InputComplex();
    Complex c2 = ex_0030_InputComplex();

    printf("\n");

    Complex sum = ex_0030_SumComplex(c1, c2);
    printf("Sum = ");
    ex_0030_PrintComplex(sum);

    printf("\n");

    printf("Diff = ");
    Complex diff = ex_0030_DiffComplex(c1, c2);
    ex_0030_PrintComplex(diff);
}