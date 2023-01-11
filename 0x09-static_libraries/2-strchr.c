#include "main.h"
#include <stddef.h>

/**
* _strchr - locates characters in a string
* returns the first occurence of the character,
 * or NULL if the character is not found
* @s: string to check
* @c: character to locate
*
* Return: Pointer to the first occurence of the character @c
 * or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
		return (NULL);
}
