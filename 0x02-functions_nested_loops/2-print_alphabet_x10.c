#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char t;

	for (t = 'a'; t <= 'z'; t++)
	{
		_putchar(t);
	}
	_putchar('\n');
}

/**
 * print_alphabet_x10 - Prints alphabet in lowercase 10 times.
 */
void print_alphabet_x10(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		print_alphabet();
	}
}

