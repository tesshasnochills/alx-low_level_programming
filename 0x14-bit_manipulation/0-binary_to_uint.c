#include "main.h"
#include <stdlib.h>

/**
* binary_to_uint - converts a binary number to an unsigned integer
* @b: string of 0 and 1 characters
*
* Return: The converted number, or 0 if there are characters in the string
* that are not 0 or NULL
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal;

	decimal = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			decimal = (decimal * 2) + (b[i] - '0');

		else
			return (0);
	}
	return (decimal);
}
