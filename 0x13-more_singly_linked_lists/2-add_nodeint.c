#include "lists.h"
#include <stdio.h>

/**
* add_nodeint - adds a new node at the beginning of a list
* @head: pointer to the first element of the list, head
* @n: data to insert into new node
*
* Return: address of the new element, Null if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = newNode;

	return (newNode);
}
