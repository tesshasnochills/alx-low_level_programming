#include "main.h"

/**
* _memcpy - copies n bytes from memory area src to memory area dest
*
*	@dest: memory area to copy data to
*	@src: memory area being copied from
*	@n: number of bytes to be copies
*
*	Return: pointer to @dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
