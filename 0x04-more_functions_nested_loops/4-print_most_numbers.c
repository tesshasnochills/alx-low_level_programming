#include "main.h"

/**
 * print_most_numbers - prints numbers folowed by a new line
 * 
 * FUNCTIONALITY *
 * 
 * 1. The function takes no parameters hence void. It prints the numbers directly.
 * 
 * 2. The for loop initializes t to 0 and iterates through the values of t from 0 - 9.
 * 
 * 3. If t is not equal to 2 or 4, the values of t are printed.
 * 
 * 4. A new line is printed.
 * 
 */
void print_most_numbers(void)
{
	char t;

	for (t = '0'; t <= '9'; t++)
	{
		if (!(t == '2' || t == '4'))
		{
			_putchar(t);
		}
	}
	_putchar('\n');

}
