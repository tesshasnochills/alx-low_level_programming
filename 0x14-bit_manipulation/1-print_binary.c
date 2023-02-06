#include "main.h"
#include <stdio.h>

/**
* print_binary - prints the binary representation of a number
* @n: number to print in binary that is an unsigned long integer
*
* Return: Void
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
