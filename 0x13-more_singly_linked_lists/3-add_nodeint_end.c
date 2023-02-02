#include "lists.h"
#include <stdio.h>

/**
* add_nodeint_end - adds a node at the end of a list
* @head: pointer to the first node of the list
* @n: data to insert in new element
*
* Return: address of new element, or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	temp = *head;

	if (temp == NULL)
	{
		*head = newNode;
		return (*head);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = newNode;

	return (newNode);
}
