#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a - value of the first integer
 * @b - value of the second integer
 */
void swap_int(int *a, int *b)
{
  int t;

  t = *a;
  *a = *b;
  *b = t;
}
