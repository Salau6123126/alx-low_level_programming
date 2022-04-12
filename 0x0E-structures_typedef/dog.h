#ifndef GUARD
#define GUARD

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
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*typedef struct dog dog_t;*/
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
