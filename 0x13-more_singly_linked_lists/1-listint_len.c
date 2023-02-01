#include "lists.h"
#include <stdio.h>

/**
* listint_len - returns the number of elements in a linked list
* @h: pointer to the first node, head
*
* Return: number of elements in the linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
