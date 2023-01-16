#include "main.h"

/**
  *_strcat - concatenates 2 strings
  *@dest: array pointer
  *@src: array pointer
  * Return: dest
  */

char *_strcat(char *dest, char *src)

{

	int i = 0, k;



	while (*(dest + i) != '\0')

	{

		i++;

	}

	for (k = 0; *(src + k) != '\0'; k++, i++)

	{

		*(dest + i) = *(src + k);

	}

	*(dest + i) = '\0';

	return (dest);

}
