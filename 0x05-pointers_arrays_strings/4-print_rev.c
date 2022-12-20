#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to be printed
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
