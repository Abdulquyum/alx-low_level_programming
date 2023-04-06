#include "main.h"

int primeNum(int n, int q);

/**
 * is_prime_number - recognizes prime numbers
 *
 * @n: parameter for number paased
 *
 * Return: Returns prime number value.
 */
int is_prime_number(int n)
{
	return (primeNum(n, 1));
}
/**
 * primeNum - identifies prime number
 *
 * @n: parameter for number passed for check
 * @q: parameter for iteration
 *
 * Return: Return 1 if input's prime number, else 0.
 */
int primeNum(int n, int q)
{
	if (n <= 1)
		return (0);
	if (n % q == 0 && q > 1)
		return (0);
	if ((n / q) < q)
		return (1);
	return (primeNum(n, q + 1));
}
