#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c: single character input
 *
 * Return: 1 for uppercase or 0 for lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
