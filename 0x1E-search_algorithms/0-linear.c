#include "search_algos.h"
/**
  *linear_search-searches for a value in an array of integers
  *@array: pointer to the first element of the array to search in
  *@size:number of elements in array
  *@value: value to search for
  *Return:the first index where value is located
  */
int linear_search(int *array, size_t size, int value)
{
	size_t s;

	if (array == NULL)
	{
		return (-1);
	}
	for (s = 0; s < size; s++)
	{
		printf("Value checked array[%ld] = [%d]\n", s, array[s]);
		if (array[s] == value)
		{
			return (s);
		}
	}
	return (-1);
}
