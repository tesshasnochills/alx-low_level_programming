#include "main.h"

/**
 * _isupper - checks for upper case letter.
 *@c: integer to check
 *
 * Return: 1 if @c is uppercase, 0 if otherwise
 * 
 * FUNCTIONALITY *
 * 
 * 1. The function takes int c as a parameter.
 * 
 * 2. If the ASCII represented by c is withing the uppercase ASCII values, then return 1.
 * 		If not, return 0 indicting that the char is not an uppercase letter.S
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
