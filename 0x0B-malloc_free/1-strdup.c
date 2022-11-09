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
	char *s;

	s = malloc(sizeof(char) * a);
	for (; a < str[a]; a++)
	{
		s[a] = str[a];
	}
	if (str == NULL || s == NULL)
	{
		return (NULL);
	}
	return (s);
}
