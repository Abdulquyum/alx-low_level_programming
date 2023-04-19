#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * dog_t - creates a new dog
 *
 * @name: parameter for new_dog name
 * @age: parameter for new_dog age
 * @owner: parameter for new_dog owner
 *
 * Return: Null if failed, else newdog info
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lenght_1, lenght_2;

	lenght_1 = strlen(name);
	lenght_2 = strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = (char*) malloc(sizeof(char) * (lenght_1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = (char*) malloc(sizeof(char) * (lenght_2 + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
