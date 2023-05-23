#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

int main()
{
	srand(time(NULL));  // Seed the random number generator with the current time

	char password[PASSWORD_LENGTH + 1];  // +1 for the null terminator
	int i;

	for (i = 0; i < PASSWORD_LENGTH; i++)
		{
		int randomChar = rand() % 62;  // Generate a random number between 0 and 61

		if (randomChar < 26)
			{
			// If the random number is less than 26, map it to a lowercase letter
			password[i] = 'a' + randomChar;
		} else if (randomChar < 52)
		{
			// If the random number is between 26 and 51, map it to an uppercase letter
			password[i] = 'A' + (randomChar - 26);
		} else
				{
			// If the random number is between 52 and 61, map it to a digit
			password[i] = '0' + (randomChar - 52);
			}
	}

	password[PASSWORD_LENGTH] = '\0';  // Add null terminator to the end of the password

	printf("Generated Password: %s\n", password);

	return (0);
}

