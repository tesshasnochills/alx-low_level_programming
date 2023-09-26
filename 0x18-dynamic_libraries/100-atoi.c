#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: string to convert
*
* Return: integer. If there is no integer return 0
*/
int _atoi(char *s)
{
	int sign;
	int i;
	unsigned int n;

	sign = 1;
	n = 0;

		for (i = 0; *(s + i) != '\0'; i++)
		{
			if (n > 0 && !(*(s + i) >= '0' && *(s + i) <= '9'))
			{
				break;
			}
			if (*(s + i) >= '0' && *(s + i) <= '9')
			{
				n = (n * 10) + (*(s + i) - '0');
			}
			if (*(s + i) == '-')
				sign = sign * -1;
		}
		return (sign * n);
}
