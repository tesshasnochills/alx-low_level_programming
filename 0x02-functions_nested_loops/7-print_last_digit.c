#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: character to check
 *
 * Return: absolute value of n
 * 
 * FUNCTINALITY *
 * 
 * 1. An integer n is initialised in the function.
 * 
 * 2. N is used as a variable in the 'if' loop.
 * 
 * 3. If the value of n is less than 0, n is multiplied by -1 and its value is returned.
 * 		This ensures the value of the integer is absolute (mening the distance of the number from 0, cannot be negative).
 * 
 * 4. The vallue of the integer is returned.
 * 
 * Time Complexity:
 * 
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
 * 
 * FUNCTIONALITY *
 * 
 * 1. The integer n is initialised within the function.
 * 
 * 2. An integer z is intialised.
 * 
 * 3. The next line calculates the absolute value of n and assigns it to the variable z.
 * 
 * 4. The following line converts the integer value of z to its corresponding ASCII value by adding
 * 		the ASCII value of '0' to it.
 * 
 * 5. The value of Z is returned.
 * 
 * Time Complexity: 0(1)
 * 
 */
int print_last_digit(int n)
{
	int z;

	z = _abs(n % 10);
	_putchar(z + '0');
	return (z);
}
