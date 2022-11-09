#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _strdup - copies an array
  * @str: an array
  *Return: Null if it fails
  */
char *_strdup(char *str)
{
	int a = 0;
	int j;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[a])
	{
		a++;
	}
	s = malloc(sizeof(char) * (a + 1));
	for (j = 0; j < a; j++)
	{
		s[j] = str[j];
	}
	if (s == NULL)
	{
		return (NULL);
	}
	return (s);
}
