#include <stdio.h>

/**
 * main - prints all alphabet except q and e in lowercase
 *
 * Return: Always 0 (Success)
 * 
 *	FUNCTIONALITY *
 * 	1. The program begins with a main function, as it should.
 * 
 * 	2. A character variable alphabet is initialised to 'a'
 * 
 * 	3. The while loop iterates through the variable as long as the condition is satisfied,
 * 		if the letter is equal to e or q, it increments by 1.
 * 
 * 	4. If not, the outchar function is called and prints the letter onto the console.
 * 
 * 	5. After all the letters are printed, the program prints a newline character,
 * 		using putchar and returns 0.
 * 
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
