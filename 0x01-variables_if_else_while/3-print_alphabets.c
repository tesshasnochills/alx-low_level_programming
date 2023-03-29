#include <stdio.h>

/**
 * main - prints alphabet in lowercase then uppercase
 *
 * Return: Always 0 (Success)
 * 
 * FUNCTIONALITY *
 * 	1. A character variable lowecase is initialised to character a.
 * 
 * 	2. A character uppercase is initialised to chatacter A.
 * 
 * 	3. The while loop iterates through the lowercase letters,
 * 		as long as the characters are lower then z.
 * 
 * 	4. The putchar function is called with 'lowercase' as the argument,
 * 		and outputs every character onto the screen.
 * 
 * 	5. The lowercase letter variable increments by 1.
 * 
 * 	6. Another while loop iterates through the uppercase characters,
 * 		as long as the condition that the characters are less then Z are satisfied.
 * 
 * 	7. The putchar function is called with uppercase as the function,
 * 		and prints the characters onto the screen.
 * 
 * 	8. The uppercase variable increments by 1.
 * 
 * 	9. A new line is printed and the main function terminates after the program returns 0.
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}




