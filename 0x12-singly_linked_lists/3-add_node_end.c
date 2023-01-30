#include <string.h>
#include "lists.h"

/**
* add_node_end - adds a node to the end of a linked list
* @head: first node in list
*	@str: node->str value
*
*	Return: address of new element, or NULL if it fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;

	newNode = malloc(sizeof(size_t));

	if (newNode == NULL)
		return (NULL);

	if (str == NULL)
		newNode->str = NULL;
	else
		newNode->str = strdup(str);

	newNode->next = NULL;
	newNode->len = 0;

	while (newNode->str[newNode->len] && str)
		newNode->len++;

	if (*head == NULL)
	{
		*head = malloc(sizeof(size_t));
		if (*head == NULL)
			return (NULL);

		*head = newNode;
		return (*head);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = newNode;
	return (newNode);
}
