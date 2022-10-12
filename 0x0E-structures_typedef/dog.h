#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog with a name, age and owner
 * @name: string
 * @age: float
 * @owner: string
 */

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
g(dog_t *d);

#endif

