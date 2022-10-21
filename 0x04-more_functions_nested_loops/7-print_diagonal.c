#include "main.h"
/**
  * print_diagonal - draws a diagonal line
  * @n:  number of times the character \
  * Return: Always 0
  */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a = 1;

		while (a <= n)
		{
			int b = 1;

			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
}
