#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always )
 */
int main(int argc, char *argv[])
{
	int q, result = 0;

	if (argc == 1)
		printf("%d\n", 0);

	for (q = 2; q <= argc; q++)
	{
		if (*argv[q] >= 'a' && *argv[q] <= 'z')
		{
			printf("Error\n");
			return (1);
		}
		else
			result += atoi(argv[q]);
	}

	printf("%d\n", result);

	return (0);
}

