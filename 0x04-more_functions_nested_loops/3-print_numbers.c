#include "main.h"

/**
  * print_numbers - prints the numbers, from 0 to 9
  * Return: Always 0
  */
void print_numbers(void)
{
	int i = '0';

	while (i >= '0' && i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
