#include <stdio.h>

/**
 * main - prints all base 16 numbers in lowecase
 *
 * Return: Always 0 (Success)
 * 
 * FUNCTIONALITY *
 * 
 * 	1. Declare in integer variable a and initialize it to 0.
 * 
 * 	2. Declare a character variable tess and intialize it to a.
 * 
 * 	3. While a is less than 10:
 * 		a.Print the value of a plus '0'
 * 		b.Increment the value by 1.
 * 
 *  4. A while loop is runn for chars less than g
 * 
 * 	5. Print the value of tess.
 * 
 * 	6. Increment tess by 1.
 * 
 * 	7. Print a newline character
 * 
 * 	8. Return 0
 */
int main(void)
{
	int a = 0;
	char tess = 'a';

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	while (tess < 'g')
	{
		putchar(tess);
		tess++;
	}
	putchar('\n');
	return (0);
}
