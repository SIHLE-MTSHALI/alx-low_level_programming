#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a structure for dogs
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: Define a new type struct dog with the following elements:
 * name, type = char *
 * age, type = float
 * owner, type = char *
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





#endif /* DOG_H */

