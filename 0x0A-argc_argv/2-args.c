#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: parameter to count arguments
 * @argv: parameter for strings passed as argument
 *
 * Return: always zero.
 */
int main(int argc, char *argv[])
{
	int q;

	for (q = 0; q < argc; q++)
	printf("%s\n", argv[q]);

	return (0);
}
