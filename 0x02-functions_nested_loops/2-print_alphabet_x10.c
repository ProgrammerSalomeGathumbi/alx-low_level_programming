#include "main.h"

/**
  * print_alphabet_x10 - Prints the alphabet ten times 
  * Return: Always 0
  */
void print_alphabet_x10(void)
{
	char c =0 , i;

	while (c < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		c++;
	}
}
