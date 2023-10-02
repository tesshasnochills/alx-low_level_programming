#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: int to check
 *
 * Return: 1 if @c is a digit, 0 if otherwise
 * 
 * FUNCTIONALITY *
 * 
 * 1. The function takes int c as a parameter.
 * 
 * 2. If the ASCII value represented by c is within the range of digits, return 1 (meaning it is a digit)
 * 		If not return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
