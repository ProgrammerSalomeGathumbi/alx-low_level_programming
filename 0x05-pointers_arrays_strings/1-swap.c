#include "main.h"
/**
 * swap_int - swaps value of two integers
 * @*a: pointer to integer
 * @*b: pointer to integer
 * @a: integer input
 * @b: integer input
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
