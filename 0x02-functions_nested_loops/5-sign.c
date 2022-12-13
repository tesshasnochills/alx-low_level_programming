#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @n: integer to check
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
