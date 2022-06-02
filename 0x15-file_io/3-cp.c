#include "main.h"

/**
 * close_f - to close file and write error msg
 * @fd: file descriptor
 * desc: a simple function to clode fd
 * Return: void
 */

void close_f(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - entry point
 * @argc: argument count
 * @argv: values of argument
 *
 * Return: return ) on success
 */

int main(int argc, char *argv[])
{
	char *buf;
	int fd1, fd2;
	int r;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[2])
	{
		fd1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	}
	if (!(argv[1]))
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[1], O_RDONLY);
	r = read(fd2, buf, 1024);
	if (fd2 == -1 || r == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		free(buf);
		exit(99);
	}
	close_f(fd1);
	close_f(fd2);
	return (0);
}
