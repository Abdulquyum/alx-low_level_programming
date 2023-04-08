#include <stdio.h>

/**
 * main - prints program name
 *
 * @argc: parameter counts number of argument passed
 * @argv: parameter for strings passed as argument to main
 *
 * Return: Returns argument passed.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}
