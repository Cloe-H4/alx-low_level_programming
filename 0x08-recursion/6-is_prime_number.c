#include "main.h"

int prime(int n, int z);
int is_prime_number(int n);
/**
 * prime - checks if numbers greater than 1 are prime
 * @n: inputted number
 * @z: number for checking
 *
 * Return: 1 if n is prime
 * 0 if n is not prime.
 */

int prime(int n, int z)
{
	if (n == z)
		return (1);
	else if (n % z == 0)
		return (0);
	else if (n % z != 0)
		return (prime(n, z + 1));
}

/**
 * is_prime_number - checks if input is prime
 * @n: inputted number
 *
 * Return: 1 if prime
 * 0 if not
 */

int is_prime_number(int n)
{
	int z = 2;

	if (n < 2)
		return (0);
	return (prime(n, z));
}
