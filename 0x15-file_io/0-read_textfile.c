#include "main.h"

/**
 * read_textfile - the function reads a textfile and prints to stdout
 * @filename: the text file
 * @letters: number of letters it should read and print
 * Return: size of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_r, n_w;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	n_r = read(fd, buf, letters);
	n_w = write(fd, buf, n_r);
	
	if (fd == -1 || n_r == -1 || n_w == -1 || n_w != n_r)
	{
		free(buf);
		return (0);
	}
	free(buffer);
	close(fd);

	return (num_written);
}
