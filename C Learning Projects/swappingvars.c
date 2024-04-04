#include <stdio.h>
#include <stdlib.h>

/*
Your task is to implement the swap functionality between 2 Floating Point variables holding 2 floating point values.
Print the values of both variables BEFORE and AFTER the swapping functionality.
Note: Try solving this exercise without going back to the previous solution.

That's how you practice.
*/

int main()
{
    double a = 10;
    double b = 20;
    double temp;

    printf("Before swapped results:\n");
    printf("a = %lf\n", a);
    printf("b = %lf\n", b);
    printf("---------\n");

    // assigning temp var
    temp = a;
    a = b;
    b = temp;

    // printing result
    printf("Swapped results:\n");
    printf("a = %lf\n", a);
    printf("b = %lf\n", b);

    return 0;
}