#include "lists.h"

/**
* free_list - frees the linked list
* @head: first node of the list
*/
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		head = head->next;
		free(temp->str);
		free(temp);
		temp = head;
	}
}
