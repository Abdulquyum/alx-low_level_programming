#include "main.h"

/**
 * is_prime - helping function to get prime number
 *
 * @num: nth passed
 * @div: divisor
 *
 * Return: help to other prime function
 */
int is_prime(int num, int div)
{
	if (div == 1)
		return (1);

	if (num < 2)
		return (0);

	if (num == 2)
		return (1);

	if (num % div == 0)
		return (0);

	return (is_prime(num, div));
}

/**
 * is_prime_number - main prime function
 *
 * @n: parameter for nth number
 *
 * Return: prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime(n, (n * n)));
}
