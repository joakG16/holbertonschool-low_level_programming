#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 *new_dog - a function that creates a new dog(dynamically)
 *
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 *Return: pointer of type dog_t that points to the allocated memory
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;

	dogg = malloc(sizeof(dog_t));

	if (dogg == NULL)
	{
		return (NULL);
	}
	else
	{
		dogg->name = malloc(sizeof(dogg->name) * (strlen(name) + 1));
			if (dogg->name == NULL)
			{
				free(dogg);
				return (NULL);
			}
			else
				strcpy(dogg->name, name);

		dogg->age = age;

		dogg->owner = malloc(sizeof(dogg->owner) * (strlen(owner) + 1));
			if (dogg->owner == NULL)
			{
				free(dogg->name);
				free(dogg);
				return (NULL);
			}
			else
				strcpy(dogg->owner, owner);
	}
	return (dogg);
}
