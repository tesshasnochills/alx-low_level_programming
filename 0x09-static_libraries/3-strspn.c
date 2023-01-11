#include "main.h"

/**
* _strspn - returns length of prefix substring
* @s: string to check
* @accept: bytes to check on main string
*
* Return: Number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, n;

	n = 0, k = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				n++, k++;
		}
		if (k == 0)
			break;
		k = 0;
	}
	return (n);
}
