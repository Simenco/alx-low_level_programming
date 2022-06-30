#include <stdio.h>

void __attribute__((constructor)) print_str(void);

/**
 * print_str - this function prints some strings
 *
 * Return: void
 */

void print_str(void)
{
	printf("You're beat! and yet, you must allow,\n");
		printf("I bore my house upon my back!\n");

}
