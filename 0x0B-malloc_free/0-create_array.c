#include "main.h"

/**
* create_array - creates an array of characters,
* and initializes with a specific char
*
* @size: size of array
* @c: char to initialize array with
*
* Return: pointer to array
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int t;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (t = 0; t < size; t++)
		str[t] = c;

	return (str);
}
