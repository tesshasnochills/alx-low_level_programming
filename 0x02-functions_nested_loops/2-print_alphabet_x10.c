#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * FUNTCTIONALITY *
 * 1. A character t is intitalised
 * 
 * 2. T is used as a loop variable
 * 
 * 3. The loop continues as long as t is in the range of a - z and increments each time
 * 
 * 4. Tis printed each time the loop runs
 * 
 * 5. When the loop is completed a new line is printed
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

