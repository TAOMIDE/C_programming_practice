#include <stdio.h>

/**
* main - Using the cast operator in C
* Author: Akinbami Taofeek Olamide
* The cast operator allows you to specify another data type in C
* Return: Data type
*/

int main(void)
{
	int x, y;

	x = 7;
	y = 5;

	printf("Given x = %d, y = %d\n", x, y);
	printf("x / y produces: %d\n", x / y);
	printf("(float)x / y produces: %f\n", (float)x / y);

	return (0);
}
