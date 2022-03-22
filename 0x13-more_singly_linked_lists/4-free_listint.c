#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free list space
 * @head:pointer to list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
