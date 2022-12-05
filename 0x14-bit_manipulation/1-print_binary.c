#include "main.h"
/**
  * print_binary - prints the binary representation of a number
  *@n:long integer
  *return:nothing
  */
void print_binary(unsigned long int n)
{
	int i = 0, count, k, l;

	if (n == 0)
		_putchar('0');
	k = n;

	while (k != 0)
	{
		i++;
		k = k >> 1;
	}
	for (count = i - 1; count >= 0; count--)
	{
		l = n >> count;
		if (l & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
