#include "lists.h"

/**
* print_dlistint - prints all the elements of a d list
* @h: the head node
*
* Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
