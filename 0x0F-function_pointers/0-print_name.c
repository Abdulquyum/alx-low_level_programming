#include "function_pointers.h"
/**
 * print_name - prints a name
 *
 * @name: string pointer for name
 * @f: function pointer to a function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
