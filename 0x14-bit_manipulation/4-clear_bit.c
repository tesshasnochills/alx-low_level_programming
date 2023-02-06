#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: is a pointer to a number
* @index: is the index of the number
*
* Return: 1 if it is successful or -1 if it fails
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1ul << index;

	*n &= ~mask;

	return (1);
}
