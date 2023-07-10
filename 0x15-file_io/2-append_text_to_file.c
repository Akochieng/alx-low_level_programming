#include "main.h"
/**
  *append_text_to_file - appends text to a file
  *@filename: the name of the file
  *@text_content: the text
  *
  *Return: 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int num, rite;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	num = _strlen(text_content);
	if (num == 0)
	{
		close(fd);
		return (1);
	}
	if (num > 0)
		rite = write(fd, text_content, num);
	if (rite == -1)
		return (-1);
	close(fd);
	return (1);
}
/**
  *_strlen - computes the length of a string
  *@s: the string
  *
  *Return: the length of the string
  */
size_t _strlen(char *s)
{
	size_t len = 0;

	if (s != NULL)
		for (len = 0; s[len] != '\0'; len++)
			;
	return (len);
}
