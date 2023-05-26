#include "main.h"

/**
 * _islower - checks for lowercase characters.
 *@c: character to check
 *
 * FUNCTIONALITY *
 * 1. C is initialised as an integer in the function
 * 
 * 2. C is used as a loop variable in the if loop
 * 
 * 3. The if loop runs as long as c is in range(96, 124)
 * 
 * 4. if true the program retruns 1
 * 
 * 5. else it returns 0
 * 
 * Return: 1 if lowercase, 0 if otherwise.
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
