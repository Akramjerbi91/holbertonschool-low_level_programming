#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_dlistint - prints doubly linked list
 *@h: head pointer
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *new = h;
int count = 0;

while (new != NULL)
{
printf("%d\n", new->n);
new = new->next;
count++;
}

return (count);

}
