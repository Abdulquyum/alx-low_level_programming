#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 *
 * @d: ptr to structdog
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL || d->age == 0 || d->owner == NULL)
		printf("%s\n", "nil");

	if (d == NULL)
		return;

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
