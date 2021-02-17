// Írj egy egyszerű programot (csak a main.c fájlt használd), amely kiszámolja két szám
//összegét. Két szám összegének meghatározásához használj függvényt (írd meg a
//függvény deklarációját és definícióját is). A függvény térítse vissza a paraméterként
//megadott két egész szám összegét.
#include <stdio.h>

int sum(int , int );

int main() {
    int a,b,aplusb;
    printf("add meg a szamokat:");
    scanf("%i%i", &a, &b);
    aplusb = sum(a,b);
    printf("a ket szam osszege = %i", aplusb);
    return 0;
}

int sum(int a, int b) {
    int s;
    s = a + b;
    return s;
}