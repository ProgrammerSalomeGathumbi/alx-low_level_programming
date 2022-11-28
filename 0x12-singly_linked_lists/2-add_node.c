#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  *add_node -  adds a new node at the beginning of a list
  *@head: beginning of link
  *@str:string
  *Return: the address of the new element, or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
