//
// Created by David on 02/24/2021.
//

#include "function.h"

int min(int a, int b, int c) {
    if (a < b)
        if (a < c)
            return a;
        else
            return c;
    else if (b < c)
        return b;
    else
        return c;
}

int max(int a, int b, int c) {
    if (a > b)
        if (a > c)
            return a;
        else
            return c;
    else if (b > c)
        return b;
    else
        return c;
}
