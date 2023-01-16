#include "main.h"

/**
  * _puts - prints a string
  * @*str: pointer to integer
  * @str: string input
  */
void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
