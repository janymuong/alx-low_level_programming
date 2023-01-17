#include <stdlib.h>
#include "dog.h"

/**
  * new_dog - creates a new dog type struct dog
  * @name: name thw dog
  * @age: age
  * @owner: owmer person's name
  *
  * Return: newly created dog type struct dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len = 0, owner_len = 0, i = 0;

	dog_t *new_dog = NULL;

	while (name[name_len] != '\0')
		name_len++;
	while (owner[owner_len] != '\0')
		owner_len++;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = malloc(name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	for (; i <= name_len; i++)
		new_dog->name[i] = name[i];
	for (; i <= owner_len; i++)
		new_dog->owner[i] = owner[i];
	new_dog->age = age;
	return (new_dog);
}
