#include "main.h"
/**
  * print_square - prints a square
  * @size: the size of the square
  * Return: Always 0
  */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a = 1;

		while (a <= size)
		{
			int b = 1;

			while (b < size)
			{
				_putchar('#');
				b++;
			}
			_putchar('#');
			_putchar('\n');
			a++;
		}
	}
}
