#include <stdio.h>

/**
* main - using pre- or post- increment and decreenebt operator.
* Return: 0 if successful, otherwise.
*/

int main(void)
{
	int w, x, y, z, result;

	w = x = y = z = 1; /* initialize x and y */
	printf("Given w = %d, x = %d, y = %d, and z = %d, \n", w, x, y, z);

	result = ++w;
	printf("++w evaluates to %d and w is now %d\n", result, w);
	result = x++;
	printf("x++ evaluates to %d and x is now %d\n", result, x);
	result = --y;
	printf("--y evaluates to %d and x is now %d\n", result, y);
	result = z--;
	printf("z-- evaluates to %d and x is now %d\n", result, z);

	return (0);
}
