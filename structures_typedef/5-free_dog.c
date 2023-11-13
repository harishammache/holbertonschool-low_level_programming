#include "dog.h"
#include <stdio.h>
/**
 * free_dog -  frees dogs
 * @d: pointeur
*/
void free_dog(dog_t *d)
{
	free(d);
	free((*d).name);
	free((*d).owner);
}
