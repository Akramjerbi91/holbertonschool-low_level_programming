#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint- frees doubly linked list
 *@head: head pointer
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
while (head != NULL)
{
	free(head);
	head = head->next;
}
}
