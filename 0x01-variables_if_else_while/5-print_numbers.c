#include <stdio.h>

/**
 * main -prints all single digit numbers of base 10
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		printf("%i", n);
	putchar('\n');
	return (0);
}
