#include "main.h"

/**
* cap_string - capitalixes all words of a string
* @t: string to check
*
* Return: pointer to the sring
*/
char *cap_string(char *t)
{
	int i, j;
	char *sep = "\t\n,;.?!\"(){}";

	for (i = 0; t[i] != '\0'; i++)
	{
		if (i == 0 && (t[i] >= 'a') && (t[i] <= 'z'))
			t[i] = t[i] - 32;

		for (j = 0; sep[j] != '\0'; j++)
		{
			if ((t[i] == sep[j] && (t[i + 1] >= 'a' && t[i + 1] <= 'z')))
				t[i + 1] = t[i + 1] - 32;
		}
	}
	return (t);
}
