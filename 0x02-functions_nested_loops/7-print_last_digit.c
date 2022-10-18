#include "main.h"

/**
  *  print_last_digit -prints the last digit of a number
  * @a: integer input
  * Return: Always 0
  */
int print_last_digit(int a)
{
	int j;

	j = (a % 10);

	if (j < 0)
	{
		j = (-1 * j);
	}
	_putchar(j + '0');
	return (j);
}
