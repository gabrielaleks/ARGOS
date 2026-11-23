// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0029_Time.h"

typedef struct {
    int hh;
    int mm;
    int ss;
} Time;

Time ex_0029_InitTime(int hours, int minutes, int seconds) {
    Time t = {.hh = hours, .mm = minutes, .ss = seconds};
    return t;
}

void convertIntToTime(int number, char* buffer, int size) {
    if (number < 10) {
        snprintf(buffer, size, "0%d", number);
    } else {
        snprintf(buffer, size, "%d", number);
    }
}

void ex_0029_PrintTime(Time time) {
    char hh[20];
    char mm[20];
    char ss[20];

    convertIntToTime(time.hh, hh, sizeof(hh));
    convertIntToTime(time.mm, mm, sizeof(mm));
    convertIntToTime(time.ss, ss, sizeof(ss));

    printf("%s:%s:%s\n", hh, mm, ss);
}

void ex_0029_Time() {
    Time t = ex_0029_InitTime(5, 3, 17);
    ex_0029_PrintTime(t);
}