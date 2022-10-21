#include "main.h"
/*
 * _putchar -checks for uppercase character.
 * @c: character input
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
