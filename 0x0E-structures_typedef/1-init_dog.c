#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: parameter for pointer to variable to initialize
 * @name: parametr for name to initialize
 * @age: parameter for age to initialize
 * @owner: parameter for variable owner to initialize
 *
 * Return:
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
