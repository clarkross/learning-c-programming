#include <stdio.h>
#include <stdlib.h>

/*
Basic calculator with user inputs.

Add num1 & num2 provided by user.
*/

int main()
{
    int num1;
    int num2;

    printf("Enter 1st number to be added: ");
    scanf("%d", &num1);
    printf("Enter 2nd number to be added: ");
    scanf("%d", &num2);

    // defining answer variable
    int answer = num1+num2;
    printf("Added together, you get: %d", answer);

    return 0;
}