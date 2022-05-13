#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure definition
 * @name: object1
 * @age: object2
 * @owner: object3
 *
 * desc: this structure defines dog with name, age and owner
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
void free_dog(dog_t *d);


#endif
