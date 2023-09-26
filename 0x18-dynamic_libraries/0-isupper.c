#include "main.h"

/**
 * _isupper - checks for upper case letter.
 *@c: integer to check
 *
 * Return: 1 if @c is uppercase, 0 if otherwise
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
