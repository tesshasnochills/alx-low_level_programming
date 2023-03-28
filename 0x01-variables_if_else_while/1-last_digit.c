#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 * 
 *	FUNCTIONALITY *
 * 	1.	Main is the entry point for any program
 * 	
 * 	2.	Integers n and last are initialised.
 * 
 * 	3.	srand(time(0)) is used to seed the random number,
 * 		time(0) returns the current time that is a unique value,
 * 		that is used to seed the random number.
 * 
 * 	4.	line 30 is used to generate a random number between [-RAND_MAX \ 2 , +RAND_MAX \ 2 ]
 * 		that has a max value.
 * 		
 * 	5.	to get the last digit of the number, modulus 10 is performed.
 * 
 * 	6.	And the corresponding strings are printed using printf depending on the number.
 * 
 * 	7. The function returns 0 signifying the end of the main() function.
 * 
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	return (0);
}

