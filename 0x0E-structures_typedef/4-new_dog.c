#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a new dog
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

	lenght_1 = _strlen(name);
	lenght_2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = (char *) malloc(sizeof(char) * (lenght_1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = (char *) malloc(sizeof(char) * (lenght_2 + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

/**
 * _strlen - prints lenght of string
 *
 * @s: parameter for pointer to string
 *
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int count  = 0;
	int q;

	for (q = 0; s[q] != '\0'; q++)
	count++;

	return (count);
}

/**
 * _strcpy - copy string from source to destination
 *
 * @dest: parameter for destination
 * @src: parameter for source
 *
 * Return: return destination
 */
char *_strcpy(char *dest, char *src)
{
	int q;

	for (q = 0; src[q] != '\0'; q++)
		dest[q] = src[q];
	dest[q++] = '\0';

	return (dest);
}
