#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - A function freeing the memory allocated
 * for a struct dog
 * @d: the dog
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
