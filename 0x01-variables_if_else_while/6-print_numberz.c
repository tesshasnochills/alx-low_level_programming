#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar('0' + a);
		a++;
	}
	putchar('\n');
	return (0);
}
