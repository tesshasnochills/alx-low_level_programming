#include <stdio.h>

/**
 * main - file entry point
 * 
 * FUNCTIONALITY *
 * 1. Character t is initialised to point to the string
 * 
 * 2. A while loop is entered which continues as long as char pointed by t != '\0'
 * 
 * 3. The loop uses putchar to print the character pointed to by t
 * 
 * 4. T is incremented by 1 so as to point to the next character in the string.
 * 
 * 5. The loop contiues until the null character is reached
 * 
 * 6. Once the loop ends a new line is printed and return 0 signifies successful program execution.
 * 
 * 
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *t = "_putchar";

	while (*t)
	{
		putchar(*t);
		t++;
	}

	putchar('\n');


	return (0);
}
