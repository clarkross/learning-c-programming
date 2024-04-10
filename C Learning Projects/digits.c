#include <stdio.h>
#include <stdlib.h>

/*

Write a program that checks if a given number is "double-digit" or "triple-digit."

*/



int main()
{
	int input_number;

	printf("Please provide the number in which you would like to determine its digits: ");
	scanf("%d", &input_number);
	

	if (input_number >= 10 && input_number <= 99)
		printf("This number is double-digit");
	else if (input_number >= 100 && input_number <= 999)
		printf("This number is triple-digit");
	else 
		printf(" This number is not triple or double digit.");


	return 0;
}
