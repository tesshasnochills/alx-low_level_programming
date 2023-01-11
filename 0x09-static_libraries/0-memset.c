#include "main.h"

/**
* *_memset - fills a block of memory with a particular value
* @s:string to check
* @b:character to check
* @n:integer to check
*
*Return: pointer to memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
