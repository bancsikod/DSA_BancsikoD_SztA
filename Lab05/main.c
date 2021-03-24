#include <stdio.h>
#include "function_stack.h"

int main() {
    STACK *myStack;
    myStack = create(10);
    int n,x;
    do{
        printf("\n");
        printf("Lehetseges muveletek:");
        //printf("\nMuvelet 0: Create");
        printf("\nUres-e a verem?(1): Empty?");
        printf("\nTele van-e a verem?(2): Full?");
        printf("\nElem hozzaadas(3): Push");
        printf("\nElem kivetele(4): Pop");
        printf("\nLegfelso elem(5): Top");
        printf("\nA verem teljes kiuritese(6):");
        printf("\nKilepes(7)");
        printf("\n");
        scanf("%i", &n);
        switch (n){
            case(1) : if (isEmpty(myStack)) printf("Ures"); else printf("Nem ures"); break;
            case(2) : if (isFull(myStack)) printf("Tele"); else printf("Nincs tele"); break;
            case(3) : printf("Hozza adando elem: "); scanf("%i", &x); push(myStack, x); break;
            case(4) : if (!isEmpty(myStack)) printf("Kivett elem: %i",pop(myStack)); else printf("Nincs elem.");  break;
            case(5) : printf("Legfelso elem: %i",top(myStack));  break;
            case(6) : while (!isEmpty(myStack)) {printf("%i ", pop(myStack));} break;
        }
    }
    while (n!=7);
    return 0;
}
