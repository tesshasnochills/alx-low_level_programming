#include "lists.h"

/**
* delete_nodeint_at_index - deletes node at an index of a linked list
* @head: double pointer to the head node
* @index: index of the node that should be deleted
*
* Return: 1 if its successful and -1 if it fails
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int count;

	current = *head;
	previous = *head;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		current->next = NULL;
		free(current);

		return (1);
	}

	for (count = 0; count < index - 1; count++)
		previous = previous->next;

	current = previous->next;
	previous->next = current->next;
	current->next = NULL;
	free(current);
	return (1);
}
