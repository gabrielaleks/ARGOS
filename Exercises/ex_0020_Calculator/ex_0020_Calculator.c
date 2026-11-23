// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0020_Calculator.h"

double ex_0020_Calculator(double op1, double op2, char symbol) {
    double result;

    switch (symbol) {
        case '+':
            result = op1 + op2;
            break;
        case '-':
            result = op1 - op2;
            break;
        case '*':
            result = op1 * op2;
            break;
        case '/':
            if (op2 == 0) {
                result = 0;
            } else {
                result = op1 / op2;
            }

            break;
        default:
            result = 0;
            break;
    }

    return result;
}
