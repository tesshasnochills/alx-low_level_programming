#include "main.h"

/**
* _strcpy - copies a string pointed to by src, including the terminating null
* byte
*
* @src: string
* @dest: buffer
*
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int t;

	for (t = 0; *(src + t) != '\0'; t++)
	{
		*(dest + t) = *(src + t);
	}

	*(dest + t) = '\0';

	return (dest);
}
