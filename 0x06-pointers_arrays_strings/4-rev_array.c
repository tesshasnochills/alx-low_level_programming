#include "main.h"

/**
* reverse_array - reverses the contents of an array
* @a: array of integers
* @n: number fo elements to swap
*/
void reverse_array(int *a, int n)
{
	int t, j;

		for (t = 0; t < n / 2; t++)
		{
			j = *(a + t);
			*(a + t) = *(a + (n - (t + 1)));
			*(a + (n - (t + 1))) = j;
		}
}
