#include "main.h"
/**
  *create_file - creates a file filename and writes text_content to it
  *@filename: the name of the file
  *@text_content: the text
  *
  *Return: 1 on success or -1 otherwise
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t num;
	int rite;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	num = _strlen(text_content);
	rite = write(fd, text_content, num);
	if (rite == -1)
		return (-1);
	close(fd);
	return (1);
}
/**
  *_strlen - finds the length of a string
  *@s: the string
  *
  *Return: the length of the string
  */
size_t _strlen(char *s)
{
	size_t len = 0;

	if (!(s == NULL))
	{
		for (len = 0; s[len] != '\0'; len++)
			;
	}
	return (len);
}
