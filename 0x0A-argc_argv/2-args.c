#include "main.h"
#include <stdio.h>

/**
* main - prints all the arguments it receives
* @argc: counts the arguments received
* @argv: is an array of arguments
*
* Return: Always success(0)
*/
int main(int argc, char **argv)
{
	int t;

	for (t = 0; t < argc; t++)
		{
			printf("%s\n", argv[t]);
		}
	return (0);
}
