#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: character to check
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}

/**
 * print_last_digit - prints the last digit of a number
 *@n: character to check
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int z;

	z = _abs(n % 10);
	_putchar(z);
	return (z);
}
