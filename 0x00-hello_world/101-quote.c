#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 *
 * -FUNCTIONALITY-
 * 1. the program is entered through main
 * 2. p is initialised and is assigned an array of characters
 * 3. i is initialised as the index of the chatacters in the array
 * 4. the for loop starts and i is initialised to 0 
 * 5. a condition is stated whereas as long as p + i is not equal to the null character,
 * 	one is added to i every time the loop runs
 * 6. putchar prints each character as the loop runs *(p + i)
 * 7. then a new line is printed
 * 8. THEN THE RETURN FUNCTION
 */
int main(void)
{
	char *p = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0; *(p + i) != '\0'; i++)
	{
		putchar(*(p + i));
	}
	putchar('\n');
	return (1);
}

