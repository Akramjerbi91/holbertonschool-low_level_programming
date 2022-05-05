#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - counts number of nodes
 * @h: head
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *temp = h;
int count = 0;

while (temp != NULL)
{
temp = temp->next;
count++;
}

return (count);
}

