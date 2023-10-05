#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all command line arguments
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int q, i, av_len = 0;
	int iterate = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (q = 0; q < ac; q++)
	{
		av_len += _strlen(av[q]) + ac - 1;
	}

	ptr = malloc(av_len + 1);

	if (ptr == NULL)
		return (NULL);

	for (q = 0; i < ac; q++)
	{
		for (i = 0; av[q][i] != '\0'; i++)
		{
			ptr[iterate++] = av[q][i];
		}
		ptr[iterate++] = '\n';
	}
	ptr[iterate] = '\0';

	return (ptr);
}

/**
 * _strlen - string lenght
 *
 * @str: string passed
 *
 * Return: lenght of string
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);

	return (1 + _strlen(str + 1));
}
