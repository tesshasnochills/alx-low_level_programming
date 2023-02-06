#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at agiven index
* @n: a pointer to a number
* @index: index of the number
*
* Return: 1 if successful or -1 if it fails
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1ul << index;

	*n |= mask;

	return (1);
}
