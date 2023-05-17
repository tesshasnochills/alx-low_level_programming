#include "main.h"
#include <stdio.h>

/**
 * main - entry point of the program
 * 
 * FUNCTIONALITY *
 * 1. Variable n is declared as an integer
 * 2. N is assigned a value, 402
 * 3. The value of n is printed
 * 4. reset to 98 resets the value of what the address of n stores
 * 5. The reset is printed
 * 
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
    }
