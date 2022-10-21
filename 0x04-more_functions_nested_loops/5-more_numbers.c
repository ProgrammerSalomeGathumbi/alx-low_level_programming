#include "main.h"

/**
  * more_numbers -  prints 10 times the numbers, from 0 to 14
  * Return: Always 0
  */
void more_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		int a = 0;

		while (a <= 14)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
			a++;
		}
		_putchar('\n');
		i++;
	}
}
