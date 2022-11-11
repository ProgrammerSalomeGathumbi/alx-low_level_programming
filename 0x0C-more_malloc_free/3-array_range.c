#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - Function create and array of integers.
 * @min: starting number.
 * @max: ending number.
 *
 * Return: pointer to the area in memory.
 */
int *array_range(int min, int max)
{
	int *arr;
	int b, i;

	if (min > max)
	{
		return (NULL);
	}

	b = max - min;

	arr = malloc(sizeof(int) * (b + 1));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= b; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
