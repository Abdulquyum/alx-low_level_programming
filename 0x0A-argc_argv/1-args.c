#include <stdio.h>

/**
 * main - prints number of arguments passed into it
 *
 * @argc: parameter to count argument
 * @argv: parameter for strings of argument
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int q;

	for (q = 0; q < argc; q++)
	printf("%d\n", q);
	return (0);
}
