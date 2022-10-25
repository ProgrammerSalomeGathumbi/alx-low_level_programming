#include "main.h"
#include <stdio.h>
/**
  * print_array - prints an array
  * @*a: pointer
  * @n: integer
  * @a: arrray
  */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		i++;
		if (i < n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
