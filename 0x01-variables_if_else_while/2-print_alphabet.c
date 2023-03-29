#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 * 
 * FUNCTIONALITY *
 * 	1. The header file stdio caters for the putchar, while and return.
 * 
 * 	2. Every program stats with a main function.
 * 
 * 	3. Char variable letter is declared and initialised to character a
 * 
 * 	4. The while loop itterates through the letters until it reaches z
 * 
 * 	5. The putchar function is called with "letter" as the argument,
 * 		it outputs each single character into the screen
 *	
 *	6. The letter variable increments by 1
 *
 *	7. After the while loop, a newline is printed onto the console,
		The main() function ends after the program returns 0
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
