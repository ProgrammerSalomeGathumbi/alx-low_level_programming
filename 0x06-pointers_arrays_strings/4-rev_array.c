#include "main.h"
/**
  * reverse_array - reverses the content of an array
  * @a: an array of integers
  * @n: the number of elements to swap
  */
void reverse_array(int *a, int n)
{
	int s;
	int i;

	n--;
	for (i = 0; i < n; i++)
	{
		s = a[i];
		a[i] = a[n];
		a[n] = s;
		n--;
	}
}
