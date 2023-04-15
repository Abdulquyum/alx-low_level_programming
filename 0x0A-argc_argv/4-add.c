#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - prints addition of positive numbers
 *
 * @argc: parameter for argument counts
 * @argv: parameter for argument strings
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int q, m, sum;

	for (q = 1; q < argc; q++)
	{
		for (m = 0; argv[q][m] != '\0'; m++)
		{
			if (!isdigit(argv[q][m]))
			{
				printf("Error\n");
				return (1);
			}
		}
		 sum += atoi(argv[q]);
	}
	printf("%d\n", sum);
	return (0);
}
