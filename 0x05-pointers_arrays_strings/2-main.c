#include <stdio.h>
#include "main.h"

/**
 * main - checks code
 *
 * Return: Always 0 Success.
 */
int main(void)
{
	int len;
	char *str;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
