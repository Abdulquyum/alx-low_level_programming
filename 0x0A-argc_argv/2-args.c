#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
	int q;

	for (q = 0; q < argc; q++)
	{
		printf("%s\n", argv[q]);
	}
	return (0);
}
