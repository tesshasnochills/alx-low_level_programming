#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#define BUFF 1024

/**
* FILE_ - is the struct to hold length and content for new file
* @content: the string to add to the file
* @length: lenth of content
*/
typedef struct File_s
{
	char *content;
	size_t length;
} File_t;

#endif /* MAIN_H */
