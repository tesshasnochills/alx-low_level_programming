#include <stdio.h>

/**
 * main - file entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *t = "_putchar";

	while (*t)
	{
		putchar(*t);
		t++;
	}

	putchar('\n');


	return (0);
}
