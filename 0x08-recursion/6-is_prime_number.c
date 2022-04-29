#include "main.h"

/**
 * is_prime_number - checks for prime number
 * @n:number to check
 * Return: returns 1 if number is prime and 0 if otherwise
 */

int is_prime_number(unsigned int n)
{
	if (((n % 2) != 0) && ((n % 3) != 0))
		return (1);
	return (0);
}
