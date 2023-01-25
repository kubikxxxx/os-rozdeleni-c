
#include <math.h>
#include <stdio.h>
#define _USE_MATH_DEFINES
#include "vstup.h"
int main() {
    int vysledek;
    vysledek=prvoc();
    if (vysledek==0){
        printf("neni prvocislo\n");
    }
    else {
        printf("je prvocislo\n");
    }
    return 0;
}