#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 * 
 * FUNCTIONALITY *
 * 
 * 	1. An integer value a is declared and initialised to 0
 * 
 * 	2. The while loop iterated through the numbers 0 to 9.
 * 
 * 	3. Inside the loop the printf() function is called,
 * 		to output the current value of a using the %d format specifier.
 * 
 * 	4. A is then incremented by 1.
 * 
 * 	5. A newline is primted onto the console and the program returns 0,
 * 		signifying the end of the main() program.
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}
