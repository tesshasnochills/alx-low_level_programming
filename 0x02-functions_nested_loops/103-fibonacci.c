#include <stdio.h>

/**
 * main - printing all the even sequence of the fibonacci
 *
 * Return: Always  0
 * 
 * FUNCTIONALITY *
 * 
 * 1. The first line initializes unsigned long fib1 fib2 and sum.
 * 
 * 2. A float total_sum is declared
 * 
 * 3. While (1) runs an infinite loop until a break stmt is issued.
 * 		(while 0 means statement will always remain false.)
 * 
 * 4. The sum of fib 1 and fib2 is stored in sum(of previous 2 fibonacci numbers)
 * 
 * 5. if the sum exceeds 4M the while 1 loop is broken.
 * 
 * 6. If sum is an even number, it is added to total_sum
 * 
 * 7. fib 1 is updated to fib2 for the next iteration
 * 
 * 8. fib2 is updated to sum for the next iteration
 * 
 * 9. The total sum is printed as a floating point number with no dp.
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;

	float total_sum;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
		{
			break;
		}

		if (sum % 2 == 0)
		{
			total_sum += sum;
		}

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
