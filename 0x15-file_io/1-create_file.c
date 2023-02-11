#include "main.h"

/**
* create_file - creates a file
* The created file must have the permissions rw-------.
* if the file already exists, do not change the permissions.
* if the file already exitsts, truncate it
* if text_content is NULL create and empty file.
* if filename is NULL, return -1.
* @filename: name of file to create
* @text_content: NULL terminated string to write into the file
*
* Return: 1 if successful , -1 if it fails
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;
	ssize_t bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT, __S_IREAD | __S_IWRITE);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	else
	{
		bytes = 0;

		while (text_content && text_content[bytes++])
			;
	}
	written = write(fd, text_content, bytes - 1);

	if (written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (-1);
}
