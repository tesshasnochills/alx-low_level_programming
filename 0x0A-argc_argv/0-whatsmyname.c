#include "main.h"
#include <stdio.h>
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
	printf("%s\n", *argv);

	return (0);
}
