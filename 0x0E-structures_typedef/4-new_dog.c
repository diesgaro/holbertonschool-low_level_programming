#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Function that creates a new dog.
 *
 * @name: Pointer type char
 * @age: Variable type float
 * @owner: Pointer type char
 *
 * Return: A pointer.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int len1, len2, i;
	char *n_name, *n_owner;

	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);

	for (len1 = 0; name[len1] != '\0'; len1++)
		;
	for (len2 = 0; owner[len2] != '\0'; len2++)
		;

	n_name = malloc(sizeof(char) * (len1 + 1));
	if (n_name == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	n_owner = malloc(sizeof(char) * (len2 + 1));
	if (n_owner == NULL)
	{
		free(n_name);
		free(n_dog);
		return (NULL);
	}

	for (i = 0; i <= len1; i++)
		n_name[i] = name[i];

	for (i = 0; i <= len2; i++)
		n_owner[i] = owner[i];

	n_dog->name = n_name;
	n_dog->age = age;
	n_dog->owner = n_owner;

	return (n_dog);
}
