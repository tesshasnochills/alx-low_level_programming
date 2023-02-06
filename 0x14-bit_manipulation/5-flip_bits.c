#include "main.h"

/**
* flip_bits - returns the number of bits you need to flip to
* get from one number to another
* @n: first number
* @m: second number
*
* Return: number of bits that are to be flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int count;

	count = 0;
	xor = n ^ m;

	while (xor)
	{
		if (xor & 1)
			count++;

		else
			xor >>= 1;
	}
	return (count);
}
