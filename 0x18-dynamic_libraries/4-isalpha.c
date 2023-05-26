#include "main.h"

/**
 * _isalpha - checks for alpabetic characters.
 * @c: character to check.
 *
 * FUNCTIONAITY *
 * 1. Int c is initialised in the function
 * 
 * 2. C is used as a loop variable in the if loop
 * 
 * 3. The loop runs as long as c remians in the range(96, 124) && (64,92)
 * 
 * 4. returns 1 if true , and if not 0
 * 
 * Return: 1 if lowercase or uppercase, 0 if otherwise.
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	return (0);
}
