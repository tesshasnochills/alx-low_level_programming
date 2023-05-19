#include <stdio.h>

/**
 * main - printing prime numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long x, number = 612852475143;

	for (x = 2; x <= number; x++)
	{
		if (number % x == 0)
		{
			number = number / x;
			x--;
		}
	}
	printf("%lu\n", x);
	return (0);
}
