#include <stdio.h>
#include "lists.h"

void __attribute__((constructor)) print_story(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
