#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list -  frees a list_t list.
 * @head:begining of link
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
