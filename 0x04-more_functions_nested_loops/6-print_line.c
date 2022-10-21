#include "main.h"

/**
  * print_line -  draws a straight line in the terminal
  * @n: input times _ is printed
  * Returns: Always 0
  */
void print_line(int n)
{
	if  (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int y = 1;

		while (y <= n)
		{
			_putchar('_');
			y++;
		}
		_putchar('\n');
	}
}
