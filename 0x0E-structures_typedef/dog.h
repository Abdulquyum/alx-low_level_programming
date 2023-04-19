#ifndef DOG_H
#define DOG_H

/**
 * struct dog - constructed to keep dog information
 *
 * @name: parameter for its name
 * @age: parametr for its age
 * @owner: parameter for its owner name
 *
 * Description: long description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
