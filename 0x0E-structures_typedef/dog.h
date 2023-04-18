#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the dog basic infomation
 * @name: dog identity
 * @age: duration of existence
 * @owner: who owns the dog
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_g - typedef for struct dog
 */
typedef struct dog dog_g;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
