#include "main.h"

/**
 * main - this program prints the alphabet, in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
