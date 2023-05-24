#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to be printed
 * 
 * FUNCTIONALITY *
 * 1. The function print_rev prints a string in reverse
 * 
 * 2. char * s is a parameter taken
 * 
 * 3. Integer variables t and len are declared
 * 
 * 4. Len is intialised to 0, it will store the length of the string
 * 
 * 5. The for loop iterates through s using t as a counter and conitnues until,
 *      s + t is not the null terminator
 * 
 * 6. the length and t are incremented by 1 each time the loop runs
 * 
 * 7. the next for loop is to print the characters in reverse order
 * 
 * 8. it starts from len - 1 which is the last character of the string
 * 
 * 9. it continues until t becomes zero (dectements t along the way)
 * 
 * 10. with each iteration s + t is printed
 * 
 * 11. after the sring is printed a new line is printed
 */
void print_rev(char *s)
{
    int t;
    int len;

    len = 0;

    for (t = 0; *(s + t) != '\0'; t++)
    {
        len++;
    }

    for (t = len - 1; t >= 0; t--)
    {
        _putchar(*(s + t));
    }
    _putchar('\n');
}
