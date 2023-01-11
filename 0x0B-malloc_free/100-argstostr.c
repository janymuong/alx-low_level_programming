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
	char *str;
	int size_alloc, i, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size_alloc++;
		size_alloc++;
	}

	str = malloc(sizeof(char) * (size_alloc + 1));

	if (str == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	return (str);
}
