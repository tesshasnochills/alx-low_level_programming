#include "main.h"

/**
* _strchr - locates a char in a string
*
* @s: string
* @c: character to be located
*
* Return: pointer to @c, or NULL if char is not found
*
*/
char *_strchr(char *s, char c)
{
	unsigned int x;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		if (*(s + x) == c)
			return (s + x);
	}
	return (NULL);
}
