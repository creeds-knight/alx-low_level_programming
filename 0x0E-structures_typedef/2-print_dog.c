#include "dog.h"

/**
 * print_dog - A function that prints struct dog
 * @d: variable of struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d)
	{
		if (!(d->name))
			printf("Name: nil\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (!(d->owner))
			printf("Owner: nil\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}

