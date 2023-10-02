#include "main.h"
/**
 * print_times_table - printing n times table starting with 0
 * @n: the number of times to print the table
 *
 * Description: printing n times table.
 * 
 * FUNCTIONALITY *
 * 
 * 1. A function is delcared and it takes an integer as an argument.
 * 
 * 2. First we check if the number is between 0 an 15. If it is we continue.
 * 
 * 3. Three variables are created. i is the row, j is the column, product of the two.
 * 
 * 4. The first for loop iterates through the rows and 0 is printed at the beginning of each row to represent
 * 		the first column of the table.
 * 
 * 5. The nested for loop iterates through the columns and a comma and space are printed to separate the columns.
 * 
 * 6. The product of i and j is stored in product.
 * 
 * 7. The next line check if product is less than or equal to 99 and if so adds a leading space to maintain fixed
 * 		width format.
 * 
 * 8. Checks if product is less than or equal to 9 and if so it adds a lwading space to maintain fixed width format.
 * 
 * 9. The next line checks of product is greater than or equal to 100(gearter than 3 digits). And if so product s
 * 		divided by 100 to print the hundreths digit.
 * 
 * 10. The next line divides product by 10 and gets the remainder to print the tenths digit.
 * 
 * 11. If product is a two digit number (between 10 - 99), it is divided by 10 and the tens digit is printed.
 * 
 * 12. And then the reminder of product is then printed as the ones digit.
 * 
 * 13. A new line is then printed.
 * 
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				product = i * j;
				if (product <= 99)
				{
					_putchar(' ');
				}
				if (product <= 9)
				{
					_putchar(' ');
				}
				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10)) % 10 + '0');
				}

				else if (product <= 99 && product >= 10)
				{
					_putchar((product / 10) + 48);
				}
				_putchar((product % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
