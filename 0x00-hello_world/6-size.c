#include <stdio.h>

/**
 * main -  entry point
 * 
 * Return: Always 0 (Success)
 * 
 * -FUNCTIONALITY-
 * - the piece of code uses the sizeof function (during compile time),
 * to compute the sixe of its operand.
 * - the result is an unsigned int and is denoted by size_t
 *  
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

	return (0);
}

