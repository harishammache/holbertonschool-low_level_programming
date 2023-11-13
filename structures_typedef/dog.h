#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Define a new type struct dog with the following elements
 * @age: first parameter
 * @name: second parameter
 * @owner: third parameter
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif