#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Function that initialize a variable of type struct dog.
 *
 * @d: dog structure
 * @name: Pointer type char
 * @age: Variable type float
 * @owner: Pointer type char
 *
 * Return: 0.
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
