#include "main.h"

/**
* _strlen - checks the length of a string
* @s: string to check
*
* Return: length of string
*/
int _strlen(char *s)
{
	int i, len;

	len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		len++;
	}

	return (len);
}
