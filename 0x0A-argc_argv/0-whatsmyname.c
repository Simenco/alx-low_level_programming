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
	if (argc > 0)
	{	
		printf("%s\n", *argv);
	}
	return (0);
}
