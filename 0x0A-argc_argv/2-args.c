#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of the content of arguments
 * Return: int 0 on success
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);
	return (0);
}
