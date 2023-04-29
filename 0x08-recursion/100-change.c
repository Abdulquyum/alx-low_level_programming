#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to change for amount of money
 *
 * @argc: parameter for argument count
 * @argv: parameter for argument vector
 *
 * Return: Always zero.
 */
int main(int argc, char *argv[])
{
	int cents, convert_coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 1)
		return (0);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;

		else if (cents >= 10)
			cents -= 10;

		else if (cents >= 5)
			cents -= 5;

		else if (cents >= 2)
			cents -= 2;

		else if (cents >= 1)
			cents -= 1;

		convert_coin += 1;
	}
	printf("%d\n", convert_coin);

	return (0);
}
