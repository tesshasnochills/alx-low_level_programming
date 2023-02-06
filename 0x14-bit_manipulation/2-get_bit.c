#include "main.h"

/**
* get_bit - returns the value of a bit at a specified index
* @n: index of bit
* @index: the index of the bit
*
* Return: the value of the bit at the index, or -1 if an error occurs
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	mask = 1ul << index;

	return ((mask & n) == 0 ? 0 : 1);
}
