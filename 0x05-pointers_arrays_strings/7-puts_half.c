#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * if the number is odd, function prints the last n characters
 * n = (lenth_of_string - 1) / 2
 *@str: string to be printed
 */
void puts_half(char *str)
{
  int t, len;

	len = 0;

	for (t = 0; *(str + t) != '\0'; t++)
	{
		len++;
	}

	if (len % 2 != 0)
		len++;

	for (t = len / 2; *(str + t) != '\0'; t++)
	{
		_putchar(*(str + t));
	}

	_putchar('\n');
}
