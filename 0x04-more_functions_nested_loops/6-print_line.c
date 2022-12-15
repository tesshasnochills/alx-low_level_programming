#include "main.h"

/**
 * print_line - draws a straingt line in the terminal
 *@n: integer to check
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
