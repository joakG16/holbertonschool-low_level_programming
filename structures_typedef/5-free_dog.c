#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - a function that frees previous allocated memory
 *
 *@d: pointer to allocated memory
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
