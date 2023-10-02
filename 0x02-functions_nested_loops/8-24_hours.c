#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * 
 * FUNCTIONALITY *
 * 
 * 1. The function jack_bauer has no arguments hence will return no value (void).
 * 
 * 2. Integers h and m are declared to represent hours and minutes.
 * 
 * 3. The first nested for loop iterates through h(hours) from 0 - 23 representing a 24hr period.
 * 
 * 4. The second nested for loop iterates though m(minutes) from 0 - 59 representing a 60min period.
 * 
 * 5. The next line prints the tens digit of the hour is printed by taking its remainder and adding the value '0'
 *      to it converting it to ASCII values.
 * 
 * 6. Then the ones digit of the hour is printed by taking its remainder and adding the value '0'
 *      to it converting it to ASCII values.
 * 
 * 7. A colon is printed to separate the hours and minutes.
 * 
 * 8.The next line prints the tens digit of the minutes is printed by taking its remainder and adding the value '0'
 *      to it converting it to ASCII values.
 * 
 * 9. Then the ones digit of the minutes is printed by taking its remainder and adding the value '0'
 *      to it converting it to ASCII values.
 * 
 * 10. A new line is printed to move to the next line of the next minute.
 * 
 * Time Complexity: 
 * 
 */
void jack_bauer(void)
{
    int h;
    int m;

    for (h = 0; h < 24; h++)
    {
        for (m = 0; m < 60; m++)
        {
            _putchar((h / 10) + '0');
            _putchar((h % 10) + '0');
            _putchar(':');
            _putchar((m / 10) + '0');
            _putchar((m % 10) + '0');
            _putchar('\n');
        }
    }
}
