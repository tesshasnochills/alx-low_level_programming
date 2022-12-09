#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	char tess = 'a';

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	while (tess < 'g')
	{
		putchar(tess);
		tess++;
	}
	putchar('\n');
	return (0);
}
