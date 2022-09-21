#include <stdio.h>

/**
* main - Using arithmetic operation in C
* Author: Akinbami Taofeek Olamide
* Return: value of Answer if successful.
*/

int main(void)
{
	int x = 1;
	int y = 3;

	x += y;
	printf("The result of the expression x += y produces: %d\n", x);

	x += -y;
	printf("The result of the expression x += -y produces: %d\n", x);

	x -= -y;
	printf("The result of the expression x -= -y produces: %d\n", x);

	x *= y;
	printf("The result of the expression x *= y produces: %d\n", x);

	x *= -y;
	printf("The result of the expression x *= -y produces: %d\n", x);

	return (0);
}
