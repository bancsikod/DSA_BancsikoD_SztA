//
// Created by David on 02/24/2021.
//

#include <stdio.h>
#include "function2.h"

double osszeg(double *array, int n) {
    double ossz = 0;
    for(int i = 0; i < n; ++i) {
        ossz += array[i];
    }
    return ossz;
}

double szorzat(double *array, int n) {
    double szor = 1;
    for(int i = 0; i < n; ++i) {
        szor *= array[i];
    }
    return szor;
}

double atlag(double *array, int n) {
    double atl = 0;
    atl = osszeg(array,n);
    atl /= n;
    return atl;
}

//feladat4
void fordit(double *array, int n) {
    printf("Tomb elemei forditott sorrendben:\n");
    for (int i = n-1; i >= 0; --i) {
        printf("%.2lf, ", array[i]);
    }
}
