 #include "main.h"
/**
  *_strcat - concatenates 2 strings
  *@dest: array pointer
  *@src: array pointer
  *@n: maximu size of src 
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, k;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	for(k = 0; k< n && *(src + k) != '\0'; k++, i++)
	{
		*(dest + i) = *(src + k);
	}
	if (k < n)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
