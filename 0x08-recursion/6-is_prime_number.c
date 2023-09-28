#include "main.h"
int real_prime(int n, int i);
/**
 * is_prime_number - Determine if the value supplied is a prime number
 * @n: Input
 * Return: 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 * real_prime - calculates the prime number
 * @n: number
 * @i: iterator
 * Return: 1 for prime numbers and 0 for others
 */
int real_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime(n, i - 1));
}
