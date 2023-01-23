#include "main.h"

/**
* _strncpy - copies a string
* @dest: buffer to copy string to
* @src: string to copy
* @n: most number of bytes copied to dest
*
* Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int t;

	for (t = 0; (t < n && *(src + t) != '\0'); t++)
		*(dest + t) = *(src + t);

	for (; t < n; t++)
		*(dest + t) = '\0';

	return (dest);
}
