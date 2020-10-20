#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - duplicate string
 * @str: pointer to str
 *Return: return pointer to malloc
 */

char *_strdup(char *str)
{
	char *s;
	int i;
	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != 0; i++)
	{
		size++;
	}

	s = malloc(size * sizeof(char) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size; i++)
	{
		s[i] = str[i];
	}

	return (s);
}

/**
 * new_dog - add information to struct
 * @name: pointer to char
 * @age: float
 * @owner: pointer to char
 * Return: normal
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *namecp;
	char *ownercp;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	namecp = _strdup(name);
	if (namecp == NULL)
	{
		free(namecp);
		free(dog);
		return (NULL);
	}

	ownercp = _strdup(owner);
	if (ownercp == NULL)
	{
		free(namecp);
		free(ownercp);
		free(dog);
		return (NULL);
	}

	(*dog).name = namecp;
	(*dog).owner = ownercp;
	(*dog).age = age;
	return (dog);
}
