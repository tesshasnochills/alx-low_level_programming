#include <stdio.h>

/**
 * main -  entry point
 * 
 * Return: Always 0 (Success)
 * 
 * FUNCTIONALITY *
 * 
 * 1. The first line is a preprocessor command indicated by #.
 * 	 tells the preprocessor to include the contents of the stdio.h header file.
 * 
 * 2. We are printing the size of a char using the sizeof() operator.
 * 
 * 3. We are printing the size of a int using the sizeof() operator.
 * 
 * 4. We are printing the size of a long int using the sizeof() operator.
 * 
 * 5. We are printing the size of a long long int using the sizeof() operator.
 * 
 * 6. We are printing the size of a float using the sizeof() operator.
 * 
 * 7. The return 0 statement is the exit status of the program (Success)
 * 
 * Time complexity: 
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

