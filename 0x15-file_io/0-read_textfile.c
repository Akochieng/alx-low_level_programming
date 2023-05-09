#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
  *read_textfile - reads a text file and prints it to the std output
  *@filename: the name of the file
  *@letters: the number of letters that should be read and printed
  *
  *Return: 0 for failure or number of files written
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t num;

	num = 0;
	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!(buffer))
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	num = read(fd, buffer, letters);
	if (!(write(STDOUT_FILENO, buffer, num) == num))
		return (0);
	free(buffer);
	close(fd);
	return (num);
}
