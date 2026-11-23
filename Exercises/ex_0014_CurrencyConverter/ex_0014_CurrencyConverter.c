// Author: HE-Arc

// Standard includes
#include <stdio.h>

void clearBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

void scan(float* amount, char* currency) {
    const char* input_message =
        "USAGE: non-negative value [W | $ | Y | P]\n"
        "Won = W  Dollar = $  Yen = Y  Pound = P\n"
        "Please enter the amount to convert: ";

    int invalid = 1;
    while (invalid) {
        printf("%s", input_message);

        int scanned = scanf(" %g %c", amount, currency);

        if (scanned == 2) {
            invalid = 0;
        } else if (scanned == EOF) {
            break;
        } else {
            const char* error_message = "The input format is not correct!!\n";
            printf("%s", error_message);
        }

        clearBuffer();
    }
}

int ex_0014_CurrencyConverter(void) {
    const double WON2CHF = 0.00070;
    const double USD2CHF = 0.99;
    const double YEN2CHF = 0.0067;
    const double POUND2CHF = 1.13;

    float amount = 0;
    char currency = '-';

    int invalidCurrency = 1;
    int invalidAmount = 1;

    while (invalidCurrency || invalidAmount) {
        scan(&amount, &currency);

        if (currency == 'W' || currency == '$' || currency == 'Y' || currency == 'P') {
            invalidCurrency = 0;
        } else {
            const char* unsupported_currency_message = "Unsupported currency!!\n";
            printf("%s", unsupported_currency_message);
            invalidCurrency = 1;
        }

        if (amount >= 0) {
            invalidAmount = 0;
        } else {
            const char* negative_amount_message = "The input amount is negative!!\n";
            printf("%s", negative_amount_message);
            invalidAmount = 1;
        }
    }

    float result = 0.0;

    switch (currency) {
        case 'W':
            result = amount * WON2CHF;
            break;
        case '$':
            result = amount * USD2CHF;
            break;
        case 'Y':
            result = amount * YEN2CHF;
            break;
        case 'P':
            result = amount * POUND2CHF;
            break;
    }

    printf("Swiss francs: %.3f\n", result);
}
