#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, q;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	q = n % 10;
	if (q > 5)
		printf("%s %d is %d and is greater than %d\n", str, n, q, 5);
	else if (q == 0)
		printf("%s %d is %d and is %d\n", str, n, q, 0);
	else if (q < 6 && q != 0)
		printf("%s %d is %d and is less than %d and not %d\n", str, n, q, 6, 0);
	return (0);
}
