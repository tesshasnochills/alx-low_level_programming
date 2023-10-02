#include <stdio.h>

/**
 * main - prints sum of all natural numbers that are the sum of 3 and 5
 *
 * Return: Always success(0)
 * 
 * FUNCTIONALITY *
 * 
 * 1. An integer i is declared and variable sum is initialized to 0.
 * 
 * 2. The first for loop iterates through i form 0 to 1023
 * 
 * 3. If the number is divisible by three or five, the value is added to the sum hence accumulating the sum of all the numbers(i).
 * 
 * 4. Sum is then printed as an int and 0 is returned meaning successful execution.
*/
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}
