#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (q = 1; q < argc; q++)
	{
		if (strspn(argv[q], "0123456789") != strlen(argv[q]))
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
