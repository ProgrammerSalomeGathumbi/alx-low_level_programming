#include "main.h"
/**
 * _pow_recursion - returns value of x to power of y.
 * @x: integer
 * @y: integer
 * Return: -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (x == 0)
	{
		return (0);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
