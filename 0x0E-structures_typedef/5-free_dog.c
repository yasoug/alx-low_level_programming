#include "dog.h"

/**
 * free_dog - function that frees instance of struct dog
 * @d: variable of type struct dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
