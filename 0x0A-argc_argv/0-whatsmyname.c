#include "main.h"
/**
* main - prints the name of the program
*
* @argc: counts the number of arguments
* @argv: is an array of arguments
*
* Return: Always success(0)
*/
int main(__attribute__((unused)) int argc, char **argv)
{
	int t;

	for (t = 0; (*argv[0] + t) != '\0'; t++)
	{
		_putchar(*(argv[0] + t));
	}
	_putchar('\n');

	return (0);
}
