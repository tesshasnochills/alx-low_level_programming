#include "main.h"

/**
 * more_numbers - prints numbers, 0 to 14 ten times followed by a new line
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
