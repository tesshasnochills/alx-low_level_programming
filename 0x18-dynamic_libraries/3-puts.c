#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: string to print
 * _putchar - prints characters
 * 
 * FUNCTIONALITY *
 * 1. the function declares puts that pritns a string
 * 
 * 2. char *str is taken as a parameter
 * 
 * 3. An integer variable t is declared
 * 
 * 4. The for loop continues iterating as long as the str + t char is not the null terminator
 * 
 * 5. t is incremented by on eeach time the loop runs
 * 
 * 6. str + t is printed each time the loop runs
 * 
 * 7. when the loop ends a new line if printed
 */
void _puts(char *str)
{
    int t;

    for (t = 0; *(str + t) != '\0'; t++)
    {
        _putchar(*(str + t));
    }
    _putchar('\n');
}
