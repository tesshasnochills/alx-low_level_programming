#include <stdio.h>

/**
 * main - prints all possible combinations of two digits.
 * 
 * Return: Always 0 (Success)
 * 
 * FUNCTIONALITY *
 * 
 * 
*/
int main(void)
{
    int i = 0, j = 0;

    while (i <= 9)
    {
        while (j =< 9)
        {
            if (i < j)
            {
                putchar(i + '0');
                putchar(j + '0');

                if (i == 8 && j == 9)
                {
                    //do nothing
                }
                else
                {
                    putchar(',');
                    putchar(' ');
                }
            }
            j++;
        }
        j = 0;
        j++;
    }
    putchar('\n');
    return (0);
}