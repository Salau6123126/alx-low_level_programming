#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: init d
 * @name: name
 * @age: age
 * @owner: owner
 * Description: Anyhow
 * Return: (0)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
