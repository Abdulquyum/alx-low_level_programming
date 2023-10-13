#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints opscode of its main
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
	int q, n;
	unsigned char *instruct_ptr, opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	int (*ptr)(int, char **) = &main;

	for (q = 0; q < n; q++)
	{
		instruct_ptr = (unsigned char*)ptr;
		opcode = *instruct_ptr;
		printf("%02x", opcode);

		if (q < n -1)
			printf(" ");
		instruct_ptr++;
	}
	printf("\n");

	return (0);
}
