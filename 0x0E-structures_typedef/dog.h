#ifndef DOG
#define DOG

/**
 * struct dog - struct type for dogs
 * @name: Pointer type char
 * @age: Type float
 * @owner: Pointer type char
 *
 * Description: Data structure for information about dogs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
