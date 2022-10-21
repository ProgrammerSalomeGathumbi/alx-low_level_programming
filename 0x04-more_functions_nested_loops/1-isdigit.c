#include "main.h"

/**
  * _isdigit - checks for a digit (0 through 9).
  * @c: integer input
  * Return: 1 for a digit or 0 for otherwise
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
