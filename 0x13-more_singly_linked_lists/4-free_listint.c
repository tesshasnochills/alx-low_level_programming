#include "lists.h"
#include <stdlib.h>

/**
* free_listint - frees a linked list
* @head: pointer to the first node of the list
*/
void free_listint(listint_t *head)
{
	listint_t *current = head;
  while (current != NULL)
		{
			listint_t *next = current->next;

			free(current);
			current = next;
		}
}
