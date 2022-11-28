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
	list_t *new_node = malloc(sizeof(list_t));

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = (*head);
	(*head) = new_node;

	if (new_node == NULL)
		return (NULL);
	else
		return (*head);
}
