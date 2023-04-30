#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int n);

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
		exit(1);
	}
	int byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error");
		exit(2);
	}

	print_opcodes(byte);

	return (0);
}

/**
 * print_opcodes - prints opcodes of its own main function
 *
 * @n: parameter for number of bytes
 */
void print_opcodes(int n)
{
	int q;
	unsigned char* ops = (unsigned char*)print_opcodes;

	for (q = 0; q < n; q++)
	{
		printf("%02x", *(ops + q));
	}
	printf("\n");
}
