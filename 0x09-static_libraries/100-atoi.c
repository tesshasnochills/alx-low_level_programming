#include "main.h"

/**
* _atoi - converts strings to integers
* @s: string to check
*
* Return: 0 if there is no integer
*/
int _atoi(char *s)
{
	int sign, i;
	unsigned int n;

	sign = 1;
	n = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (n > 0 && !(*(s + i) >= '0' && *(s + i) <= '9'))
			break;

		if (*(s + i) >= '0' && *(s + i) <= '9')
			n = (n * 10) + (*(s + i) - '0');

		if (*(s + i) == '-')
			sign = sign * -1;
	}

	return (sign * n);
}
