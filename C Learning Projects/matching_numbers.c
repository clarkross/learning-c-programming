#include <stdio.h>
#include <stdlib.h>

/*

Program that checks to see if two numbers are the same

If the same- the print True.
Otherwise, print false.

*/



int main()
{
	int num1;
	int num2;	
	
	printf("Please enter first number: ");
	scanf("%d", &num1);
	printf("Please enter second number: ");
	scanf("%d", &num2);

	if (num1 == num2)
		printf("These numbers match.");
	else
		printf("These numbers do not match.");


	return 0;
}
