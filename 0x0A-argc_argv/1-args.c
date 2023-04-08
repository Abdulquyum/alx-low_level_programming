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
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
