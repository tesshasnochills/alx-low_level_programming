#include "main.h"

/**
* _islower - checks for lowercase characters
* @c: integer to check
*
* Return: 1 if lowercase, 0 otherwise
*/
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
