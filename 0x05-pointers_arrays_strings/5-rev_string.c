#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int t, len;
	char temp;

	len = 0;

	for (t = 0; *(s + t) != '\0'; t++)
	{
		len++;
	}

	len -= 1;

	for (t = 0; t < (len + 1) / 2; t++)
	{
		temp = *(s + t);
		*(s + t) = *(s + (len - t));
		*(s + (len - t)) = temp;
	}
}
