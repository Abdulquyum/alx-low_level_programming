#include <stdio.h>
#include "lists.h"

/**
 * print_story - prints story of tortoise and hare before main
 *
 * Return: Nothing
 */
void __attribute__((constructor)) print_story(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
