#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a linked list
* @head: pointer to the head node
* @index: index of the nth node
*
* Return: pointger to the nth node or NULL if the node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int count;

	node = head;
	count = 0;

	for (count = 0; count < index && node; count++)
		node = node->next;

	return (node);
}
