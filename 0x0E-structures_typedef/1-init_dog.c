#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - A fucntion that initialises a variable of type struct dog
 * @d: dog
 * @name: dog name
 * @age: age
 * @owner: name of dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
