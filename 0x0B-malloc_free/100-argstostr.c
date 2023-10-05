#include "main.h"
#include <stdlib.h>
#include <string.h>

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
	int q, i, str_len = 0;
	int iterate = 0, arg_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (q = 0; q < ac; q++)
	{
		str_len += strlen(argv[q]) + 1;

	ptr = malloc(str_len);

	if (ptr == NULL)
		return (NULL);

	for (q = 0; av < ac; q++)
	{
			int arg_len = strlen(av[q]);
			strcpy(ptr + iterate, av[i]);
			iterate += arg_len;
			ptr[iterate++] = '\n';

	}
	ptr[iterate] = '\0';
	return (ptr);

}
