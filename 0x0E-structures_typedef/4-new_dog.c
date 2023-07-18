#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Returns the length of a string
 * @s: the string
 *
 * Return: the string's length
 */
int _strlen(char *s)
{
	int t;

	t = 0;

	while (s[t] != '\0')
	{
		t++;
	}
	return (t);
}

/**
 * *_strcpy - It copies the string pointed by src
 * including the null byte (\0) to the buffer
 * pointed by dest
 * @src: string copied
 * @dest: pointer to buffer
 *
 * Return: the pointer
 */
char *_strcpy(char *dest, char *src)
{
	int len, t;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}

	for (t = 0; t < len; t++)
	{
		dest[t] = src[t];
	}
	dest[t] = '\0';
	return (dest);
}

/**
 * new_dog - creating a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to the dog, otherwize NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
