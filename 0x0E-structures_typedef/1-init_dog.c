#include "dog.h"
#include <stddef.h>
/**
* init_dog - intilisate a dog structor
* @d: the dog structure
* @name: the name of the dog
* @age: age of the dog
* @owner: the owner of the dog
* Return: nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
