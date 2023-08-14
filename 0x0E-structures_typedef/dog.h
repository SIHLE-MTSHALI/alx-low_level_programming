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

#endif /* DOG_H */

