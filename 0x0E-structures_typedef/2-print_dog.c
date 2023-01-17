#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_dog - print a struct dog
  * @d: pointer to struct dog memory block
  *
  * Return: void
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		printf("Name: %s\n", d->name);

		if (!(d->age))
			printf("Age: (nil)\n");
		printf("Age: %.6f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		printf("Owner: %s\n", d->owner);
	}
}
