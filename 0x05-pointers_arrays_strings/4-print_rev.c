#include "main.h"
/**
  * print_rev - print string in reverse
  * @*s: pointer to character
  * @s: charater input
  * return:reverse s
  */
void print_rev(char *s)
{
	int c = 0;

	while (*(s + c) != 0)
	{
		c++;
	}
	while (c--)
	{
		_putchar(*(s + c));
	}
	_putchar('\n');
}
