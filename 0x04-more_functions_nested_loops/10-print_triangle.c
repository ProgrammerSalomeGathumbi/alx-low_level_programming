#include "main.h"

/**
  * print_triangle - prints a triangle
  * @size:  size of the triangle
  * Return: Always 0
  */
void print_triangle(int size)
{
	int x;
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (a = size - 1; a > x; a--)
			{
				_putchar(' ');
			}
			for (b = 0; b < x + 1; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
