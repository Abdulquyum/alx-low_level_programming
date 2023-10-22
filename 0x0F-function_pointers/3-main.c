#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - handel simple calculator
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (ops[q].op[0] == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	(*get_op_fun(arg[2]))(a, b);

	return (0);
}
