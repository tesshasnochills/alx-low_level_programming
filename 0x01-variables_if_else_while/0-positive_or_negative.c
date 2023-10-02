#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks for positivity of random number
 *
 * Return: Always 0 (Success)
 * 
 * FUNCTIONALITY *
 * 
 *	1.	The library stdlib.h contains function rand(),
 * 		that generates a random number then determines if its positive or negative.
 * 
 * 	2.	srand(time(0)) is used to seed the random number.
 * 		the time(0) fxn returns the current time, that is a unique value,
 * 		that can be used to seed the random number generator.
 * 
 * 	3.	Rand() generates a random integer, and RANDMAX is a macro constant,
 * 		that reps the max value that rand can return.
 * 
 * 	4.	rand() - RAND_MAX/2 is used to shift the range of random numbers to [-RAND_MAX\2 , +RAND_MAX\2],
 * 		which are numbers centered around 0.
 * 
 * 	5.	n is checked for positivity or negativity.
 * 		and 0 is returned.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
