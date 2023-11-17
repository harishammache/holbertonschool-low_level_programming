#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of a string.
 * @s: caractere checked
 *
 * Return: lenght
*/
int _strlen(char *s)
{
	int lenght = 0;

	while (*(s + lenght) != '\0')
	{
		lenght++;
	}
	return (lenght);
}
/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointeur
 * @src: point
 *
 * Return: dest (success)
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog -  creates a new dog
 * @name: first pointeur
 * @age: variable
 * @owner: seconde pointeur
 *
 * Return: NULL if function fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *create_dog;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	create_dog = malloc(sizeof(dog_t));
	if (create_dog == NULL)
	{
		return (NULL);
	}
	(*create_dog).name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*create_dog).name == NULL)
	{
		free(create_dog->name);
		free(create_dog);
		return (NULL);
	}
	(*create_dog).owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*create_dog).owner == NULL)
	{
		free(create_dog->owner);
		free((*create_dog).name);
		free(create_dog);
		return (NULL);
	}
	(*create_dog).name = _strcpy((*create_dog).name, name);
	(*create_dog).age = age;
	(*create_dog).owner = _strcpy((*create_dog).owner, owner);

	return (create_dog);
}
