#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first integer
 * @b: pointer to second integer
 * 
 * FUNCTIONALITY *
 * 1. integer t is intialised
 * 
 * 2. t is equated to *a, *a to *b and *b to t
 * 
 * 3. this ensures swapping of the vlause of the two integers
 *      by interoducing a temporary variable
 */
void swap_int(int *a, int *b)
{
int t;

t = *a;
*a = *b;
*b = t;
}
