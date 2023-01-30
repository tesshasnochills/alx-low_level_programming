#include "lists.h"
#include <stdio.h>

/**
* list_len - prints the number of elements in a linked list
* @h: head of the list
*
* Return: number of elements in the list, size_t
*/
size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		++len;
		h = h->next;
	}
	return (len);
}
