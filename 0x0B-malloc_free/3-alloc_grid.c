#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - makes a 2D array grid
 * @width: integer
 * @height: integer
 * Return: pointer to 2D  array
 */
int **alloc_grid(int width, int height)
{
	int **k;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	k = malloc(height * sizeof(int *));

	if (k == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		k[i] = malloc(width * sizeof(int));

		if (k[i] == NULL)
		{
			while (i >= 0)
			{
				free(k[i--]);
			}
			free(k);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			k[i][j] = 0;
		}
	}
	return (k);
}
