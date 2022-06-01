#include "main.h"

/**
 * append_text_to_file - the function does what the name says
 * @filename: the text file
 * @text_content: text to append
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, _strlen = 0;
	ssize_t w;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (_strlen = 0; text_content[_strlen];)
			_strlen++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, _strlen);

	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
