#ifndef GUARD
#define GUARD
#include <stdio.h>

/**
 * struct dog - My first struct definition
 * @name: Pointer to name
 * @age: Age
 * @owner: Pointer to owner
 *
 * Description: Nothing really
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t
#endif
