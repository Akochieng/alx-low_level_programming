#include "main.h"
/**
  *read_textfile - reads character letters from file filename and prints
  *on standard output
  *@filename: the name of the file
  *@letters: the number of letters to be read and printed
  *
  *Return: -1 on failure or number of characters read and printed
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t red;
	ssize_t rite;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	red = read(fd, buffer, letters);
	if (red == -1)
	{
		free(buffer);
		return (0);
	}
	rite = write(STDOUT_FILENO, buffer, red);
	if (rite == -1 || rite != red)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (rite);
}
