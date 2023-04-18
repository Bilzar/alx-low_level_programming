#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the dogs
 * @d: dogin
 * Return: no return
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
