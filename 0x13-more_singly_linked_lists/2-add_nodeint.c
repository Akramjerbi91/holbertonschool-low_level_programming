#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds node at beginning of the list
 * @head: poiter to list
 * @n: integer
 *
 * Return: poionter to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);

}
