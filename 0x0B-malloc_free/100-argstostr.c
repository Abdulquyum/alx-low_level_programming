#include <stdlib.h>
#include <string.h>
#include "main.h"

int _strlen(char *s);

/**
 * argstostr - Cfunction that concatenates all the arguments of your program.
 *
 * @ac: parameter for argument count
 * @av: parameter for argument vector
 *
 * Return: pointer to new string.
 */
char *argstostr(int ac, char **av)
{
	int arg, q, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
		len += _strlen(av[arg]) + 1;

	str = (char *) malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	for (arg = 0, len = 0; arg < ac; arg++)
	{
		for (q = 0; av[arg][q] != '\0'; q++)
		{
			str[len++] = av[arg][q];
		}
		str[len++] = '\n';
	}

	str[len] = '\0';

	return (str);
}

/**
 * _strlen - prints lenght string
 *
 * @s: parameter for string
 *
 * Return: string lenght
 */
int _strlen(char *s)
{
	int count = 0, q;

	for (q = 0; s[q] != '\0'; q++)
		count++;

	return (count);
}
