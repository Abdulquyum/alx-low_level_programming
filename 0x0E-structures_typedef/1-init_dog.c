#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize variable dog
 *
 * @d: pointer to struct dog
 * @name: nmae of dog
 * @age: age of dog
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
