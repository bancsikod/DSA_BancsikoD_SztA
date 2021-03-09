#include <stdio.h>
#include <stdlib.h>
#include "cmake-build-debug/function.h"
#include "cmake-build-debug/function2.h"
#include "cmake-build-debug/function3.h"


int main() {
    //feladat1
    printf("min = %i\n", min(63,21,75));
    printf("max = %i\n", max(63,21,75));

    //feladat2
    double *a;
    int n;
    scanf("%d", &n);
    a = (double*)malloc(n*sizeof(double));
    for(int i = 0; i < n; ++i) {
        scanf("%lf", &a[i]);
    }
    //double ossz;
    //ossz = osszeg(a,n);
    //printf("*%.2lf*", ossz);
    printf("osszeg = %.2lf\n", osszeg(a,n));
    printf("szorzat = %.2lf\n", szorzat(a,n));
    printf("atlag = %.2lf\n", atlag(a,n));

    //feladat3
    int *egeszTomb;
    int m;
    scanf("%d", &m);
    egeszTomb = (int*)malloc(m*sizeof(int));
    for(int i = 0; i < m; ++i) {
        scanf("%d", &egeszTomb[i]);
    }

    printf("paros elemek szama = %d\n", paros(egeszTomb,m));
    printf("paratlan elemek szama = %d\n", paratlan(egeszTomb,m));
    printf("pozitiv elemek szama = %d\n", pozitiv(egeszTomb,m));
    printf("negativ elemek szama = %d\n", negativ(egeszTomb,m));

    //feladat4
    fordit(a,n);

    return 0;
}
