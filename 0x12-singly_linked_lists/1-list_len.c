#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *list_len -lists all the elements of a list.
  *@h:struct pointer
  *Return:the number of nodes
  */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
