#include <stdio.h>
#include <stdlib.h>

/*
Write a program that gets two "double numbers":

1. Rectangle Height
2. Rectabgle Width

The program should calculate and print the Area of the given rectangle

formula = Height * Width
*/

int main()
{
    double height, width;
    double area;

    printf("Please provide height of rectangle:\n");
    scanf("%lf", &height); // %lf this time for double.
    printf("Please provide width of rectangle:\n");
    scanf("%lf", &width);

    area = height * width;

    printf("\n");
    printf("The area of the rectangle is:\n");
    printf("%0.2lf\n", area); // 0.2lf limits double to two decimal places.
	return 0;
}