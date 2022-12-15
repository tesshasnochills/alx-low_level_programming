#include "main.h"

/**
 * print_numbers - prints numbers followed by a new line
 */
void print_numbers(void)
{
	char t;

	for (t = '0'; t <= '9'; t++)
	{
		_putchar(t);
	}
	_putchar('\n');
}
