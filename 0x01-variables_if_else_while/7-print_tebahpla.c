#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 * 
 * FUNCTIONALITY *
 * 	1. Declare a variable called letter and initialise to z.
 * 	2. While the letter in greater than or equal to a,
 * 		print the letter onto the console.
 * 	3. Decrement the value of the letter by 1.
 * 	4. Print a newline character.
 * 	5. Return 0.
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
