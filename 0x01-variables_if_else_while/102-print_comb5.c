#include <stdio.h>

/**
 * main - entry point
 * 
 *  FUNCTIONALITY *
 * 1. Integers i and j are declared.
 * 
 * 2. The outermost for loop initializes i to zero and iterates values 0-99
 * 
 * 3. The nested for loop does the step to but for j
 * 
 * 4. Next it checks the values of i and j and prints them
 * 
 * 5. The if statement then checks if the values of i and j are 98 and 99 respectively
 * 
 * 6. It then prints a comma and a space if condition in 5 isnt satisfied.
 * 
 * 7. A new line is printed and return 0 signifies successful program execution
 *
 * Return: Always success (0)
*/

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar (' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i == 98 && j == 99)
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
