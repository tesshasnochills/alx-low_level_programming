#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'e' || alphabet == 'q')
		{
			alphabet++;
		}
		else
		{
			putchar(alphabet);
			alphabet++;
		}
	}
	putchar('\n');
	return (0);
}
