#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * create_array - creates an array of char
  * @size: size of array
  * @c: array of chars
  *Return: Null if it fails
  */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *t;

	if (size == 0)
	{
		return (NULL);
	}

	t = malloc(size * sizeof(char));

	for (x = 0; x < size; x++)
	{
		t[size] = c;
	}
		
	return (t);
	if (t == NULL)
	{
		return (NULL);
	}
}
