#include "main.h"

/**
* _strncat - concentrates two strings
* @dest: resulting string
* @src: string to check
* @n: number of bytes to use at most from src
*
* Return: @dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int t;
	int u;

		for (t = 0; *(dest + t) != '\0'; t++)
		{}

		for (u = 0; (u < n && *(src + u) != '\0'); u++, t++)
		{
			*(dest + t) = *(src + u);
		}
		if (*(dest + t) != '\0')
			*(dest + t) = '\0';

		return (dest);
}
