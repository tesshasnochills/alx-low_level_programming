#include "main.h"

/**
 * print_numbers - prints numbers followed by a new line
 * 
 * FUNCTIONALITY *
 * 
 * 1. The function does not take any parameters and hence void. It is designed to print the numbers directly.
 * 
 * 2. A char t is declared.
 * 
 * 3. The for loop initializes t to 0 and iterates through the values of t until 9
 * 
 * 4. The vLues of u are printed.
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
