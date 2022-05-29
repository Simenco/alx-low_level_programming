#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2005-10-19\n";

	fwrite(quote, 59, 1, stderr);
	return (1);
}
