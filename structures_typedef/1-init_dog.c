#include <stdio.h>
#include "dog.h"
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: first pointeur
 * @name: second pointeur
 * @age: first variable
 * @owner: third pointeur
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
