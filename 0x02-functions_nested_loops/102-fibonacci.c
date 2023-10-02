#include <stdio.h>

/**
 * main - printing the first 50 fibonacci numbers
 *
 * Return: Always success(0)
 * 
 * FUNCTIONALITY *
 * 
 * 1. An integer count is declared(keep track of loop iteration), as well as unsigned long
 * 		fib1 fib2 and sum(store the fibonacci numbers).
 * 
 * 2. The for loop iterates through count from 0 - 49.
 * 
 * 3. The next line calculated the sum of the previous 2 fibonacci numbers and stores the value in sum
 * 
 * 4. The sum is then printed.
 * 
 * 5. The following line updates fib1 to the value of fib2 for the next iteration.
 * 
 * 6. The next line updates fib2 to sum for the next iteration.
 * 
 * 7. Within the for loop there is an if statement to determine whether to print a comma
 * 		and space or a new line character after each fibonacci number.
 *	  When count is 49 it prints a new line if not if prints a space and comma.(separates numbers)
*/
int main(void)
{
	int count;

	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
