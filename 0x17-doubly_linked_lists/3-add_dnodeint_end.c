#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds node at end
 * @head: head of list
 * @n: new data
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if ((*head) == NULL)
	{
		new_node->prev = NULL;
		(*head) = new_node;
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	new_node->prev = last;

	return (new_node);

}
