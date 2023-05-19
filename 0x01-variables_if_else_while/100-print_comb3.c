#include <stdio.h>

/**
 * main - prints all possible combinations of two digits.
 * 
 * 
 * FUNCTIONALITY *
 * 1. Variables i and j are initialized to 0
 * 2. A while loop is used to iterate through the values,
 *      of i and j from 0 to 9
 * 3. A nested if loop checks if i is less than j
 * 4. If it is i and j are printed as their corresponding character values
 * 5. Another nested if loop checks is i=8 and j=9,
 *      If true do nothing
 * 6. if not, print a comma followed by a space
 * 7. J is incremented by one
 * 8. Steps 3-7 are repeated until j<=9 becomes false
 * 9. After that nested loop ends, j is set to 0,
 *      and incremented by one.
 * 10. A new line is printed and O is returned,
 *      signifying successful execution.
 * 
 * Return: Always 0 (Success)
*/
int main(void)
{
    int i = 0, j = 0;

    while (i <= 9)
    {
        while (j <= 9)
        {
            if (i < j)
            {
                putchar(i + '0');
                putchar(j + '0');

                if (i == 8 && j == 9)
                {
                    /*do nothing*/
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