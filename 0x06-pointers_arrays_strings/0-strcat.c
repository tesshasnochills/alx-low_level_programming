#include "main.h"

/**
* _strcat - concentrates two strings
* @dest: string to check
* @src: string to check
*
* Return: @dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

		for (i = 0; *(dest + i) != '\0'; i++)
		{}
		for (j = 0; *(src + j) != '\0'; j++, i++)
		{
			*(dest + i) = *(src + j);
		}
		*(dest + i) = '\0';
		return (dest);
}
