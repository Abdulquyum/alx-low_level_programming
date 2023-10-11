#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure created for dog
 *
 * @name: member, name of dog
 * @age: dog's age
 * @owner: dog owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
