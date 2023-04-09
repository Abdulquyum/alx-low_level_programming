#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints program that multiplies two numbers
 *
 * @argc: parameter that counts arguments passed
 * @argv: parameter that prints string
 *
 * Return: Returns 1 if functiondes not receive two arg, else 0.
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	return (0);
}
