#include <stdio.h>

/**
 * main - 
 *
 * Return: Always 0 (Success)
 * 
 * FUNCTIONALITY *
 * 
 * 	1. The program begins with a main function.
 * 
 * 	2. An integer variable a is initalised to 0
 * 
 * 	3. While the variable digit is less than or equal to 9, do:
 * 			a. Print the value of '0' plus the current integer variable
 * 			b. Increment the variable digit by 1.
 * 
 * 	4. Print a newline character
 * 
 * 	5. Return 0
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
