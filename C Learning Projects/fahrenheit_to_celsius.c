#include <stdio.h>
#include <stdlib.h>

/*
Write a program that gets from the user a temperature
(double) in Fahrenheit Degrees.

The program should calculate and convert the temperature from
Fahrenheit Degrees to Celsius Degrees and print it.

T(C) = (T(F) - 32)/1.8
*/


int main()
{
    double fahrenheit;

    printf("Enter Fahrenheit Degrees to be converted: ");
    scanf("%lf", &fahrenheit);

    // celsius var
    double celsius = ((double)fahrenheit-32)/1.8;
    printf("The temperature in Celsius is:\n");
    printf("%0.2lf", celsius);

    return 0;
}