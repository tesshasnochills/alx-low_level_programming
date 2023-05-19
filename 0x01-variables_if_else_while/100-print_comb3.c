#include <stdio.h>

/**
 * main - Prints all combinations of two digits with,
 * and space followed by new line
 *
 *
 * FUNCTONALITY *
 *
 * 1. The outer for loop is used to print the first,
 *      digit of the two digit number.
 * 2. The inner for loop is used to print the second digit,
 *      of the two digit number.
 * 3. The if statement is used to print the comma and space,
 *      after each two digit number except the last two digit number.
 * 4. The putchar() function is used to print the digits and the comma,
 *       and space.
 * 5. The continue statement is used to skip the printing,
 *       of the comma and space after the last two digit number.
 * 6. The putchar('\n') function is used to print
 *		a new line after the last two digit number.
 *
 * Return: returns 0
 */

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);

			if (i == '8' && j == '9')
			{
				continue;
			}

			putchar(',');
			putchar(' ');

		}
	}

	putchar('\n');
	return (0);
}
