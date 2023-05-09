#include "search_algos.h"
/**
  *binary_search-searches for a value in an array of integers
  *@array: pointer to the first element of the array to search in
  *@size:number of elements in array
  *@value: value to search for
  *Return:the first index where value is located
  */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, x, mid;

	left = 0;
	x = 0;
	right = size - 1;
	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		mid = (right + left) / 2;
		printf("Searching in array: ");
		for (x = left; x <= right; x++)
		{
			if (x != left)
				printf(", %d", array[x]);
			else
				printf("%d", array[x]);
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
		
	}
	return (-1);
}
