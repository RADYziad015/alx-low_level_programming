#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: dog's name
 * @owner: owner's name
 *@age: dog's age
 *
 * Description: just along dog struct in a big kitty world
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
