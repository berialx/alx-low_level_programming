#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - defines the different data types
 * @name: name of the dogs
 * @age: age of the dogs
 * @owner: owner of the dogs
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * typedef dog_t - defines a new name for type struct dog
 */
typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
