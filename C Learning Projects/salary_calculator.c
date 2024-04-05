#include <stdio.h>
#include <stdlib.h>

/*
Salary calculator

Write a program that receives:

1. Salary (per hour)
2. Total hours worked (in a month)

Should calculate and print the total monthly
salary of the employee.

*/

int main()
{
    double payperhour;
    double monthlyhours;

    printf("Pay per hour amount: ");
    scanf("%lf", &payperhour);
    printf("Hours worked this month: ");
    scanf("%lf", &monthlyhours);

    float salary = payperhour*monthlyhours;

    printf("Salary is %0.2lf", salary);

    return 0;
}