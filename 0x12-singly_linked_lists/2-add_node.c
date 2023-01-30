#include <string.h>
#include "lists.h"

/**
* add_node - adds a new node at the beginning of a list
* @head: is the node to be added
* @str: string element of the node
*
* Return: address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(size_t));

	if (newNode == NULL)
		return (NULL);

	if (str == NULL)
		newNode->str = NULL;
	else
		newNode->str = strdup(str);

	newNode->len = 0;

	while (newNode->str[newNode->len] && str)
		newNode->len++;

	newNode->next = (*head);

	*head = newNode;
	return (*head);

}
