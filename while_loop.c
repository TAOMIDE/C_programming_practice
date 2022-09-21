#include <stdio.h>

/**
* main - Using the while loop for Iteration
* Author: Akinbami Taofeek Olamide
* Return: 0 if successful
*/

int main(void)
{
	int c;

	c = ' ';
	printf("Enter a character:\n(enter x to exit)\n");

	while (c != 'x')
	{
		c = getc(stdin);
		putchar(c);
	}

	printf("\nOut of the while loop. Bye!\n");

	return (0);
}
