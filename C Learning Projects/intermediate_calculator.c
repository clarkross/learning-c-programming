#include <stdio.h>
#include <stdlib.h>

/*

Develop a calculator that:

1. reads 1 character ('+', '-', '*', '/', '%')
2. reads 2 numbers from user input.
3. Use Switch Cases to calculate and print out the result.

*/

int main()
{
	// variables
	char math_char;
	int num1;
	int num2;
	
	// user inputted math symbol.
	printf("Please enter a math symbol.\n");
	printf("This program supports:\n");
	printf("+, -, *, /, % \n");
	printf("Type here: ");
	scanf("%s", &math_char);

	// user inputted int
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);

	// program conditions and calculations.
	switch (math_char)
	{
		case '+':
			int addint = num1 + num2;
			printf("Answer: %d", addint); 
			break;

		case '-':
			int subtractint = num1 - num2;
			printf("Answer: %d", subtractint); 
			break;

		case '*':
			int multiplyint = num1 * num2;
			printf("Answer: %d", multiplyint);
			break;

		case '/':
			if(num2 == 0)
				printf("You cannot divide by 0.")
			else
				int divideint = num1 / num2;
				printf("Answer: %d", divideint);
				break;

		case '%':
			int remainderint = (int)num1 % (int)num2;
			printf("Answer: %d", remainderint);
			break;

		default:
			printf("You entered an invalid mathmatical symbol.");
			break;
	}



	return 0;
}
