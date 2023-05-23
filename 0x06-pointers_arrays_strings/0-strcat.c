#include "main.h"
#include <stdio.h>

/**
* _strcat - concentrates two strings
* @dest: string to check
* @src: string to check
*
* Return: @dest
*/
char *_strcat(char *dest, char *src)
{
	int s, t;

		for (s = 0; *(dest + s) != '\0'; s++)
		{}

		for (t = 0; *(src + t) != '\0'; t++, s++)
		{
			*(dest + s) = *(src + t);
		}

		*(dest + s) = '\0';

		return (dest);
}
