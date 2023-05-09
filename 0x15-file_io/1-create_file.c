#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
/**
  *create_file - create a file with permission 0600
  *@filename: name of the file
  *@text_content: the content to be printed to the file
  *
  *Return: the number of characters writen to the file
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (0);
	len = _strlen(text_content);
	if (len > 0)
		if (write(fd, text_content, len) == -1)
			return (-1);
	close(fd);
	return (1);
}
/**
  *_strlen - gets the length of a string
  *@s: the string
  *
  *Return: len of string
  */
size_t _strlen(char *s)
{
	size_t len = 0;

	if (s == NULL)
		return (0);
	while (*s++)
		len++;
	return (len);
}
