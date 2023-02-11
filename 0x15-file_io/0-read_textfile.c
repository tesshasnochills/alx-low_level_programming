#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
* read_textfile - reads the text file and prints it
* to the POSTIX standard output
* @filename: is the path to the file
* @letters: number of letters it should read and print
*
* Return: the actual number of letters it could read and print
* if the file cannot be opened return 0
* if filename is NULL return 0
* if write fails or doeant return the expected amount of bytes, return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t printed, characters;
	int fd;
	char *content;

	content = malloc(sizeof(char) * letters);

	if (content == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	characters = read(fd, content, letters);

	if (characters == -1)
		return (0);

	printed = write(STDOUT_FILENO, content, letters);

	if (printed == -1)
		return (0);

	close(fd);
	return (printed);
}
