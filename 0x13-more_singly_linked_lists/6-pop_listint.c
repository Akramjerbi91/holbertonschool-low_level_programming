#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *pop_listint - deletes the head of the list
 *@head: double pointer to head
 *
 * Return:0 if list is NULL
 */
int pop_listint(listint_t **head)
{
	int result;
	listint_t *ptr;

	if (*head == NULL)
		return (-1);

	result = (*head)->n;
	ptr = (*head)->next;
	free(head);
	*head = ptr;

	return (result);
}
