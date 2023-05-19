#include <stdio.h>

/**
 * main - prints sum of all natural numbers that are the sum of 3 and 5
 *
 * Return: Always success(0)
*/
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}
