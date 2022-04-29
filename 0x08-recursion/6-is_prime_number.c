#include "main.h"

/**
 * is_prime - checks for prime number
 * @n: number to check
 * @i: iterator
 * Return: returns 1 if number is prime and 0 if otherwise
 */

int is_prime(unsigned int n, unsigned int i)
{
	if ((n % i) == 0)
	{
		if (n == i)
			return (1);
		return (0);
	}
	return (0 + is_prime(n, i + 1));
}

/**
 * is_prime_number - detects if an input is prime
 * @n: input number
 * Return: 1 if prime, 0 if not prime
 */

int is_prime_number(int n)
{
	if ((n <= 0) || (n == 1))
		return (0);
	return (is_prime(n, 2));
}
