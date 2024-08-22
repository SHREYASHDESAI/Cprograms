#include <stdio.h>

// Function declaration for swapping values using call by value
void swapbyvalue(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

// Function declaration for swapping values using call by reference
void swapbyrefer(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10, b = 20;

    // Original values before swapping
    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    // Swapping using call by value
    swapbyvalue(a, b);

    // Values after swapping using call by value (no change)
    printf("After swapping using call by value:\n");
    printf("a = %d, b = %d\n", a, b);

    // Swapping using call by reference
    swapbyrefer(&a, &b);

    // Values after swapping using call by reference
    printf("After swapping using call by reference:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}