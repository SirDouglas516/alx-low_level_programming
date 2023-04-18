#include <stdlib.h>
#include "dog.h"


/**
* init_dog - initializes a variable of type struct dog
* @d: pointer to struct dog to initialize
* @name: identity to initialize
* @age: value to initialize
* @owner: who to initialize
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
