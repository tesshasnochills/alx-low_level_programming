#include <stdio.h>

/**
 * main - printing all possible combinations of a three digit number
 * 
 * FUNCTIONALITY*
 * 1. int i, j and k are declared as integers
 * 2. A for loop that iterates over values of i from 0-9
 * 3. A nested loop that iterates over values of j from 0-9
 * 4. The second nested for loop that iterates over values of k from 0-9
 * 5. I,j and k are printed using putchar
 * 6. The if loops checks if the values of i.j.k are true,
 * 		and if true the program continues.
 * 7. A comma and space are printed next using putchar if step 6 is untrue.
 * 8. The loops continue until the condition is false (<=9)
 * 9. A new line is printed and return 0 signifies successful program execution.
 * 
 * 
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i == '7' && j == '8' && k == '9')
				{
					continue;

				}

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
