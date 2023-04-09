#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints program
 *
 * @argc: parameter that counts arguments passed
 * @argv: parameter that prints string
 *
 * Return: Alwyas zero.
 */
int main(int argc, char *argv[])
{
	int mul;
	int num1;
	int num2;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	return (0);
}
