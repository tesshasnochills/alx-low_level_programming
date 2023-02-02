#include "lists.h"

/**
* sum_listint - returns the sum of all the data in a linked list
* @head: first node of the linked list
*
* Return: sum of data, or 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	temp = head;

	for (sum = 0; temp;)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
