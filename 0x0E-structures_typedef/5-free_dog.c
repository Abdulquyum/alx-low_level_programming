#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free new dog
 *
 * @d: ptr to dog
 *
 * Retrurn: NOTHING
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
