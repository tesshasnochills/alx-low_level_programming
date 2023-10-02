#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: print from this number
 *
 * Retrun: Always success(0)
 * 
 * FUNCTINALITY *
 * 
 * 1. If the number is less than 98 it will print all the numbers from n to 98.
 * 
 * 2. If the number is greater than 98, it will print all the numbers from n to 98.
 * 
 * 3. If the number is 98 it will print 98.
*/

void print_to_98(int n)
{

	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{

			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	}
	else if (n >= 98)
	{
		for (j = n; j >= 98; j--)

		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
}
