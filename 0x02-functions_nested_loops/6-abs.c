#include "main.h"

/**
  * _abs - computes the absolute value of an integer
  * @a: single integer input
  * Return: Always 0
  */
int _abs(int a)
{
	return (a * ((a > 0) - (a < 0)));
}
