#include "lists.h"
#include <stdlib.h>

/**
* free_listint - frees a linked list
* @head: pointer to the first node of the list
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	while (temp)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
