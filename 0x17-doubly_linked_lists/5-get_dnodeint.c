#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: head pointer
 * @index: given index
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		i++;
		head = head->next;
		if (index == i)
			return (head);
	}
		return (NULL);

}
