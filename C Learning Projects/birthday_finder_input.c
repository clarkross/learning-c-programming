#include <stdio.h>
#include <stdlib.h>

/*
Write a program that gets an input from user.

1. current year
2. your age

The program should calculate and print the year you were born.

Note, this doesn't account for month offset- so it may be off.
*/


int main()
{
    // variables
    int year;
    int age;

    // program
    printf("Please enter the current year:\n");
    scanf("%d", &year);
    printf("Please enter your age:\n");
    scanf("%d", &age);
    // could include the cal as extra variable.
    printf("\n")
    printf("You were born in %d.\n", (year-age));


    return 0;
}