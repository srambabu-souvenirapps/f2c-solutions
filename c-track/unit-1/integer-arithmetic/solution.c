#include <stdio.h>

int main() {
    int a;
    int b;
    int sum;
    int diff;
    int prod;
    int quot;
    int rem;

    a = 15;
    b = 4;
    sum = a + b;
    diff = a - b;
    prod = a * b;
    quot = a / b;
    rem = a % b;
    printf("Sum=%d, Diff=%d, Prod=%d, Quot=%d, Rem=%d\n", sum, diff, prod, quot, rem);
    return 0;
}

