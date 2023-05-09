#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#define BUFFSIZE 1024
/**
  *main - function to copy content of one file to another
  *@argc: the number of parameters passed in
  *@argv: the list of files
  *
  *Return: 0 success
  */
int main(int argc, char **argv)
{
	int fd_from, fd_to, res;
	char *buffer;

	res = 0;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buffer = malloc(BUFFSIZE);
	if (buffer == NULL)
		dprintf(STDERR_FILENO, "Error: Insufficient memory\n");
	while ((res = read(fd_from, buffer, BUFFSIZE)) > 0)
		if (write(fd_to, buffer, res) != res)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can'it close fd %d\n", fd_to);
	return (0);
}
