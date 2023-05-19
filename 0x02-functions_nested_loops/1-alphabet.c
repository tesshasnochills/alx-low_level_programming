#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * 
 * FUNCTIONALITY *
 * 
 * 1. Variable t is declared as a character.
 * 
 * 2. The for loop iterates form a to z as t has been equated to a.
 * 
 * 3. T is then printed.
 * 
 * 4. Once the loop ends a new line is printed.
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
