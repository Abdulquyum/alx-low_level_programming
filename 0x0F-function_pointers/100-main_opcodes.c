#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: opcodes of main.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error");
		return (2);
	}
	int q;
	unsigned char* ops = (unsigned char*) main;

	for (q = 0; q < byte; q++)
	{
		printf("%02x", *(ops + q));

		if (q != byte - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
