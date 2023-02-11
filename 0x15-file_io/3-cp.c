#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>

#include "main.h"

/**
* write_file - writes to a file
* @filename: name of the file to write to
* @file: content towrite on the file
*
* Return: void
*/
void write_file(char *filename, File_t *file)
{
	int fd;

	fd = open(filename, O_WRONLY | O_CREAT,
					 S_IRUSR | S_IRGRP | S_IROTH | S_IWUSR | S_IWGRP);

	write(fd, file->content, file->length);

	close(fd);
}

/**
* read_file - reads the contents of a file
* @filename: the name of the file
*
* Return: contents of the file
*/
File_t *read_file(char *filename)
{
	ssize_t characters;
	int fd;
	File_t *file;

	file = malloc(sizeof(File_t));
	file->content = malloc(BUFF);

	fd = open(filename, O_RDONLY);
	characters = read(fd, file->content, BUFF);
	file->length = (size_t)characters;

	close(fd);
	return (file);
}

/**
* main - is a profram that copies content of one file to another
* @argc: count of command line arguments
* @argv: pointer to the list of programs
*
* Return: Always 0(Success)
*/
int main(int argc, char **argv)
{
	char *file_from, *file_to;
	File_t *file;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	file = read_file(file_from);
	write_file(file_to, file);

	free(file->content);
	free(file);
	return (0);
}
