#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int total;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);

	if (total < 0) {
		printf("0\n");
		return 0;
	}


	int i;
	int coins[] = {25, 10, 5, 2, 1};
	int coin_count = 0;

	for (i = 0; i < sizeof(coins) / sizeof(coins[0]); i++)
	{
		int result = total / coins[i];
		coin_count += result;
		total -= result * coins[i];
	}

	printf("%d\n", coin_count);

	return 0;
	}
