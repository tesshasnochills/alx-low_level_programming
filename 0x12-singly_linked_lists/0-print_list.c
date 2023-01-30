#include "lists.h"

/**
* print_list - prints elements in a linked list
* @h: pointer to head first node
*
* Return: the number of nodes in list
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("%s", ("[0] (nil)\n"));
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}
	return (count);
}
