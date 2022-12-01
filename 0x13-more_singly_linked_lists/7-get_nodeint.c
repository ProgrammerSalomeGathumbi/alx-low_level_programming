#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
  * get_nodeint_at_index - returns the nth node of a list
  * @head:head
  * @index:unsigned integer
  * Return:zero
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head)
		{
			if (count == index)
				return (head);
			head = head->next;
			count++;
		}
	}
	return (NULL);
}
