#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: poimter to the head node
* @idx: index where the new node should be added
* @n: data(n) to be inserted in the new node
*
* Return: pointer to the new node or NULL if it fails
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	unsigned int x;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	temp = *head;

	if (idx == 0 && temp)
	{
		newNode->next = temp;
		*head = newNode;
		return (newNode);
	}

	for (x = 0; x < idx - 1 && temp; x++)
		temp = temp->next;

	if (temp && idx > 0)
	{
		newNode->next = temp->next;
		temp->next = newNode;
		return (newNode);
	}
	else
	{
		free(newNode);
		return (NULL);
	}
}
