#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 *
 *
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;

	dogg = malloc(sizeof(dog_t));

	if(dogg == NULL)
	{
		free(dogg);
		return (NULL);
	}
	else
	{
		dogg->name = malloc(sizeof(dogg->name) * (strlen(name) + 1));
			if(dogg->name == NULL)
			{
				free(dogg);
				return (NULL);
			}
			else
				strcpy(dogg->name, name);

		dogg->age = age;

		dogg->owner = malloc(sizeof(dogg->owner) * (strlen(owner) + 1));
			if(dogg->owner == NULL)
			{
				free(dogg);
				return (NULL);
			}
			else
				strcpy(dogg->owner, owner);
	}
	return(dogg);
}
