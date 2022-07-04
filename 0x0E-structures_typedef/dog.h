#ifndef STRUCTS
#define STRUCTS

/**
 * struct dog - A new type describing a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
