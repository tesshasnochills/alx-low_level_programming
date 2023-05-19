#include <stdio.h>

/**
 * main - prints all possible number combinations of single digit numbers
 *
 * 
 * FUNCTIONALITY *
 * 
 * 	1. Declare an integer variable a and initalize it to 0
 * 	2. A while loop is intialised as long as a is less than 10
 *  3. if so print a as a character value
 *  4. If a is not equal to 9, print a comma then space
 *  5. A is then incremented by 1
 *  6. Print a new line
 *  7. Return 0 indicates successful execution
 * 
 * Return: Always 0 (Success)
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

