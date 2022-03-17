#include "lists.h"
#include <stdio.h>

/**
 * list_len - counts the length of the list
 * @h: linked list
 *
 * Return: the length of the list
 */
size_t list_len(const list_t *h)
{


	int cnt = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{
		cnt++;
		tmp = tmp->next;
	}
	return (cnt);

}
