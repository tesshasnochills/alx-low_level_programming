#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * 
 * FUNCTIONALITY *
 * 1. Variables a and b are initialised as integers.
 * 2. They are then assigned values.
 * 3. 
 * 
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
