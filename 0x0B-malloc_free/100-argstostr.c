#include <stdlib.h>
#include "main.h"
/**
  * argstostr - concatenates all the args
  * @ac: arguments counter
  * @av: pointer to args array
  *
  * Return: pointer to concat string
  */
char *argstostr(int ac, char **av)
{
	char *size, *str;
	int i, j, size_alloc;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, size_alloc = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, size_alloc++)
			;
		size_alloc++;
	}

	size_alloc++;

	size = malloc(size_alloc * sizeof(char));

	if (size == NULL)
		return (NULL);

	str = size;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*size = av[i][j];
			size++;
		}

		*size = '\n';
		size++;
	}

	return (str);
}
