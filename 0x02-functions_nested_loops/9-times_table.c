#include "main.h"

/**
 * times_table - prints the 9 times table starting with zero.
 *
 * Return: Always success(0)
 * 
 * FUNCTIONALITY *
 * 
 * 1. The first statement is a preprocessor command telling it to access contents of the header file.
 * 
 * 2. Integers I,J,K are delared.
 * 
 * 3. The first nested loop iterates through the value of i from 0 - 9
 * 
 * 4. The second nested loop iterated throught the value of j from 0 - 9
 * 
 * 3. The variable k is assigned a value which is the multiple of i and j
 * 
 * 4. The code then checks if the value fo j is zero. If so, k is printed(using putchar) which is zero,
 * 		as i * 0 will always be zero. (this prints the diagonal zeros in the times table)
 * 
 * 5. If j is not equal to zero, a comma and 2 spaces followed by the value of k are printed.
 * 		If k is less than 10 it is printed as a single digit.
 * 
 * 6. If k is greater than or equal to 10, a comma, 2 spaces folowed by the two digits of k are printed.
 * 
 * 7. After each row for the table a new line is printed.
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = j * i;

			if (j == 0)
			{
				_putchar(k + '0');
			}
			if (k < 10 && j != 0)
			{

				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10)
			{

				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
