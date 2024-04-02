#include <stdio.h>
#include <stdlib.h>

/*
Challenge:
Write a program that will print on the screen the
results of 5 mathematical operations:
Addition (+), Substraction (-), Multiplication (*), Division (/), & Remainder (%)
*/

int main()
{
    // addition
    printf("%d + %d = %d\n", 5, 5, 5+5);
    // subtraction
    printf("%d - %d = %d\n", 9, 2, 9+2);
    // multiplication
    printf("%d * %d = %d\n", 2, 2, 4*2);
    // division
    printf("%d / %d = %d\n", 6, 2, 6/2);
    // remainder
    printf("%d %% %d = %.1f\n", 7, 2, 3.5);
    return 0;
}