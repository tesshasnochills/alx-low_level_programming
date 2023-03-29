#include <stdio.h>

/**
 * main - prints all possible number combinations of single digit numbers
 *
 * Return: Always 0 (Success)
 * 
 * FUNCTIONALITY *
 * 
 * 	1. Declare an integer variable a and initalize it to 0
 * 	2. 
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}

	putchar('\n');
	return (0);
}

