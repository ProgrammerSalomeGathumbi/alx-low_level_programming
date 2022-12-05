#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * binary_to_uint -  converts a binary number to an unsigned int
  *@b: const char
  *Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int l = 0, count = 0, sum = 0;

	if (b == NULL)
		return (0);
	l = strlen(b);

	while (l--)
	{
		if (b[l] != 48 && b[l] != 49)
			return (0);
		if (b[l] == 49)
			sum += 1 << count;
		count++;
	}
	return (sum);
}
