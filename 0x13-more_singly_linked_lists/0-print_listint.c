#include "lists.h"
#include <stdio.h>

/**
* print_listint - prints all elements of the list
* @h: pointed to the first node, head
*
* Return: the number of nodes in the list
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;
		count++;
	}
	return (count);
}
