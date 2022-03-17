#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lists.h"

/**
 * add_node_end-adds a node to the end of the list
 * @head: poiter to the head of the list
 * @str: string input
 *
 *Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *last = *head;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);


	new_node->str  = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return (new_node);

}
