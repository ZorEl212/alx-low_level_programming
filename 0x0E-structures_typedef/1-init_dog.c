#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize properties for dog
 * @age: age of the dog
 * @name: name of the dog
 * @owner: owner of the dog
 * @d: pointer to struct d
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->age = age;
	d->name = name;
	d->owner = owner;
}
