 #include "main.h"

/**
 * _strlen_recursion - function that returns length of a string.
 * @s: string to print in reverse.
 *
 * Return: Nothing
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
