#include "main.h"
/**
  *main - copies contents of one file to another
  *@argc: the number of arguments
  *@argv: the arguments
  *
  *Return: depends on error status
  */
int main(int argc, char **argv)
{
	int fdto, fdfrom, red, rite;
	char *fileto, *filefrom, *buffer;

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileto = argv[2];
	filefrom = argv[1];
	fdto = open(fileto, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	fdfrom = open(filefrom, O_RDONLY);
	if (fdto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileto);
		exit(99);
	}
	if (fdfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filefrom);
		exit(98);
	}
	buffer = malloc(1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Cannot allocate memory\n");
		exit(12);
	}
	while ((red = read(fdfrom, buffer, 1024)))
	{
		rite = write(fdto, buffer, red);
		if (rite == -1)
			break;
	}
	free(buffer);
	if (rite == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileto);
		exit(99);
	}
	exit(EXIT_SUCCESS);
}
