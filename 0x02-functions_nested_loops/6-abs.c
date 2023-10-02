#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: character to check
 *
 * Return: absolute value of n
 * 
 * FUNCTIONALITY *
 * 1. An integer n is initialised in the function.
 * 
 * 2. N is used as a variable in the 'if' loop.
 * 
 * 3. If the value of n is less than 0, n is multiplied by -1 and its value is returned.
 * 		This ensures the value of the integer is absolute (mening the distance of the number from 0, cannot be negative).
 * 
 * 4. The vallue of the integer is returned.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
