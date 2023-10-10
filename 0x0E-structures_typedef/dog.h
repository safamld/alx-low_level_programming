#ifndef _HEADER_
#define _HEADER_
/**
* struct dog - structure qui retourne type de chien
* @name: the name of the dog
* @age: the age
* @owner: the owner
* return: sucess
*/
struct dog
{
char *name;
float age;
char *owner;
};
/**
* dog_t - typedef for dog structure
*/
typedef struct dog  dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
