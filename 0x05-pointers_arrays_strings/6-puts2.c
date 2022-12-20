#include "main.h"

/**
* puts2 - prints every other character of a string starting from the first one,
* followed by a new line
* @str: string to print
*/
void puts2(char *str)
{
	int t;

	for (t = 0; *(str + t) != '\0'; t++)
	{
		if (t % 2 == 0)
			_putchar(*(str + t));
	}

	_putchar('\n');
}
