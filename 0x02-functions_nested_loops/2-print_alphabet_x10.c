#include "main.h"

/**
  * print_alphabet_x10 - Prints the alphabet ten times 
  * Return: Always 0
  */
void print_alphabet_x10(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		{
			int i;

			for (i = 0; i <= 10; i++)
				_putchar(c);
		}
	_putchar('\n');
}
