#include "main.h"
/**
  * _puts - prints a string
  * @*str: pointer to integer
  * @str: string input
  */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
