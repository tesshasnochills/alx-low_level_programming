#include "lists.h"

/**
* pop_listint - deletes the head of a node in a linked list
* @head: double pointer to the head of the linked list
*
* Return:the head node data, ot 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;

	free(temp);

	return (data);


}
