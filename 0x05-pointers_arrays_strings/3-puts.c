#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str - string to print
 */
void _puts(char *str)
{
  int t;

  for (t = 0; *(str + t) =! '\0'; t++)
  {
    _putchar(*(str + t));
  }
  _putchar('\n');
}
