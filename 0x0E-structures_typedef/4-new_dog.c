#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
/**
 * *_strcpy - this function return the legth of a string
 *
 * @dest: where the source need to be copied
 * @src: source of the string
 *
 * Return: Dest ponter
 */
char *_strcpy(char *dest, char *src)
{
	int length;

	for (length = 0; src[length] != '\0'; length++)
	{
		dest[length] = src[length];
	}
	dest[length] = src[length];
	return (dest);
}
/**
 * _strlen - this function return the legth of a string
 *
 * @s: value
 *
 * Return: value
 */
int _strlen(char *s)
{
	char n = 'a';
	int i;

	for (i = 0; (n != '\0'); i++)
	{
		n = s[i];
	}
	return (i - 1);
}
/**
 * new_dog - this funcion prints dog nfo
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newerDog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	newerDog = malloc(sizeof(dog_t));
	if (newerDog == NULL)
		return (NULL);

	newerDog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newerDog->name == NULL)
	{
		free(newerDog);
		return (NULL);
	}

	newerDog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newerDog->owner == NULL)
	{
		free(newerDog->name);
		free(newerDog);
		return (NULL);
	}

	newerDog->name = _strcpy(newerDog->name, name);
	newerDog->age = age;
	newerDog->owner = _strcpy(newerDog->owner, owner);

	return (newerDog);
}
