#include "main.h"

/**
 * times_table -  prints the 9 times table
 * Return: Always 0
 */
void times_table(void)
{
	int t, j, h;

	for (t = 0; t <= 9; t++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{
			h = (t * j);
			if ((h / 10) > 0)
			{
				_putchar((h / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((h % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
