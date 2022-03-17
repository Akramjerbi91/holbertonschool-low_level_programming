#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node- adds node at the beginning of the list
 * @head: points to the head of the list
 * @str: new string
 *
 * Return: pointer to the new node
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = (*head);

	(*head) = new_node;

	return (new_node);

}
