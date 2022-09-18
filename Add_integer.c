#include <stdio.h>
/**
* integer_add- This function adds two integers and returns the result
* @x: First argument
* @y: Second argment
* Return: The sum of two parameters
*/

int integer_add(int x, int y)
{
	int result;

	result = x + y;

	return (result);
}
/**
* main- Entry point of program
* @integer_add: addition of operand
* Return: 0
*/
int main()
{
	int sum;

	sum = integer_add(5, 12);

	printf("The addition of 5 and 12 is %d.\n", sum);

	return (0);
}
