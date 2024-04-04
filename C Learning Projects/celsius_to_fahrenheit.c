#include <stdio.h>
#include <stdlib.h>

/*
Weather Station Challenge

Write a program that gets temperature from user input (double)
And convert from Celsius to Fahrenheit - then print it.

T(F) = T(C) * 1.8 + 32

*/

int main()
{

    double celsius;

    printf("Enter Celsius Degrees to be converted: ");
    scanf("%lf", &celsius);

    // Fahrenheit var
    double fahrenheit = ((double)celsius*1.8)+32;
    printf("The temperature in Fahrenheit is:\n");
    printf("%0.2lf", fahrenheit);

    return 0;
}