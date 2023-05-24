#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @n: integer to check
 * 
 * FUNCTIONALITY *
 * 1. An integer n is initialised in the function
 * 
 * 2. N is used as a variable in the if loop
 * 
 * 3. as long as the condition regarding n is true:
 * 
 * 4. putchar prints a + onto the screen and returns 1
 * 
 * 5. Another else if loop is initialised if n = 0
 * 
 * 6. If true 0 is printed onto the screen and 0 is retured
 * 
 * 7. Else '-' is printed and (-1 is returned)
 *
 * Return: 1 if n is greater than 0
 * 0 is n is 0
 * -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
