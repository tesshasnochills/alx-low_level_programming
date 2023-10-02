#include "main.h"

/**
 * more_numbers - prints numbers, 0 to 14 ten times followed by a new line
 * 
 * FUNCTIONALITY *
 * 
 * 1. The function takes no parameters hence prints the numbers directly. (void)
 * 
 * 2. Integers a and t are declared.
 * 
 * 3. The for loop initializes t to 0 and iterates through the values of t from 0 - 9.
 * 
 * 4. The nested for loop initializes the value of a to zero and iterates through the values from 0 - 14.
 * 
 * 5. If the value of a is greater than 9(meanin it is a 2 digit number), the tens value of the number is printed.
 * 
 * 6. The remainder of the number is then obtained as the ones value of the number and if printed.
 * 
 * 7. A newline character is then printed.
 */
void more_numbers(void)
{
	int a, t;

	for (t = 0; t < 10; t++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}

}
