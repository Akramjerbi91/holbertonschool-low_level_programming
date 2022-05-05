#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
/**
 * insert_dnodeint_at_index - insert node at given index
 *@h: head pointer
 *@idx: list node index
 *@n: new int data
 * Return: new list.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev_node = get_dnodeint_at_index(*h, idx - 1);
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;

	if (prev_node == NULL)
	{
		prev_node = add_dnodeint(h, n);
		return (prev_node);
	}
	new_node->next = prev_node->next;

	new_node->next = prev_node->next;

	prev_node->next = new_node;

	new_node->prev = prev_node;

	if (new_node->next != NULL)
	{
		new_node->next->prev = new_node;
		return (NULL);
	}
	else
		return (new_node);
}
/**
 * get_dnodeint_at_index - get node at index
 * @head: head pointer
 * @index: given index
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (index == i)
			return (current);
		i++;
		current = current->next;
	}
		return (NULL);

}

