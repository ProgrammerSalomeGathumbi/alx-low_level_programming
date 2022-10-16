#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -print the last digit in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int ld;
	char str[15] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (ld > 5)
		printf("%s %i is %i and is greater than 5\n", str, n, ld);
	else if (ld == 0)
		printf("%s %i is %i and is 0\n", str, n, ld);
	else if (ld < 6)
		printf("%s %i is %i and is less than 6 and not 0\n", n, ld);
	return (0);
}
