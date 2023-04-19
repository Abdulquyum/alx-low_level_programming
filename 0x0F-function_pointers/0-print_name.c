#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 *
 * @name: parameter for pointer to name
 * @f: parameter for pointer to function
 *
 * Return: Returns pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;

	f(name);
}
