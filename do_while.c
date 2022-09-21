#include <stdio.h>

/**
* main - working with while state
* Author:  Akinbami Taofeek
* Return: Continue with the loop if successful, Otherwise
* Break the loop and exit.
*/

int main(void)
{
	int i;

	i = 65;
	do {
		printf("The numerical value of %c is %d.\n", i, i);
		i++;
	}
	while (i < 72);

	return (0);
}
