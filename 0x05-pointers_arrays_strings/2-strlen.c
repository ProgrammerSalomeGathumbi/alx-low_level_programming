#include "main.h"
/**
 * _strlen - returns lenght of a string
 * @*s: pointer to an integer
 * @s: inger input
 * Return: n
*/
int _strlen(char *s)
{
	int n = 0;

	while (*s++)
	{
		n++;
	}

	return (n);
}
