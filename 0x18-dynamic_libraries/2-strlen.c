#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: lenth of string
 * 
 * FUNCTIONALITY *
 * 1. Strlen calculates the length of a string
 * 
 * 2. char *s is a parameter of the function
 * 
 * 3. i is initialised as an integer
 * 
 * 4. The while loop keeps iteraing as long as the ith index of string s is not the null terminator
 * 
 * 5. i is incremented by one each time the loop runs
 * 
 * 6. After the while loop ends the function returns the value of i
 */
int _strlen(char *s)
{
int i;

i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}
