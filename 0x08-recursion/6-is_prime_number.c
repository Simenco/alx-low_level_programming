#include "main.h"

/**
 * is_prime_number - checks for prime number
 * @n:number to check
 * Return: returns 1 if number is prime and 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n == 1)
		return (1);
	if (((n % 2) != 0) && ((n % 3) != 0))
		return (1);
	return 0;
}
