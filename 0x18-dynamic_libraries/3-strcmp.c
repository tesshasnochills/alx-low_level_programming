#include "main.h"

/**
* _strcmp - compares two strings
* @s1: first string
* @s2: second string
*
* Return: 0 if s1 is equal to s2
* + if s1 is grater then s2
* - if s1 is less than s2
*/
int _strcmp(char *s1, char *s2)
{
	int t, u;

	t = 0;

		for (u = 0; *(s1 + u) != '\0' || *(s2 + u) != '\0'; u++)
		{

			if (*(s1 + u) < *(s2 + u))
			{
				t = *(s1 + u) - *(s2 + u);
				break;
			}

			if (*(s1 + u) > *(s2 + u))
			{
				t = *(s1 + u) - *(s2 + u);
				break;
			}
		}

		return (t);
}
