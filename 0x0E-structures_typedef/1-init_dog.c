#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialization of struct dog
 * @d: variable
 * @name: object of struct
 * @age: object of struct
 * @owner: object of struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
