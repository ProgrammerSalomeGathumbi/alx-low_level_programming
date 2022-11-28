#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  *add_node_end -  adds a new node at the end of a list
  *@head: beginning of link
  *@str:string
  *Return: the address of the new element, or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node;
	list_t *last;

	new_node = malloc(sizeof(list_t));
	last = *head;

	if (new_node == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (new_node);
}
